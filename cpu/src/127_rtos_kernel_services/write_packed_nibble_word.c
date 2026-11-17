/* @k10d write_packed_nibble_word @ 0x104575c0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Packs four 3-bit fields into a 16-bit word and stores it at a fixed offset in a heap-
 *   allocated structure.
 * summary:
 *   The function takes a base pointer (param_1), dereferences the pointer at offset 0x10,
 *   and writes a 16-bit value to offset 0x1004 of that target structure. The value is
 *   constructed by masking four input parameters to 3 bits each and shifting them into
 *   positions 12, 8, 4, and 0. It has no callees and performs a single memory write.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_packed_nibble_word(int param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1004) =
       (param_2 & 7) << 0xc | (param_3 & 7) << 8 | (param_4 & 7) << 4 | param_5 & 7;
  return;
}
