/* @k10d call_helper_with_zero_flag_104279f0 @ 0x104279f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Calls eventflag_wai_flg with a pointer to param_1+8, a constant 1, a zero flag, and a
 *   RAM address.
 * summary:
 *   The function sets a local variable to 0 and passes it by reference to
 *   eventflag_wai_flg. The first argument is a pointer offset by 8 bytes from the input
 *   parameter. The fourth argument is a fixed RAM address (iRam105a2af4). The role of
 *   eventflag_wai_flg is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_flag_104279f0(int param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 8),1,&uStack_c,iRam105a2af4);
  return;
}
