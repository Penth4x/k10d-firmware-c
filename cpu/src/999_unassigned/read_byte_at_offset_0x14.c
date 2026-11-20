/* @k10d read_byte_at_offset_0x14 @ 0x10433ce8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the byte located at offset 0x14 from the pointer passed in param_1.
 * summary:
 *   The function performs a single memory read from the address (param_1 + 0x14) and
 *   returns the resulting byte. It has no callees and no side effects. The specific meaning
 *   of the data at this offset is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_0x14(int param_1)

{
  return *(uint8_t *)(param_1 + 0x14);
}
