/* @k10d compute_offset_from_index @ 0x10482a2a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Returns the value of param_2 multiplied by 2 plus 0x21.
 * summary:
 *   The function performs a simple arithmetic calculation: it takes the second argument
 *   (param_2), doubles it, and adds the constant 0x21 (33). The first argument (param_1) is
 *   unused. There are no callees or side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

short compute_offset_from_index(uint32_t param_1,short param_2)

{
  return param_2 * 2 + 0x21;
}
