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

uint map_keycode_to_index(uint32_t unused_param_1,uint raw_keycode)

{
  uint table_index;
  uint ignored_r4;
  uint computed_index;
  uint32_t compare_result;
  uint ignored_r4_0;
  uint ignored_r4_1;
  uint32_t ignored_r5;
  uint32_t ignored_r5_0;
  uint32_t ignored_r5_1;
  void *ignored_r5_2;
  uint ignored_r5_3;
  uint64_t multiply_result;
  
  table_index = 0x20;
  do {
    if (raw_keycode == *(ushort *)(table_index * 2 + 0x105a3e3c/*ROM*/)) {
      return table_index;
    }
    table_index = table_index + 1 & 0xff;
  } while (table_index < 0x41);
  table_index = negate_signed_integer(raw_keycode);
  table_index = compute_float_division(table_index,0x3ea3d70a);
  convert_signed_byte_to_unsigned(table_index);
  table_index = build_lens_update_packet_10544cd0((uint)(ignored_r4),(void *)(ignored_r5));
  computed_index = build_lens_update_packet_10544cd0(0x40000000,0);
  multiply_result = multiply_fixed_point_values_105445a2(table_index,ignored_r5_0,computed_index,ignored_r5_1);
  table_index = encode_float32_to_fixed_point((uint)((ulonglong)multiply_result >> 0x20),(uint)multiply_result);
  compare_result = compare_signed_fixed_point(table_index,0x3f800000);
  table_index = compute_float_division(compare_result,0x41000000);
  convert_signed_byte_to_unsigned(table_index);
  add_two_64_bit_integers(ignored_r4_0,ignored_r5_2,0x3fe00000,0);
  table_index = normalize_fixed_point_value_105448ac(ignored_r4_1,ignored_r5_3);
  computed_index = table_index & 0xff;
  if (computed_index < 0x20) {
    computed_index = 0x20;
  }
  else if (computed_index < 0x41) {
    table_index = table_index & 0xf;
    if ((((table_index == 1) || (table_index == 6)) || (table_index == 9)) || (table_index == 0xe)) {
      computed_index = computed_index - 1 & 0xff;
    }
    else if (((table_index == 2) || (table_index == 7)) || ((table_index == 10 || (table_index == 0xf)))) {
      computed_index = computed_index + 1 & 0xff;
    }
  }
  else {
    computed_index = 0x40;
  }
  return computed_index;
}
