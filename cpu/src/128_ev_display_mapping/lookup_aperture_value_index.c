/* @k10d lookup_aperture_value_index @ 0x1045ab64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_aperture_value_index(uint32_t aperture_code, uint numerator, int denominator,
                                 uint table_id, char direct_return_flag, byte direct_return_value)

{
  uint quotient;
  uint table_index;
  uint nibble;
  uint32_t version_cmp;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint64_t fixed_product;

  /* signed 16-bit division: (numerator * 10) / denominator, truncated to 16 bits */
  quotient = (int)((numerator & 0xffff) * 10) / denominator & 0xffff;

  if (direct_return_flag == '\x01') {
    table_index = (uint)direct_return_value;
  }
  else {
    if (table_id == 2) {
      /* search aperture table for table_id 2: indices 0x43..0x76 */
      table_index = 0x43;
      do {
        if (quotient == *(ushort *)(table_index * 2 + 0x105a388e/*ROM*/)) {
          return table_index;
        }
        table_index = table_index + 1 & 0xff;
      } while (table_index < 0x77);
    }
    else {
      table_index = 0x44;
      if (table_id == 1) {
        /* search aperture table for table_id 1: indices 0x44..0xac,
           only entries whose low nibble is 1,4,7,9,12,15 */
        do {
          nibble = table_index & 0xf;
          if (((((nibble == 1) || (nibble == 4)) || (nibble == 7)) ||
              (((nibble == 9 || (nibble == 0xc)) || (nibble == 0xf)))) &&
             (quotient == *(ushort *)(table_index * 2 + 0x105a37b6/*ROM*/))) {
            return table_index;
          }
          table_index = table_index + 1 & 0xff;
        } while (table_index < 0xad);
      }
      else {
        /* general table: stride 4, base = 0x105a36de + table_id * 0xd8 */
        do {
          if (quotient == *(ushort *)((table_id & 0xffff) * 0xd8 + 0x105a36de/*ROM*/ + table_index * 2)) {
            return table_index;
          }
          table_index = table_index + 4 & 0xff;
        } while (table_index < 0xad);
      }
    }

    /* no table match: compute a fallback index via fixed-point arithmetic */
    quotient = negate_signed_integer(numerator);
    table_index = negate_signed_integer(denominator);
    version_cmp = compare_version_fields(quotient, table_index);
    quotient = compute_float_division(version_cmp, version_cmp);
    convert_signed_byte_to_unsigned(quotient);
    quotient = build_lens_update_packet_10544cd0((uint)(extraout_r4), (void *)(extraout_r5));
    table_index = build_lens_update_packet_10544cd0(0x40000000, 0);
    fixed_product = multiply_fixed_point_values_105445a2(quotient, extraout_r5_00,
                                                         table_index, extraout_r5_01);
    quotient = encode_float32_to_fixed_point((uint)((ulonglong)fixed_product >> 0x20),
                                             (uint)fixed_product);
    version_cmp = compute_float_division(quotient, 0x41000000);
    quotient = multiply_fixed_point_values_10544412(version_cmp, 0x42880000);
    convert_signed_byte_to_unsigned(quotient);
    add_two_64_bit_integers(extraout_r4_00, extraout_r5_02, 0x3fe00000, 0);
    quotient = normalize_fixed_point_value_105448ac(extraout_r4_01, extraout_r5_03);
    table_index = quotient & 0xff;

    /* clamp result to valid aperture range [0x44, 0xac] */
    if (table_index < 0x44) {
      table_index = 0x44;
    }
    else if (table_index < 0xad) {
      if (table_id == 1) {
        /* snap to nearest valid aperture step (1, 4, or 7) */
        table_index = quotient & 7;
        switch (table_index) {
        case 0:
        case 1:
        case 2:
          table_index = 1;
          break;
        case 3:
        case 4:
        case 5:
          table_index = 4;
          break;
        case 6:
        case 7:
          table_index = 7;
        }
        table_index = (quotient & 0xf8) + table_index;
      }
      else {
        table_index = table_index + 1 & 0xfc;
      }
    }
    else {
      table_index = 0xac;
    }
  }
  return table_index;
}
