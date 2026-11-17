/* @k10d read_byte_at_offset_one_1051e4f6 @ 0x1051e4f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns the byte located at offset 1 from the given pointer.
 * summary:
 *   The function takes a single pointer argument and dereferences the memory location at
 *   offset 1. It has no callees and performs no side effects. The specific data structure
 *   or subsystem context is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_one_1051e4f6(int param_1)

{
  return *(uint8_t *)(param_1 + 1);
}
