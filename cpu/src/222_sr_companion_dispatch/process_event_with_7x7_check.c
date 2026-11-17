/* @k10d process_event_with_7x7_check @ 0x104b8ab6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Checks a condition on an object, validates a 7x7 parameter pair, and dispatches a
 *   handler with a flag.
 * summary:
 *   The function calls set_pointer_and_clear_flag to check a state at offset 0x2c. If true,
 *   it sets a flag based on whether param_2 and param_3 are both 7. It then calls
 *   eventflag_clr_flg and send_two_byte_payload, passing the negated flag. If
 *   send_two_byte_payload returns non-zero, it calls twai_flg_obj. Finally, it calls
 *   delete_signal_semaphore to clean up or reset the state at offset 0x2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int process_event_with_7x7_check(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  iVar2 = 0;
  if (bVar1) {
    bVar1 = false;
    if ((param_2 == 7) && (param_3 == 7)) {
      bVar1 = true;
    }
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iVar2 = send_two_byte_payload(*(int **)(param_1 + 0x18),(void *)(param_1 + 4),0x29,!bVar1);
    if (iVar2 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iVar2;
}
