/* @k10d lookup_or_compute_index @ 0x1045a994
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_or_compute_index(uint32_t unused_first_param,uint expected_field_a,uint expected_field_b,uint table_stride_mode,byte max_index)

{
  uint index;
  uint index_low_bits;
  int table_offset;
  uint32_t version_compare_result;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint64_t fixed_point_product;
  
  index = 0x1c;
  if (table_stride_mode == 1) {
    do {
      index_low_bits = index & 0xf;
      if ((((((index_low_bits == 1) || (index_low_bits == 4)) || (index_low_bits == 7)) ||
            ((index_low_bits == 9 || (index_low_bits == 0xc)))) ||
           (index_low_bits == 0xf)) &&
          ((expected_field_a == *(ushort *)(index * 4 + 0x105a3ba8/*ROM*/) &&
           (expected_field_b == *(ushort *)(index * 4 + 0x105a3baa/*ROM*/))))) {
        if (index <= max_index) {
          return index;
        }
        return (uint)max_index;
      }
      index = index + 1 & 0xff;
    } while (index < 0xa5);
  }
  else {
    do {
      table_offset = index * 4 + (table_stride_mode & 0xffff) * 0x228;
      if ((expected_field_a == *(ushort *)(&DAT_105a3980/*ROM*/ + table_offset)) &&
          (expected_field_b == *(ushort *)(table_offset + 0x105a3982/*ROM*/))) {
        if (index <= max_index) {
          return index;
        }
        return (uint)max_index;
      }
      index = index + 4 & 0xff;
    } while (index < 0xa5);
  }
  index = negate_signed_integer(expected_field_a);
  index_low_bits = negate_signed_integer(expected_field_b);
  version_compare_result = compare_version_fields(index_low_bits,index);
  index = compute_float_division(version_compare_result,0x3f800000);
  convert_signed_byte_to_unsigned(index);
  index = build_lens_update_packet_10544cd0((uint)(extraout_r4),(void *)(extraout_r5));
  index_low_bits = build_lens_update_packet_10544cd0(0x40000000,0);
  fixed_point_product = multiply_fixed_point_values_105445a2(index,extraout_r5_00,index_low_bits,extraout_r5_01);
  index = encode_float32_to_fixed_point((uint)((ulonglong)fixed_point_product >> 0x20),(uint)fixed_point_product);
  version_compare_result = compute_float_division(index,0x41000000);
  index = multiply_fixed_point_values_10544412(version_compare_result,0x42880000);
  convert_signed_byte_to_unsigned(index);
  add_two_64_bit_integers(extraout_r4_00,extraout_r5_02,0x3fe00000,0);
  index = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_03);
  index_low_bits = index & 0xff;
  if (index_low_bits < 0x1c) {
    index = 0x1c;
  }
  else if (index_low_bits < 0xa5) {
    if (table_stride_mode == 1) {
      index_low_bits = index & 7;
      switch(index_low_bits) {
      case 0:
      case 1:
      case 2:
        index_low_bits = 1;
        break;
      case 3:
      case 4:
      case 5:
        index_low_bits = 4;
        break;
      case 6:
      case 7:
        index_low_bits = 7;
      }
      index_low_bits = (index & 0xf8) + index_low_bits;
    }
    else {
      index_low_bits = index_low_bits + 1 & 0xfc;
    }
    index = (uint)max_index;
    if (index_low_bits <= max_index) {
      index = index_low_bits;
    }
  }
  else {
    index = (uint)max_index;
    if (0xa3 < index) {
      index = 0xa4;
    }
  }
  return index;
}
