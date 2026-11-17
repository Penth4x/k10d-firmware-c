/* @k10d quantize_exposure_value @ 0x1045b1c0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint quantize_exposure_value(uint32_t param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uint extraout_r4;
  uint extraout_r4_00;
  void *extraout_r5;
  uint extraout_r5_00;
  
  uVar2 = (int)((param_2 & 0xffff) * 10) / (int)param_3 & 0xffff;
  if (param_4 == 1) {
    if (uVar2 == uRam105a47f4) {
      return 0x10;
    }
    if (uVar2 == uRam105a47fa) {
      return 0xd;
    }
    if (uVar2 == uRam105a47fe) {
      return 0xb;
    }
    if (uVar2 == uRam105a4804) {
      return 8;
    }
    if (uVar2 == uRam105a480a) {
      return 5;
    }
    if (uVar2 == uRam105a480e) {
      return 3;
    }
  }
  else {
    iVar1 = (param_4 & 0xffff) * 0x102;
    if (uVar2 == *(ushort *)(&DAT_105a46f2/*ROM*/ + iVar1)) {
      return 0x10;
    }
    if (uVar2 == *(ushort *)(&DAT_105a46fa/*ROM*/ + iVar1)) {
      return 0xc;
    }
    if (uVar2 == *(ushort *)(&DAT_105a4702/*ROM*/ + iVar1)) {
      return 8;
    }
    if (uVar2 == *(ushort *)(&DAT_105a470a/*ROM*/ + iVar1)) {
      return 4;
    }
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  uVar2 = negate_signed_integer(param_2);
  uVar3 = negate_signed_integer(param_3);
  uVar4 = compare_version_fields(uVar2,uVar3);
  uVar2 = compute_float_division(uVar4,0x41000000);
  convert_signed_byte_to_unsigned(uVar2);
  add_two_64_bit_integers(extraout_r4,extraout_r5,0x3fe00000,0);
  uVar2 = normalize_fixed_point_value_105448ac(extraout_r4_00,extraout_r5_00);
  uVar2 = uVar2 & 0xff;
  if (param_4 == 1) {
    if (uVar2 < 3) {
      return 3;
    }
    if (8 < uVar2) {
      return 8;
    }
    uVar3 = uVar2 + 1 & 7;
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
      uVar3 = 0;
      break;
    case 3:
    case 4:
      uVar3 = 3;
      break;
    case 5:
    case 6:
    case 7:
      uVar3 = 5;
    }
    return (uVar2 + 1 & 0xf8) + uVar3;
  }
  if (uVar2 < 4) {
    return 4;
  }
  if (uVar2 < 0xd) {
    return uVar2 + 1 & 0xfc;
  }
  return 0xc;
}
