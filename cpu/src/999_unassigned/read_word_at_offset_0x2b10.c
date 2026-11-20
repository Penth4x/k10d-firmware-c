/* @k10d read_word_at_offset_0x2b10 @ 0x104d68f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the 32-bit value stored at offset 0x2b10 from the pointer in param_1.
 * summary:
 *   The function performs a single memory read from the address (param_1 + 0x2b10) and
 *   returns the result. It has no callees and no side effects. The specific meaning of the
 *   data at this offset is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_word_at_offset_0x2b10(int param_1)

{
  return *(uint32_t *)(param_1 + 0x2b10);
}
