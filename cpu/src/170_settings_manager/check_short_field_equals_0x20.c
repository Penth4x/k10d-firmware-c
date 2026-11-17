/* @k10d check_short_field_equals_0x20 @ 0x1047ee58
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns 2 if the short at offset 0x28 of the given structure equals 0x20, otherwise 0.
 * summary:
 *   The function reads a 16-bit value from param_1 + 0x28 and compares it to the constant
 *   0x20. It returns 2 on a match and 0 on a mismatch. No other memory is accessed and no
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_short_field_equals_0x20(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  if (*(short *)(param_1 + 0x28) != 0x20) {
    uVar1 = 0;
  }
  return uVar1;
}
