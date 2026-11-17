/* @k10d call_helper_with_offset_and_flag_104279d4 @ 0x104279d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 106_event_flag_sync (unit names are model-proposed)
 * purpose:
 *   Invokes a helper function with a pointer offset by 8, a flag of 1, a null pointer, and
 *   a global constant.
 * summary:
 *   The function takes a single integer parameter and calls eventflag_wai_flg. It passes
 *   the address of the parameter plus 8 as the first argument, the integer 1 as the second,
 *   a null pointer as the third, and the global variable _DAT_105a2af0 as the fourth. The
 *   function itself performs no other operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_offset_and_flag_104279d4(int param_1)

{
  eventflag_wai_flg((uint32_t *)(param_1 + 8),1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
