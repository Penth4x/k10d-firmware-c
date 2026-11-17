/* @k10d pack_two_word_value_10467880 @ 0x10467880
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Combines a 16-bit value in param_2 with a 16-bit value in param_3 shifted left by 16
 *   bits into a single 32-bit word.
 * summary:
 *   The function performs a simple bitwise OR of param_2 with param_3 shifted left by 0x10.
 *   It has no callees and no side effects. It is called by call_two_helpers_then_third
 *   within the firmware_update module, likely to construct a 32-bit identifier or address
 *   from two 16-bit components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint pack_two_word_value_10467880(uint32_t param_1,uint param_2,int param_3)

{
  return param_3 << 0x10 | param_2;
}
