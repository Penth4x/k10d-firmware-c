/* @k10d write_byte_at_offset_0xc @ 0x104d782a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Stores a single byte parameter into the memory location at offset 0xc of a given
 *   pointer.
 * summary:
 *   The function takes a pointer (param_1) and a byte value (param_2) and writes the value
 *   to the memory address param_1 + 0xc. It performs no other operations and has no
 *   callees. The specific role of the data structure at this offset is not determinable
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_at_offset_0xc(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0xc) = param_2;
  return;
}
