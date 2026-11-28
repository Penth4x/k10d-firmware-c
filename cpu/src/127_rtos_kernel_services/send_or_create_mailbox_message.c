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

int send_or_create_mailbox_message(int *mailbox_id_ptr,int mailbox_id,uint16_t code_hi,uint16_t code_lo)

{
  struct {
    uint16_t uStack_c;
    uint16_t uStack_a;
    uint32_t uStack_8;
  } frame;
  int syscall_ret;
  int result;
  uintptr_t sp;
  frame.uStack_8 = 0;
  *(uint32_t *)&frame.uStack_c = CONCAT22(code_hi,code_lo);
  *mailbox_id_ptr = mailbox_id;
  if (mailbox_id == 0) {
    syscall_ret = __trap_allocate_free_task_slot(&frame.uStack_c);
    if (0 < syscall_ret) {
      *mailbox_id_ptr = syscall_ret;
      return syscall_ret;
    }
  }
  else {
    syscall_ret = __trap_validate_and_store_task_param((int)(short)mailbox_id,&frame.uStack_c);
  }
  result = 0;
  if (syscall_ret != 0) {
    result = -3;
  }
  return result;
}
