/* @k10d read_masked_byte_at_offset_104600b4 @ 0x104600b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 135_menu_context_manager (unit names are model-proposed)
 * purpose:
 *   Reads a byte from a buffer at a computed offset and returns it masked with a provided
 *   bitmask.
 * summary:
 *   The function takes a base pointer, an integer offset, and a byte mask. It calculates
 *   the address as base + offset + 4, reads the byte at that location, and performs a
 *   bitwise AND with the mask. It returns the resulting masked byte value. No other side
 *   effects or memory writes occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_masked_byte_at_offset_104600b4(void *param_1,int param_2,byte param_3)

{
  return *(byte *)((int)param_1 + param_2 + 4) & param_3;
}
