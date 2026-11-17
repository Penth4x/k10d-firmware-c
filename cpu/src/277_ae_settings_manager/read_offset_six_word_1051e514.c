/* @k10d read_offset_six_word_1051e514 @ 0x1051e514
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at offset 6 of the object pointed to by param_1.
 * summary:
 *   The function performs a single 16-bit memory read from the address param_1 + 6 and
 *   returns it. It has no callees and no side effects. The specific role of the object at
 *   offset 6 cannot be determined from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_six_word_1051e514(int param_1)

{
  return *(uint16_t *)(param_1 + 6);
}
