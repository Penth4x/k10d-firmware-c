/* @k10d initialize_state_variables_000cef92 @ 0x000cef92
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets several global state variables and calls four initialization routines.
 * summary:
 *   The function calls FUN_000d0720, dispatch_param_to_callees, FUN_000d084e, and
 *   clear_flag_if_bit6_set. It sets _DAT_0003cf00 to 0, sets bit 0 of DAT_0003ce06, and
 *   writes 0xff and 0x13 to DAT_00000048 and DAT_0000004e respectively. It also copies
 *   values between several _DAT_ globals.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_state_variables_000cef92(void)

{
  FUN_000d0720();
  dispatch_param_to_callees(_DAT_0003f250);
  _DAT_0003cf00 = 0;
  FUN_000d084e();
  DAT_0003ce06 = DAT_0003ce06 | 1;
  DAT_00000048 = 0xff;
  DAT_0000004e = 0x13;
  _DAT_0003ce34 = _DAT_0003ce18;
  _DAT_0003ce1c = (uint16_t)_DAT_0000005a;
  clear_flag_if_bit6_set();
  _DAT_0003cd60 = _DAT_0003c134;
  return;
}
