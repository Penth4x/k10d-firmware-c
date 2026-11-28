/* @k10d quantize_exposure_value @ 0x1045b1c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint quantize_exposure_value(uint32_t ev_num,uint ev_den,uint ev_mode,uint ev_table_base)

{
  int ev_table_offset;
  uint ev_scaled;
  uint ev_table_idx;
  uint32_t ev_negated_num;
  uint ev_call_arg_r4;
  uint ev_call_arg_r4_0;
  void *ev_call_arg_r5;
  uint ev_call_arg_r5_0;
  
  ev_scaled = (int)((ev_den & 0xffff) * 10) / (int)ev_den & 0xffff;
  if (ev_mode == 1) {
    if (ev_scaled == uRam105a47f4) {
      return 0x10;
    }
    if (ev_scaled == uRam105a47fa) {
      return 0xd;
    }
    if (ev_scaled == uRam105a47fe) {
      return 0xb;
    }
    if (ev_scaled == uRam105a4804) {
      return 8;
    }
    if (ev_scaled == uRam105a480a) {
      return 5;
    }
    if (ev_scaled == uRam105a480e) {
      return 3;
    }
  }
  else {
    ev_table_offset = (ev_mode & 0xffff) * 0x102;
    if (ev_scaled == *(ushort *)(&DAT_105a46f2/*ROM*/ + ev_table_offset)) {
      return 0x10;
    }
    if (ev_scaled == *(ushort *)(&DAT_105a46fa/*ROM*/ + ev_table_offset)) {
      return 0xc;
    }
    if (ev_scaled == *(ushort *)(&DAT_105a4702/*ROM*/ + ev_table_offset)) {
      return 8;
    }
    if (ev_scaled == *(ushort *)(&DAT_105a470a/*ROM*/ + ev_table_offset)) {
      return 4;
    }
  }
  if ((ev_den == 0) || (ev_den == 0)) {
    return 0;
  }
  ev_scaled = negate_signed_integer(ev_den);
  ev_table_idx = negate_signed_integer(ev_den);
  ev_negated_num = compare_version_fields(ev_scaled,ev_table_idx);
  ev_scaled = compute_float_division(ev_negated_num,0x41000000);
  convert_signed_byte_to_unsigned(ev_scaled);
  add_two_64_bit_integers(ev_call_arg_r4,ev_call_arg_r5,0x3fe00000,0);
  ev_scaled = normalize_fixed_point_value_105448ac(ev_call_arg_r4_0,ev_call_arg_r5_0);
  ev_scaled = ev_scaled & 0xff;
  if (ev_mode == 1) {
    if (ev_scaled < 3) {
      return 3;
    }
    if (8 < ev_scaled) {
      return 8;
    }
    ev_table_idx = ev_scaled + 1 & 7;
    switch(ev_table_idx) {
    case 0:
    case 1:
    case 2:
      ev_table_idx = 0;
      break;
    case 3:
    case 4:
      ev_table_idx = 3;
      break;
    case 5:
    case 6:
    case 7:
      ev_table_idx = 5;
    }
    return (ev_scaled + 1 & 0xf8) + ev_table_idx;
  }
  if (ev_scaled < 4) {
    return 4;
  }
  if (ev_scaled < 0xd) {
    return ev_scaled + 1 & 0xfc;
  }
  return 0xc;
}
