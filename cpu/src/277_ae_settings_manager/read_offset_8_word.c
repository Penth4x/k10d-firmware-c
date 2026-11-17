/* @k10d read_offset_8_word @ 0x1051e51a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the 16-bit value stored at offset 8 of the object pointed to by param_1.
 * summary:
 *   The function performs a single memory read of an undefined2 (16-bit) value from the
 *   address param_1 + 8. It has no callees and no side effects. The specific role of the
 *   object or the meaning of the field at offset 8 cannot be determined from the provided
 *   pseudocode and caller addresses alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_offset_8_word(int param_1)

{
  return *(uint16_t *)(param_1 + 8);
}
