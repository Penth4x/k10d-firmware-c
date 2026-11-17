/* @k10d pack_four_bytes_big_endian_1042b9ee @ 0x1042b9ee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Packs four 8-bit values into a 32-bit big-endian word.
 * summary:
 *   The function takes four integer parameters and a byte, then combines them into a single
 *   32-bit value using bit shifts and bitwise OR. The byte is placed in the most
 *   significant byte (bits 24-31), followed by the other three parameters in descending
 *   order of significance. No memory access or external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint pack_four_bytes_big_endian_1042b9ee(uint32_t param_1,uint param_2,int param_3,int param_4,byte param_5)

{
  return (uint)param_5 << 0x18 | param_4 << 0x10 | param_3 << 8 | param_2;
}
