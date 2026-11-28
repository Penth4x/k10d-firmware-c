/* @k10d lookup_or_compute_index @ 0x1045a994
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_or_compute_index(uint32_t unused_first_arg,uint field_a,uint field_b,uint stride_mode,byte max_index_byte)

{
  uint index;
  uint masked_index;
  int table_offset;
  uint32_t version_cmp_result;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint64_t fixed_mul_result;

  index = 0x1c;

  if (stride_mode == 1) {
    do {
      masked_index = index & 0xf;

      if ((((((masked_index == 1) || (masked_index == 4)) || (masked_index == 7)) ||
            ((masked_index == 9 || (masked_index == 0xc))) ||
            (masked_index == 0xf)) &&
           ((field_a == *(ushort *)(index * 4 + 0x105a3ba8/*ROM*/) &&
            (field_b == *(ushort *)(index * 4 + 0x105a3baa/*ROM*/))))) {
        if (index <= max_index_byte) {
          return index;
        }
        return (uint)max_index_byte;
      }

      index = index + 1 & 0xff;
    } while (index < 0xa5);
  }
  else {
    do {
      table_offset = index * 4 + (stride_mode & 0xffff) * 0x228;

      if ((field_a == *(ushort *)(&DAT_105a3980/*ROM*/ + table_offset)) &&
         (field_b == *(ushort *)(table_offset + 0x105a3982/*ROM*/))) {
        if (index <= max_index_byte) {
          return index;
        }
        return (uint)max_index_byte;
      }

      index = index + 4 & 0xff;
    } while (index < 0xa5);
  }

  index = negate_signed_integer(field_a);
  masked_index = negate_signed_integer(field_b);
  version_cmp_result = compare_version_fields(masked_index,index);
  index = compute_float_division(version_cmp_result,0x3f800000);
  convert_signed_byte_to_unsigned(index);
  index = build_lens_update_packet_10544cd0((uint)(extraout_r4),(void *)(extraout_r5));
  masked_index = build_lens_update_packet_10544cd0(0x40000000,0);
  fixed_mul_result = multiply_fixed_point_values_105445a2(index,extraout_r5_00,masked_index,extraout_r5_01);
  index = encode_float32_to_fixed_point((uint)((ulonglong)fixed_mul_result >> 0x20),(uint)fixed_mul_result);
  version_cmp_result = compute_float_division(index,0x41000000);
  index = multiply_fixed_point_values_10544412(version_cmp_result,0x42880000);
  convert_signed_byte_to_unsigned(index);
  add_two_64_bit_integers(extraout_r4_00,extraout_r5_02,0x3fe00000,0);
  index = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_03);
  masked_index = index & 0xff;

  if (masked_index < 0x1c) {
    index = 0x1c;
  }
  else if (masked_index < 0xa5) {
    if (stride_mode == 1) {
      masked_index = index & 7;
      switch(masked_index) {
      case 0:
      case 1:
      case 2:
        masked_index = 1;
        break;
      case 3:
      case 4:
      case 5:
        masked_index = 4;
        break;
      case 6:
      case 7:
        masked_index = 7;
      }
      masked_index = (index & 0xf8) + masked_index;
    }
    else {
      masked_index = masked_index + 1 & 0xfc;
    }

    index = (uint)max_index_byte;
    if (masked_index <= max_index_byte) {
      index = masked_index;
    }
  }
  else {
    index = (uint)max_index_byte;
    if (0xa3 < index) {
      index = 0xa4;
    }
  }

  return index;
}
