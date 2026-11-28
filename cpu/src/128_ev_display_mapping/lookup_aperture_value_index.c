/* @k10d lookup_aperture_value_index @ 0x1045ab64
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_aperture_value_index(uint32_t param_1,uint param_2,int param_3,uint param_4,char param_5,byte param_6
                 )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
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
  
  uVar1 = (int)((param_2 & 0xffff) * 10) / param_3 & 0xffff;
  if (param_5 == '\x01') {
    uVar2 = (uint)param_6;
  }
  else {
    if (param_4 == 2) {
      uVar2 = 0x43;
      do {
        if (uVar1 == *(ushort *)(uVar2 * 2 + 0x105a388e/*ROM*/)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1 & 0xff;
      } while (uVar2 < 0x77);
    }
    else {
      uVar2 = 0x44;
      if (param_4 == 1) {
        do {
          uVar3 = uVar2 & 0xf;
          if (((((uVar3 == 1) || (uVar3 == 4)) || (uVar3 == 7)) ||
              (((uVar3 == 9 || (uVar3 == 0xc)) || (uVar3 == 0xf)))) &&
             (uVar1 == *(ushort *)(uVar2 * 2 + 0x105a37b6/*ROM*/))) {
            return uVar2;
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 0xad);
      }
      else {
        do {
          if (uVar1 == *(ushort *)((param_4 & 0xffff) * 0xd8 + 0x105a36de/*ROM*/ + uVar2 * 2)) {
            return uVar2;
          }
          uVar2 = uVar2 + 4 & 0xff;
        } while (uVar2 < 0xad);
      }
    }
    uVar1 = negate_signed_integer(param_2);
    uVar2 = negate_signed_integer(param_3);
    uVar4 = compare_version_fields(uVar1,uVar2);
    uVar1 = compute_float_division(uVar4,uVar4);
    convert_signed_byte_to_unsigned(uVar1);
    uVar1 = build_lens_update_packet_10544cd0((uint)(extraout_r4),(void *)(extraout_r5));
    uVar2 = build_lens_update_packet_10544cd0(0x40000000,0);
    uVar5 = multiply_fixed_point_values_105445a2(uVar1,extraout_r5_00,uVar2,extraout_r5_01);
    uVar1 = encode_float32_to_fixed_point((uint)((ulonglong)uVar5 >> 0x20),(uint)uVar5);
    uVar4 = compute_float_division(uVar1,0x41000000);
    uVar1 = multiply_fixed_point_values_10544412(uVar4,0x42880000);
    convert_signed_byte_to_unsigned(uVar1);
    add_two_64_bit_integers(extraout_r4_00,extraout_r5_02,0x3fe00000,0);
    uVar1 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_03);
    uVar2 = uVar1 & 0xff;
    if (uVar2 < 0x44) {
      uVar2 = 0x44;
    }
    else if (uVar2 < 0xad) {
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
    }
    else {
      uVar2 = 0xac;
    }
  }
  return uVar2;
}
