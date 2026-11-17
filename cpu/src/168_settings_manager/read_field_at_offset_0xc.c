/* @k10d read_field_at_offset_0xc @ 0x1047d6a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 32-bit value stored at offset 0xc of the structure pointed to by param_1.
 * summary:
 *   This is a trivial accessor that dereferences param_1 + 0xc and returns the result in
 *   r4. It has no callees and performs no side effects. The specific meaning of the field
 *   at offset 0xc cannot be determined from this function alone without knowledge of the
 *   structure layout.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_field_at_offset_0xc(void *param_1)

{
  return *(uint32_t *)((int)param_1 + 0xc);
}
