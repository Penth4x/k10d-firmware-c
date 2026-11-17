/* @k10d calculate_exposure_time_us @ 0x100f0f80
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Computes a shutter or exposure duration in microseconds from two indexed parameters in
 *   a global state word.
 * summary:
 *   Reads two 4-bit fields from _DAT_800480a0 (bits 24-27 and 28-31). The first index
 *   selects a base time from a local table of values ranging from 10 to 80 (likely
 *   milliseconds or a scaled unit), and the second index selects a multiplier from a table
 *   of 10, 100, 1000, and 10000. The product is clamped to a maximum of 25000 and stored as
 *   a short in the output parameter. Returns 0 on success or -1 if the indices are out of
 *   range (first > 15 or second >= 4). The table values and multipliers suggest a
 *   conversion from exposure value steps to time units, consistent with AE/shutter timing
 *   calculations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t calculate_exposure_time_us(uint16_t *param_1)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  ushort auStack_2c [20];
  
  auStack_2c[1] = 10;
  auStack_2c[2] = 0xc;
  auStack_2c[3] = 0xd;
  auStack_2c[4] = 0xf;
  auStack_2c[5] = 0x14;
  auStack_2c[6] = 0x19;
  auStack_2c[7] = 0x1e;
  auStack_2c[8] = 0x23;
  auStack_2c[9] = 0x28;
  auStack_2c[10] = 0x2d;
  auStack_2c[0xb] = 0x32;
  auStack_2c[0xc] = 0x37;
  auStack_2c[0xd] = 0x3c;
  auStack_2c[0xe] = 0x46;
  auStack_2c[0xf] = 0x50;
  auStack_2c[0x11] = 100;
  auStack_2c[0x12] = 1000;
  auStack_2c[0x10] = 10;
  auStack_2c[0x13] = 10000;
  uVar1 = (int)((_DAT_800480a0/*SDRAM*/ >> 0x18) << 0x19) >> 0x1c & 0xff;
  if ((uVar1 == 0) || (0xf < uVar1)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = (int)((_DAT_800480a0/*SDRAM*/ >> 0x18) << 0x1d) >> 0x1d & 0xff;
    if (uVar2 < 4) {
      uVar1 = (uint)auStack_2c[uVar1] * (uint)auStack_2c[uVar2 + 0x10];
      if (24999 < uVar1) {
        uVar1 = 25000;
      }
      *param_1 = (short)uVar1;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
