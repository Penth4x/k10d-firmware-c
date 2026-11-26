/* @k10d create_or_open_kernel_object @ 0x10459da2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Creates a new kernel object or opens an existing one based on the object ID in param_2.
 * summary:
 *   Validates the object type (param_3) and stores the object ID (param_2) and flags
 *   (param_4) into the structure pointed to by param_1. If param_2 is 0, it calls
 *   find_free_queue_slot_1000d978 to create a new object; otherwise, it calls
 *   validate_task_request to open an existing one. Returns the object ID on success or an
 *   error code (-2 for invalid type, -3 for kernel call failure).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int create_or_open_kernel_object(int *param_1,int param_2,int param_3,uint16_t param_4)

{
  int iVar1;
  int iVar2;
  /* Descriptor-split bug (same class as create_kernel_object): the kernel reads a 2-halfword
   * descriptor {attr@+0, param_4@+2} (find_free_queue_slot_1000d978 reads param_1[1] when attr==3),
   * but the decompiler emitted uStack_8@sp+8 and uStack_6@sp+6 (DESCENDING, non-adjacent) and passed
   * &uStack_8, so +2 landed on an uninitialized slot. Lay the two halfwords out contiguously. */
  uint16_t desc[2];

  if (param_3 == 1) {
    desc[0] = 0;
  }
  else if (param_3 == 2) {
    desc[0] = 1;
  }
  else if (param_3 == 3) {
    desc[0] = 2;
  }
  else {
    if (param_3 != 4) {
      return -2;
    }
    desc[0] = 3;
  }
  *param_1 = param_2;
  desc[1] = param_4;
  if (param_2 == 0) {
    iVar1 = __trap_find_free_queue_slot_1000d978(desc);
    if (0 < iVar1) {
      *param_1 = iVar1;
      return iVar1;
    }
  }
  else {
    iVar1 = __trap_validate_task_request((int)(short)param_2,desc);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = -3;
  }
  return iVar2;
}
