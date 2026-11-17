/* @k10d compare_bytes_at_offsets_1051e968 @ 0x1051e968
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if the byte at offset 5 of the given pointer is less than the byte at
 *   offset 3.
 * summary:
 *   The function performs a simple unsigned byte comparison between two fields within a
 *   structure pointed to by param_1. It loads the byte at offset 5 and the byte at offset
 *   3, then returns the result of the less-than comparison. No other side effects or memory
 *   writes occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool compare_bytes_at_offsets_1051e968(int param_1)

{
  return *(byte *)(param_1 + 5) < *(byte *)(param_1 + 3);
}
