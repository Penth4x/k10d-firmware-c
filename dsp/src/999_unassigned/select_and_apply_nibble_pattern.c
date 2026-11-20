/* @k10d select_and_apply_nibble_pattern @ 0x000f4b00
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Selects a 16-bit pattern index based on state flags and applies it via three helper
 *   calls.
 * summary:
 *   The function computes an index (iVar3) from several DAT_0003cxxx state variables and a
 *   key-like value (DAT_0003c440). It then reads a 16-bit value from a table at 0xfa85c or
 *   0xfa8a8, decomposes it into four 4-bit nibbles, and passes them to
 *   or_bytes_into_four_globals_000f6a7a and set_four_flag_bytes. It also sets bits in
 *   DAT_0003c4b6 and DAT_0003c4b3 based on the selected index.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_and_apply_nibble_pattern(void)

{
  ushort uVar1;
  uint32_t uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar5 = false;
  uVar2 = 0;
  if (_DAT_0003c126 == 0) {
    uVar2 = 2;
  }
  else if ((_DAT_0003c126 & 1) == 0) {
    if ((DAT_0003c4d4 & 0x20) == 0) {
      if ((DAT_0003c440 == '\b') || (DAT_0003c440 == '\a')) {
        uVar2 = 1;
      }
      else if ((((DAT_0003c440 == '\x03') || (DAT_0003c440 == '\x05')) &&
               (uVar2 = 1, (DAT_0003c580 & 0x40) != 0)) && ((DAT_0003c030 & 1) == 0)) {
        uVar2 = 0;
      }
    }
    else if (DAT_0003c3b5 == '\x01') {
      if (DAT_0003c440 == '\x11') {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 2;
      if (DAT_0003c440 == '\x11') {
        bVar5 = true;
      }
    }
  }
  else if (DAT_0003c440 == '\x11') {
    uVar2 = 1;
  }
  if (((DAT_0003c4de & 1) == 0) || (bVar5)) {
    if ((DAT_0003c4df & 8) == 0) {
      if ((DAT_0003c022 & 1) == 0) {
        iVar3 = select_value_by_param_and_flag(uVar2);
      }
      else {
        iVar3 = FUN_000f4cd2(__frv_reg_unset(4));
      }
    }
    else if (DAT_0003c3ac == '\0') {
      iVar3 = 0x25;
    }
    else {
      iVar3 = 0x36;
    }
  }
  else if (DAT_0003c3ac == '\0') {
    iVar3 = 0x23;
  }
  else {
    iVar3 = 0x34;
  }
  if (DAT_0003c3ac == '\0') {
    uVar1 = *(ushort *)(&DAT_000fa85c + iVar3 * 2);
    uVar4 = uVar1 & 0xf;
    uVar6 = uVar1 >> 4 & 0xf;
    uVar8 = uVar1 >> 8 & 0xf;
    uVar7 = (uint)(uVar1 >> 0xc);
    if (((iVar3 == 9) || (iVar3 == 0xb)) || ((iVar3 == 0xc || (iVar3 == 0xd)))) {
      DAT_0003c4b6 = DAT_0003c4b6 | 2;
    }
    if (iVar3 < 0xe) {
      DAT_0003c4b3 = DAT_0003c4b3 | 0x10;
    }
  }
  else {
    uVar1 = *(ushort *)(iVar3 * 2 + 0xfa8a8);
    uVar4 = uVar1 & 0xf;
    uVar6 = uVar1 >> 4 & 0xf;
    uVar8 = uVar1 >> 8 & 0xf;
    uVar7 = (uint)(uVar1 >> 0xc);
    if ((((iVar3 == 0xb) || (iVar3 == 0xd)) ||
        ((iVar3 == 0xe || (((iVar3 == 0x10 || (iVar3 == 0x11)) || (iVar3 == 0x12)))))) ||
       ((iVar3 == 0x13 || (iVar3 == 0x14)))) {
      DAT_0003c4b6 = DAT_0003c4b6 | 2;
    }
    if (iVar3 < 0x15) {
      DAT_0003c4b3 = DAT_0003c4b3 | 0x10;
    }
  }
  if (uVar4 == 0) {
    DAT_0003c4b6 = DAT_0003c4b6 | 8;
  }
  or_bytes_into_four_globals_000f6a7a(*(uint8_t *)(uVar6 + 0xfa96a),*(uint8_t *)(uVar6 + 0xfa979),
               *(uint8_t *)(uVar6 + 0xfa988),*(uint8_t *)(uVar6 + 0xfa997));
  or_bytes_into_four_globals_000f6a7a(*(uint8_t *)(uVar8 + 0xfa9a6),*(uint8_t *)(uVar8 + 0xfa9b5),
               *(uint8_t *)(uVar8 + 0xfa9c4),*(uint8_t *)(uVar8 + 0xfa9d3));
  set_four_flag_bytes((&DAT_000fa9e2)[uVar7],(&DAT_000fa9f0)[uVar7],(&DAT_000fa9fe)[uVar7],
               (&DAT_000faa0c)[uVar7]);
  return;
}
