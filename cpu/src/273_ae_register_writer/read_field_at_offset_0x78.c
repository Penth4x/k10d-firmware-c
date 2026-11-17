/* @k10d read_field_at_offset_0x78 @ 0x10515f40
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Returns the value of a field at offset 0x78 in the object pointed to by param_1.
 * summary:
 *   This function is a thin wrapper that calls iterate_struct_array_for_nonzero with an
 *   address computed as param_1 + 0x78. It returns the result of that call directly. The
 *   specific role of the field at offset 0x78 and the behavior of
 *   iterate_struct_array_for_nonzero are unknown, so the function is named mechanically
 *   based on the offset accessed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0x78(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = iterate_struct_array_for_nonzero(param_1 + 0x78);
  return uVar1;
}
