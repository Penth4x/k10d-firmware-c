/* @k10d compute_state_index_value @ 0x000d1384
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Computes a 16-bit index value based on state flags and returns it or -1 if limits are
 *   exceeded.
 * summary:
 *   The function reads a state byte from DAT_0003ce05, clears bit 4, and calls
 *   compute_signed_offset_value_000d1668 to obtain an index. It branches on bits 0 and 1 of
 *   the state byte to calculate a value using callees like scale_value_by_mode_factor and
 *   compute_clamped_delta_value. The result is stored in DAT_0003ce30 and returned, or -1
 *   is returned if the computed value exceeds a limit derived from DAT_0003f4a8 and
 *   DAT_0003ce0e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int compute_state_index_value(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iStack_20;
  
  uVar1 = (uint)DAT_0003ce05;
  DAT_0003ce05 = DAT_0003ce05 & 0xef;
  clamp_product_to_16bit_000d1ef8();
  iStack_20 = compute_signed_offset_value_000d1668();
  if (-1 < iStack_20) {
    if (iStack_20 == 0) {
      uVar3 = (uint)_DAT_0003ce30;
    }
    else {
      uVar3 = clamp_shifted_value_to_16_bits((uint)_DAT_0003ce34);
    }
    uVar4 = (uint)(DAT_0003f488 >> 1);
    if ((uint)(_DAT_0003cf2e >> 8) <= (uint)(DAT_0003f488 >> 1)) {
      uVar4 = (uint)(_DAT_0003cf2e >> 8);
    }
    uVar2 = (uint)_DAT_0003ce18;
    bVar6 = DAT_0003f4a8 >> 4;
    if ((DAT_0003ce05 & 1) == 0) {
      if ((DAT_0003ce02 & 0x80) == 0) {
        bVar6 = DAT_0003f4a8 & 0xf;
      }
      extract_shifted_field_if_flag_set(bVar6);
    }
    else if ((DAT_0003ce05 & 2) == 0) {
      uVar3 = scale_value_by_mode_factor(uVar3,0);
      if ((DAT_0003ce02 & 0x80) != 0) {
        uVar3 = clamp_shifted_value_to_16_bits(uVar3);
      }
      _DAT_0003ce3a = (uint16_t)uVar3;
      _DAT_0003ce2c = FUN_000d1c10(uVar3,uVar4 + uVar2);
      _DAT_0003ce1c = _DAT_0003ce2c ^ 0xffff;
      if ((DAT_0003c128 & 0x40) != 0) {
        _DAT_0003ce1c = _DAT_0003ce1c & 0x3fff;
      }
    }
    else {
      uVar5 = scale_value_by_mode_factor(uVar3,1);
      _DAT_0003cc6a = compute_adjusted_value_000d1564(uVar5);
      uVar3 = compute_clamped_delta_value(uVar5,uVar4 + uVar2);
      prepare_and_send_3_byte_packet(uVar3);
      if (((uVar1 & 0x1f) >> 4 == 0) && (((DAT_0003ce05 & 0x20) == 0 || (_DAT_0003cc6a == 0)))) {
        _DAT_0003ce38 = 0;
      }
      else {
        _DAT_0003ce38 = -_DAT_0003ce18;
        _DAT_0003ce34 = _DAT_0003ce18;
        DAT_0003ce05 = DAT_0003ce05 | 0x10;
      }
      if (uVar3 == _DAT_0003ce30) {
        uVar5 = uVar3;
      }
      _DAT_0003ce36 = (uint16_t)uVar5;
      if ((((DAT_0003ce05 & 8) == 0) && ((DAT_0003ce05 & 4) == 0)) && ((DAT_0003ce02 & 0x20) != 0))
      {
        uVar3 = 0;
      }
    }
    _DAT_0003ce30 = (ushort)uVar3;
    _DAT_0003ce3c = _DAT_0003cd52;
    if (((uVar3 == 0) || (uVar1 = clamp_shifted_value_to_16_bits(0x2000), uVar1 < uVar3)) ||
       (((DAT_0003c128 & 0x40) == 0 &&
        (((DAT_0003ce02 & 0x20) != 0 && ((DAT_0003f4ad & 0xf0) * 0x20 < uVar3)))))) {
      iStack_20 = -1;
    }
  }
  return iStack_20;
}
