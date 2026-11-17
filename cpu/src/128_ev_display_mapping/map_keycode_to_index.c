/* @k10d map_keycode_to_index @ 0x1045ad86
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * purpose:
 *   Maps a raw key code to a 0x20-0x40 index, checking a lookup table first and falling
 *   back to a computed value.
 * summary:
 *   First scans a 65-entry table at 0x105a3e3c for a match with param_2, returning the
 *   index if found. If not found, it calls a series of helper functions
 *   (negate_signed_integer, compute_float_division, etc.) to compute a base value, then
 *   clamps the result to the range [0x20, 0x40]. It applies a +/-1 adjustment based on the
 *   lower 4 bits of an intermediate value (normalize_fixed_point_value_105448ac) if the
 *   result is in the range [0x20, 0x40).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint map_keycode_to_index(uint32_t param_1,uint param_2)

{
  uint uVar1;
  uint extraout_r4;
  uint uVar2;
  uint32_t uVar3;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint64_t uVar4;
  
  uVar1 = 0x20;
  do {
    if (param_2 == *(ushort *)(uVar1 * 2 + 0x105a3e3c/*ROM*/)) {
      return uVar1;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x41);
  uVar1 = negate_signed_integer(param_2);
  uVar1 = compute_float_division(uVar1,0x3ea3d70a);
  convert_signed_byte_to_unsigned(uVar1);
  uVar1 = build_lens_update_packet_10544cd0(extraout_r4,(void *)extraout_r5);
  uVar2 = build_lens_update_packet_10544cd0(0x40000000,(void *)0);
  uVar4 = multiply_fixed_point_values_105445a2(uVar1,extraout_r5_00,uVar2,extraout_r5_01);
  uVar1 = encode_float32_to_fixed_point((uint)((ulonglong)uVar4 >> 0x20),(uint)uVar4);
  uVar3 = compare_signed_fixed_point(uVar1,0x3f800000);
  uVar1 = compute_float_division(uVar3,0x41000000);
  convert_signed_byte_to_unsigned(uVar1);
  add_two_64_bit_integers(extraout_r4_00,extraout_r5_02,0x3fe00000,0);
  uVar1 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_03);
  uVar2 = uVar1 & 0xff;
  if (uVar2 < 0x20) {
    uVar2 = 0x20;
  }
  else if (uVar2 < 0x41) {
    uVar1 = uVar1 & 0xf;
    if ((((uVar1 == 1) || (uVar1 == 6)) || (uVar1 == 9)) || (uVar1 == 0xe)) {
      uVar2 = uVar2 - 1 & 0xff;
    }
    else if (((uVar1 == 2) || (uVar1 == 7)) || ((uVar1 == 10 || (uVar1 == 0xf)))) {
      uVar2 = uVar2 + 1 & 0xff;
    }
  }
  else {
    uVar2 = 0x40;
  }
  return uVar2;
}
