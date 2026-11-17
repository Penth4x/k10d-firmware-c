/* @k10d scale_table_value_by_mode @ 0x000c322a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Scales a byte from a lookup table by a signed factor derived from a global mode field.
 * summary:
 *   Reads the low 3 bits of DAT_0003c10e to determine a signed multiplier (1, -1, or 2/-2
 *   based on value 0, 1, or >=2). It indexes the table at DAT_000f9cb8 using param_1,
 *   multiplies the resulting byte by this factor, and returns the result shifted right by 4
 *   bits. The function has no callees and only performs arithmetic and memory reads.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint scale_table_value_by_mode(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_0003c10e & 7;
  iVar3 = uVar1 - 2;
  if (uVar1 < 2) {
    iVar3 = -iVar3;
  }
  uVar2 = (uint)(byte)(&DAT_000f9cb8)[param_1] * iVar3 >> 4;
  if (uVar1 < 2) {
    uVar2 = -uVar2;
  }
  return uVar2;
}
