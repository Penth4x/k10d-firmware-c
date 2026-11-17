/* @k10d write_byte_to_ram_and_call_two_routines @ 0x000e30ec
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Stores param_2 into a RAM location selected by param_1, then invokes two helper
 *   routines with modified low bits of a RAM byte.
 * summary:
 *   The function saves and clears DAT_00000420, writes param_2 into either a byte array at
 *   0x3c001, a short array at 0x3bff4, or a specific word at 0x3c012 depending on param_1.
 *   It then modifies the low 5 bits of bRam00000000 and calls toggle_ram_flag_bit5 and
 *   FUN_000e33b0, with additional calls for certain param_1 values. The original value of
 *   DAT_00000420 is restored before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_byte_to_ram_and_call_two_routines(int param_1,uint param_2)

{
  uint8_t uVar1;
  uint caller_r11;
  byte bStack_1a;
  byte bStack_19;
  
  uVar1 = DAT_00000420;
  DAT_00000420 = 0;
  if (param_1 < 0xd) {
    if (param_1 != 5) {
      (&DAT_0003c001)[param_1] = (char)param_2;
      caller_r11 = param_2 & 0xf;
      bStack_19 = (byte)((int)(param_2 & 0xf0) >> 4);
    }
  }
  else if (param_1 == 0xf) {
    caller_r11 = param_2 & 0x1f;
    _DAT_0003c012 = _DAT_0003c012 & 0x3e0 | (ushort)caller_r11;
  }
  else {
    *(short *)(param_1 * 2 + 0x3bff4) = (short)param_2;
    caller_r11 = param_2 & 0x1f;
    bStack_19 = (byte)((int)(param_2 & 0x3e0) >> 5);
  }
  bRam00000000 = bRam00000000 & 0xe0 | (byte)param_1;
  toggle_ram_flag_bit5();
  bRam00000000 = bRam00000000 & 0xe0 | (byte)caller_r11;
  bStack_1a = 0x10;
  FUN_000e33b0();
  if (param_1 != 0xf) {
    if (0xc < param_1) {
      bRam00000000 = bRam00000000 & 0xe0 | 0x10 | (byte)param_1;
      toggle_ram_flag_bit5();
      bStack_1a = 0;
    }
    bRam00000000 = bRam00000000 & 0xe0 | bStack_1a | bStack_19;
    FUN_000e33b0();
  }
  DAT_00000420 = uVar1;
  return;
}
