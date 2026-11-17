/* @k10d send_two_byte_mailbox_message @ 0x1043139a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Sends a 2-byte payload to a mailbox identified by the id stored at param_1+100.
 * summary:
 *   Calls the verified mbx_send_message helper with the mailbox id pointer at param_1+100,
 *   the payload pointer param_2, and a length of 2. Returns the helper's status code
 *   directly. No other side effects or camera-specific registers are touched in this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int send_two_byte_mailbox_message(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = mbx_send_message((uint32_t *)(param_1 + 100),param_2,2);
  return iVar1;
}
