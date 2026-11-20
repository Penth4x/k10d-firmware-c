/* @k10d update_low_address_byte_state @ 0x000e58ea
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Conditionally writes a set of byte values to low-address globals based on state flags.
 * summary:
 *   The function checks bit 3 of DAT_0003c395 and, if clear, updates several bytes at
 *   addresses 0x401, 0x403, 0x501, and 0x503. It calls call_d5678_with_0x14 three times and
 *   manipulates bit fields from DAT_0003c126 and DAT_0003c143 to determine the final value
 *   written to DAT_00000503. It also sets bits 2 and 3 of DAT_0003c066.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_low_address_byte_state(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = DAT_00000503;
  bVar1 = DAT_00000403;
  if ((DAT_0003c395 & 8) == 0) {
    DAT_00000401 = 0;
    DAT_00000501 = 0xaf;
    DAT_00000403 = 3;
    DAT_00000503 = 0xfc;
    call_d5678_with_0x14();
    call_d5678_with_0x14();
    call_d5678_with_0x14();
    DAT_0003c080 = (uint8_t)_DAT_00000007;
    _DAT_0003c032 = _DAT_0003c030;
    _DAT_0003c030 = CONCAT11(DAT_00000004,(byte)_DAT_00000005) & 0xfffc;
    if (((DAT_0003c126 & 0x20) == 0) || ((DAT_0003c143 & 0x40) == 0)) {
      bVar3 = 0x6c;
    }
    else {
      bVar3 = 0xfc;
    }
    DAT_00000503 = bVar2 & bVar3;
    DAT_00000001 = DAT_00000004 & 0x40;
    DAT_00000003 = (byte)_DAT_00000005 & 3;
    DAT_00000403 = bVar1 | 3;
    if ((DAT_0003c022 & 1) == 0) {
      DAT_00000401 = 0x8f;
      DAT_00000501 = 0;
    }
    else {
      DAT_00000401 = 0x80;
      DAT_00000501 = 0xf;
    }
    DAT_0003c066 = DAT_0003c066 | 0xc;
  }
  return;
}
