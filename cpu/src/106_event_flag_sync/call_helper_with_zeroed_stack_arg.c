/* @k10d call_helper_with_zeroed_stack_arg @ 0x10427b2e
 * name: model (proposed by the local model from the decompile, confidence 0.30)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Calls eventflag_wai_flg with a pointer to param_1+8, size 0x10, a zeroed stack value,
 *   and a RAM address.
 * summary:
 *   The function sets a local stack variable to 0 and passes it, along with a pointer
 *   offset by 8 from param_1, the constant 0x10, and the RAM address iRam105a2af4, to the
 *   callee eventflag_wai_flg. The role of the callee and the data structures involved are
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zeroed_stack_arg(int param_1)

{
  uintptr_t sp;
  uint32_t uStack_c;
  
  uStack_c = 0;
  eventflag_wai_flg((uint32_t *)(param_1 + 8),0x10,&uStack_c,iRam105a2af4);
  return;
}
