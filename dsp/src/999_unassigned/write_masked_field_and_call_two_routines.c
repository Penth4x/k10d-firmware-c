/* @k10d write_masked_field_and_call_two_routines @ 0x000e31d6
 * name: model (proposed by the local model from the decompile, confidence 0.80)
 * purpose:
 *   Writes a masked field to memory based on param_1 and calls two output routines with
 *   derived values.
 * summary:
 *   The function saves and clears a flag at DAT_00000420. It calculates a byte offset based
 *   on param_1 and writes a masked portion of param_2 into memory at 0x3c001 or 0x3bff4. It
 *   then constructs a value in uRam00000000 and calls toggle_ram_flag_bit5 and
 *   FUN_000e33b0. Finally, it restores the original flag value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_field_and_call_two_routines(uint param_1,uint param_2)

{
  uint8_t uVar1;
  byte bVar2;
  
  uVar1 = DAT_00000420;
  DAT_00000420 = 0;
  if ((int)param_1 < 0x10) {
    if ((int)param_1 < 0xd) {
      param_2 = param_2 & 0xf;
      (&DAT_0003c001)[param_1] = (&DAT_0003c001)[param_1] & 0xf0 | (byte)param_2;
      bVar2 = 0;
    }
    else {
      param_2 = param_2 & 0x1f;
      *(ushort *)(param_1 * 2 + 0x3bff4) =
           *(ushort *)(param_1 * 2 + 0x3bff4) & 0x3e0 | (ushort)param_2;
      bVar2 = 0;
    }
  }
  else {
    param_1 = param_1 & 0xf;
    if (param_1 < 0xd) {
      (&DAT_0003c001)[param_1] = (&DAT_0003c001)[param_1] & 0xf | (byte)(param_2 & 0xf0);
      param_2 = (int)(param_2 & 0xf0) >> 4 | 0x10;
      bVar2 = 0x10;
    }
    else {
      *(ushort *)(param_1 * 2 + 0x3bff4) =
           *(ushort *)(param_1 * 2 + 0x3bff4) & 0x1f | (ushort)(param_2 & 0x3e0);
      param_2 = (int)(param_2 & 0x3e0) >> 5;
      bVar2 = 0x10;
    }
  }
  uRam00000000 = CONCAT13(bVar2 | (byte)uRam00000000 & 0xe0 | (byte)param_1,_DAT_00000001);
  toggle_ram_flag_bit5();
  uRam00000000 = CONCAT13((byte)uRam00000000 & 0xe0 | (byte)param_2,_DAT_00000001);
  FUN_000e33b0();
  DAT_00000420 = uVar1;
  return;
}
