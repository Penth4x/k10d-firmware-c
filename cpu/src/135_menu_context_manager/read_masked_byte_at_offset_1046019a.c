/* @k10d read_masked_byte_at_offset_1046019a @ 0x1046019a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Reads a byte from memory at (param_1 + param_2 + 4) and returns its bitwise AND with
 *   param_3.
 * summary:
 *   The function performs a single byte load from the address computed as param_1 plus
 *   param_2 plus 4. It then applies a bitwise AND mask using param_3 and returns the
 *   result. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_masked_byte_at_offset_1046019a(cls_105a6e1c *param_1,int param_2,byte param_3)

{
  return *(byte *)((int)&param_1[1].field_0x0 + param_2) & param_3;
}
