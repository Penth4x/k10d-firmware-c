/* @k10d read_field_at_offset_248 @ 0x10515f54
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from the object at offset 0xf8 via a helper.
 * summary:
 *   Takes a pointer in param_1, adds offset 0xf8, and passes the result to
 *   iterate_struct_array_for_nonzero. Returns the helper's result directly. No other side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_248(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = iterate_struct_array_for_nonzero(param_1 + 0xf8);
  return uVar1;
}
