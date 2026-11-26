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
 * B-3 FIX (d327): original bytes (verified static decode of 0x10459abe) only remap r4 ->
 *   param_1+0x14; r5 and r6 are passed THROUGH unchanged to mbx_send_message. The decompile
 *   dropped them (r5_in/r6_in read as uninitialised locals), and every caller was emitted with
 *   a single argument, so the payload+code never reached the mailbox. Restore the two forwarded
 *   params; callers must be fixed to pass the built packet (r5) and code (r6).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* Register-framework enqueue (internal command bus; interval engine + AE writers use it).
   param_2 -> r5 (message payload), param_3 -> r6 (message code). */

int reg_framework_send(int param_1, void *param_2, uint32_t param_3)

{
  return mbx_send_message((uint32_t *)(param_1 + 0x14), param_2, param_3);
}
