/* @k10d compute_checksum_byte @ 0x1045c67c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Computes a single checksum byte from a 4-byte input structure and stores it at offset
 *   2.
 * summary:
 *   The function reads a 16-bit value and a byte from the input pointer. It applies a
 *   series of arithmetic operations, including division, bit shifts, and a modulo 7
 *   operation, to generate a result. This result is written back to the third byte of the
 *   input structure and returned. The specific arithmetic logic does not clearly map to a
 *   standard camera subsystem function without further context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_checksum_byte(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  uVar1 = (uint)*(byte *)(param_1 + 1);
  if (uVar1 < 3) {
    uVar2 = uVar2 - 1;
    uVar1 = uVar1 + 0xc;
  }
  uVar1 = (int)((uVar1 * 0xd + 8) / 5 + (uint)*(byte *)((int)param_1 + 3) +
               ((int)uVar2 / 400 - (int)uVar2 / 100) +
               ((int)(((uint)((int)uVar2 >> 1) >> 0x1e) + uVar2) >> 2) + uVar2) % 7;
  *(char *)(param_1 + 2) = (char)uVar1;
  return uVar1 & 0xff;
}
