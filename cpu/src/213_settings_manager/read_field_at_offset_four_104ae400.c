/* @k10d read_field_at_offset_four_104ae400 @ 0x104ae400
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 4 of the object pointed to by param_1.
 * summary:
 *   The function performs a single 32-bit memory read from the address param_1 + 4 and
 *   returns it. It has no callees and no visible side effects. The caller at 0x104ae43e is
 *   not named, so the specific object type or subsystem role cannot be determined from the
 *   provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_four_104ae400(int param_1)

{
  return *(uint32_t *)(param_1 + 4);
}
