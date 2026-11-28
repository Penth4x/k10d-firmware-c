/* @k10d quantize_exposure_value @ 0x1045b1c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint quantize_exposure_value(uint32_t raw_ev_num,uint raw_ev_den,uint mode,uint table_base)

{
  int table_offset;
  uint scaled_ev;
  uint table_idx;
  uint32_t negated_num;
  uint ignored_r4;
  uint ignored_r4_0;
  void *ignored_r5;
  uint ignored_r5_0;
  
  scaled_ev = (int)((raw_ev_den & 0xffff) * 10) / (int)raw_ev_den & 0xffff;
  if (mode == 1) {
    if (scaled_ev == uRam105a47f4) {
      return 0x10;
    }
    if (scaled_ev == uRam105a47fa) {
      return 0xd;
    }
    if (scaled_ev == uRam105a47fe) {
      return 0xb;
    }
    if (scaled_ev == uRam105a4804) {
      return 8;
    }
    if (scaled_ev == uRam105a480a) {
      return 5;
    }
    if (scaled_ev == uRam105a480e) {
      return 3;
    }
  }
  else {
    table_offset = (mode & 0xffff) * 0x102;
    if (scaled_ev == *(ushort *)(&DAT_105a46f2/*ROM*/ + table_offset)) {
      return 0x10;
    }
    if (scaled_ev == *(ushort *)(&DAT_105a46fa/*ROM*/ + table_offset)) {
      return 0xc;
    }
    if (scaled_ev == *(ushort *)(&DAT_105a4702/*ROM*/ + table_offset)) {
      return 8;
    }
    if (scaled_ev == *(ushort *)(&DAT_105a470a/*ROM*/ + table_offset)) {
      return 4;
    }
  }
  if ((raw_ev_den == 0) || (raw_ev_den == 0)) {
    return 0;
  }
  scaled_ev = negate_signed_integer(raw_ev_den);
  table_idx = negate_signed_integer(raw_ev_den);
  negated_num = compare_version_fields(scaled_ev,table_idx);
  scaled_ev = compute_float_division(negated_num,0x41000000);
  convert_signed_byte_to_unsigned(scaled_ev);
  add_two_64_bit_integers(ignored_r4,ignored_r5,0x3fe00000,0);
  scaled_ev = normalize_fixed_point_value_105448ac(ignored_r4_0,ignored_r5_0);
  scaled_ev = scaled_ev & 0xff;
  if (mode == 1) {
    if (scaled_ev < 3) {
      return 3;
    }
    if (8 < scaled_ev) {
      return 8;
    }
    table_idx = scaled_ev + 1 & 7;
    switch(table_idx) {
    case 0:
    case 1:
    case 2:
      table_idx = 0;
      break;
    case 3:
    case 4:
      table_idx = 3;
      break;
    case 5:
    case 6:
    case 7:
      table_idx = 5;
    }
    return (scaled_ev + 1 & 0xf8) + table_idx;
  }
  if (scaled_ev < 4) {
    return 4;
  }
  if (scaled_ev < 0xd) {
    return scaled_ev + 1 & 0xfc;
  }
  return 0xc;
}
