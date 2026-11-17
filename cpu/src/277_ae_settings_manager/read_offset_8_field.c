/* @k10d read_offset_8_field @ 0x1051e930
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at offset 8 of the object pointed to by param_1.
 * summary:
 *   The function performs a single 16-bit memory read from the address param_1 + 8 and
 *   returns it. It has no callees and no side effects. The caller process_exposure_sequence
 *   uses this to extract a specific field from a data structure, but the structure's
 *   meaning is not determinable from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_8_field(int param_1)

{
  return *(uint16_t *)(param_1 + 8);
}
