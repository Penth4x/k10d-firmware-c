/* @k10d lookup_or_compute_index @ 0x1045a994
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_or_compute_index(uint32_t param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint64_t uVar5;
  
  uVar1 = 0x1c;
  if (param_4 == 1) {
    do {
      uVar2 = uVar1 & 0xf;
      if ((((((uVar2 == 1) || (uVar2 == 4)) || (uVar2 == 7)) || ((uVar2 == 9 || (uVar2 == 0xc)))) ||
          (uVar2 == 0xf)) &&
         ((param_2 == *(ushort *)(uVar1 * 4 + 0x105a3ba8/*ROM*/) &&
          (param_3 == *(ushort *)(uVar1 * 4 + 0x105a3baa/*ROM*/))))) {
        if (uVar1 <= param_5) {
          return uVar1;
        }
        return (uint)param_5;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 0xa5);
  }
  else {
    do {
      iVar3 = uVar1 * 4 + (param_4 & 0xffff) * 0x228;
      if ((param_2 == *(ushort *)(&DAT_105a3980/*ROM*/ + iVar3)) &&
         (param_3 == *(ushort *)(iVar3 + 0x105a3982/*ROM*/))) {
        if (uVar1 <= param_5) {
          return uVar1;
        }
        return (uint)param_5;
      }
      uVar1 = uVar1 + 4 & 0xff;
    } while (uVar1 < 0xa5);
  }
  uVar1 = negate_signed_integer(param_2);
  uVar2 = negate_signed_integer(param_3);
  uVar4 = compare_version_fields(uVar2,uVar1);
  uVar1 = compute_float_division(uVar4,0x3f800000);
  convert_signed_byte_to_unsigned(uVar1);
  uVar1 = build_lens_update_packet_10544cd0(extraout_r4,(void *)extraout_r5);
  uVar2 = build_lens_update_packet_10544cd0(0x40000000,(void *)0);
  uVar5 = multiply_fixed_point_values_105445a2(uVar1,extraout_r5_00,uVar2,extraout_r5_01);
  uVar1 = encode_float32_to_fixed_point((uint)((ulonglong)uVar5 >> 0x20),(uint)uVar5);
  uVar4 = compute_float_division(uVar1,0x41000000);
  uVar1 = multiply_fixed_point_values_10544412(uVar4,0x42880000);
  convert_signed_byte_to_unsigned(uVar1);
  add_two_64_bit_integers(extraout_r4_00,extraout_r5_02,0x3fe00000,0);
  uVar1 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_03);
  uVar2 = uVar1 & 0xff;
  if (uVar2 < 0x1c) {
    uVar1 = 0x1c;
  }
  else if (uVar2 < 0xa5) {
    if (param_4 == 1) {
      uVar2 = uVar1 & 7;
      switch(uVar2) {
      case 0:
      case 1:
      case 2:
        uVar2 = 1;
        break;
      case 3:
      case 4:
      case 5:
        uVar2 = 4;
        break;
      case 6:
      case 7:
        uVar2 = 7;
      }
      uVar2 = (uVar1 & 0xf8) + uVar2;
    }
    else {
      uVar2 = uVar2 + 1 & 0xfc;
    }
    uVar1 = (uint)param_5;
    if (uVar2 <= param_5) {
      uVar1 = uVar2;
    }
  }
  else {
    uVar1 = (uint)param_5;
    if (0xa3 < uVar1) {
      uVar1 = 0xa4;
    }
  }
  return uVar1;
}
