/* @k10d send_or_create_mailbox_message @ 0x104599dc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sends a 16-bit code and 32-bit payload to a mailbox, creating the mailbox first if the
 *   id is zero.
 * summary:
 *   Writes the mailbox id (param_2) into *param_1. If the id is zero, it calls
 *   allocate_free_task_slot with the packed 32-bit value (param_3|param_4) to create a new
 *   mailbox, storing the new id in *param_1. If the id is non-zero, it calls
 *   validate_and_store_task_param with the 16-bit code (param_2) and the packed payload.
 *   Returns the result of the kernel call, or -3 if the call failed (non-zero return).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int send_or_create_mailbox_message(int *param_1,int param_2,uint16_t param_3,uint16_t param_4)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint16_t uStack_c;
  uint16_t uStack_a;
  uint32_t uStack_8;
  
  uStack_8 = 0;
  *(uint32_t *)&uStack_c = CONCAT22(param_3,param_4);
  *param_1 = param_2;
  if (param_2 == 0) {
    iVar1 = __trap_allocate_free_task_slot(&uStack_c);
    if (0 < iVar1) {
      *param_1 = iVar1;
      return iVar1;
    }
  }
  else {
    iVar1 = __trap_validate_and_store_task_param((int)(short)param_2,&uStack_c);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = -3;
  }
  return iVar2;
}
