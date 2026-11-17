/* @k10d reg_framework_send @ 0x10459abe
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed send_mailbox_message)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sends a message to the mailbox whose id is stored at param_1+0x14 via mbx_send_message.
 * summary:
 *   One-call wrapper in the rtos_wrappers_and_heap module that forwards r5/r6 as the
 *   payload/code to mbx_send_message, targeting the mailbox id at offset 0x14 of the object
 *   in param_1. Returns the kernel send status. No camera-specific role is evident from the
 *   code or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Register-framework enqueue (internal command bus; interval engine + AE writers use it). */

int reg_framework_send(int param_1)

{
  int iVar1;
  void *r5_in;
  uint32_t r6_in;
  
  iVar1 = mbx_send_message((uint32_t *)(param_1 + 0x14),r5_in,r6_in);
  return iVar1;
}
