/* @k10d loop_receive_and_dispatch_message @ 0x10431272
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Continuously blocks on a mailbox receive and passes the payload to a handler function.
 * summary:
 *   Initializes a local pointer to zero and calls an unknown setup function on the
 *   parameter. Enters an infinite loop that calls mbx_receive_message to block until a
 *   message is available, then passes the received 32-bit payload to
 *   process_event_and_release along with the original parameter. The loop repeats
 *   indefinitely, suggesting this is a task entry point or main dispatch loop for a
 *   specific subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void loop_receive_and_dispatch_message(void *param_1)

{
  int iVar1;
  uintptr_t sp;
  uint32_t *puStack_c;
  
  puStack_c = (uint32_t *)0x0;
  process_mode_transition_sequence(param_1);
  do {
    do {
      iVar1 = mbx_receive_message_104598e8((uint32_t *)((int)param_1 + 100),(uint32_t *)(&puStack_c),(uint32_t)(uRam105a2b18));
    } while (iVar1 == 0);
    process_event_and_release((int)param_1,puStack_c);
  } while( true );
}
