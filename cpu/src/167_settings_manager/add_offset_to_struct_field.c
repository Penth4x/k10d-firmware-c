/* @k10d add_offset_to_struct_field @ 0x104752f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the value of a short field at offset 0x2a in the given structure plus 100.
 * summary:
 *   The function reads a 16-bit signed value from param_1 + 0x2a and adds the constant 100
 *   to it. No other memory is accessed and no callees are invoked. The meaning of the field
 *   at offset 0x2a is not determinable from the provided pseudocode or caller context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short add_offset_to_struct_field(int param_1)

{
  return *(short *)(param_1 + 0x2a) + 100;
}
