/* @k10d get_value_if_flag_one @ 0x10435142
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 124_ui_state_router (unit names are model-proposed)
 * purpose:
 *   Returns the value of DAT_105bb618 if param_2 is 1, otherwise returns 0.
 * summary:
 *   The function checks if the second argument equals 1. If true, it loads and returns the
 *   32-bit value stored at DAT_105bb618. If false, it returns 0. The role of DAT_105bb618
 *   is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t get_value_if_flag_one(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 == 1) {
    uVar1 = _DAT_105bb618/*ROM*/;
  }
  return uVar1;
}
