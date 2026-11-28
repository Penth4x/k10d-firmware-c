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

uint map_keycode_to_index(uint32_t unused_first_arg,uint raw_keycode)

{
  uint scan_index;
  uint dropped_r4;
  uint adjusted_index;
  uint32_t compare_result;
  uint dropped_r4_0;
  uint dropped_r4_1;
  uint32_t dropped_r5;
  uint32_t dropped_r5_0;
  uint32_t dropped_r5_1;
  void *dropped_r5_2;
  uint dropped_r5_3;
  uint64_t multiply_result;
  
  scan_index = 0x20;
  do {
    if (raw_keycode == *(ushort *)(scan_index * 2 + 0x105a3e3c/*ROM*/)) {
      return scan_index;
    }
    scan_index = scan_index + 1 & 0xff;
  } while (scan_index < 0x41);
  scan_index = negate_signed_integer(raw_keycode);
  scan_index = compute_float_division(scan_index,0x3ea3d70a);
  convert_signed_byte_to_unsigned(scan_index);
  scan_index = build_lens_update_packet_10544cd0((uint)(dropped_r4),(void *)(dropped_r5));
  adjusted_index = build_lens_update_packet_10544cd0(0x40000000,0);
  multiply_result = multiply_fixed_point_values_105445a2(scan_index,dropped_r5_0,adjusted_index,dropped_r5_1);
  scan_index = encode_float32_to_fixed_point((uint)((ulonglong)multiply_result >> 0x20),(uint)multiply_result);
  compare_result = compare_signed_fixed_point(scan_index,0x3f800000);
  scan_index = compute_float_division(compare_result,0x41000000);
  convert_signed_byte_to_unsigned(scan_index);
  add_two_64_bit_integers(dropped_r4_0,dropped_r5_2,0x3fe00000,0);
  scan_index = normalize_fixed_point_value_105448ac(dropped_r4_1,dropped_r5_3);
  adjusted_index = scan_index & 0xff;
  if (adjusted_index < 0x20) {
    adjusted_index = 0x20;
  }
  else if (adjusted_index < 0x41) {
    scan_index = scan_index & 0xf;
    if ((((scan_index == 1) || (scan_index == 6)) || (scan_index == 9)) || (scan_index == 0xe)) {
      adjusted_index = adjusted_index - 1 & 0xff;
    }
    else if (((scan_index == 2) || (scan_index == 7)) || ((scan_index == 10 || (scan_index == 0xf)))) {
      adjusted_index = adjusted_index + 1 & 0xff;
    }
  }
  else {
    adjusted_index = 0x40;
  }
  return adjusted_index;
}
