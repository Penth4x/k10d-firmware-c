/* @k10d send_mailbox_message @ 0x10459856
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Sends a mailbox message with a 32-bit payload of 0 and a 16-bit code of 3 to the
 *   mailbox whose id is in *param_1.
 * summary:
 *   One-line wrapper that calls send_or_create_mailbox_message with arguments (param_1, 0,
 *   2, 3). It sits in the rtos_wrappers_and_heap module alongside verified mbx_send_message
 *   and mbx_receive_message, and is invoked as virtual slot 2 of two classes and from a
 *   constructor, consistent with a mailbox send operation. The exact semantics of the
 *   second and third arguments to send_or_create_mailbox_message are not independently
 *   verified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_mailbox_message(int *param_1)

{
  send_or_create_mailbox_message(param_1,0,2,3);
  return;
}
