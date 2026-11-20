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
  uintptr_t sp;
  uint16_t uStack_8;
  uint16_t uStack_6;
  
  if (param_3 == 1) {
    uStack_8 = 0;
  }
  else if (param_3 == 2) {
    uStack_8 = 1;
  }
  else if (param_3 == 3) {
    uStack_8 = 2;
  }
  else {
    if (param_3 != 4) {
      return -2;
    }
    uStack_8 = 3;
  }
  *param_1 = param_2;
  uStack_6 = param_4;
  if (param_2 == 0) {
    iVar1 = __trap_find_free_queue_slot_1000d978(&uStack_8);
    if (0 < iVar1) {
      *param_1 = iVar1;
      return iVar1;
    }
  }
  else {
    iVar1 = __trap_validate_task_request((int)(short)param_2,&uStack_8);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = -3;
  }
  return iVar2;
}
