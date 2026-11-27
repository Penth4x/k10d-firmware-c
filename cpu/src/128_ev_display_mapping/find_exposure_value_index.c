/* @k10d find_exposure_value_index @ 0x1045ae8c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 128_ev_display_mapping (unit names are model-proposed)
 * purpose:
 *   Searches a table for an index matching a computed ratio, falling back to a clamped
 *   value if not found.
 * summary:
 *   The function computes a scaled ratio (param_2 * 10 / param_3) and searches a table of
 *   short integers for a match. If param_4 is 1, it searches a specific subset of indices
 *   (0, 3, 5, 8, 11, 13) in the table at 0x105a4794. Otherwise, it searches a table at
 *   0x105a4692 with a stride determined by param_4. If no match is found, it calls a series
 *   of helper functions (negate_signed_integer, compare_version_fields,
 *   compute_float_division, compare_signed_fixed_point, convert_signed_byte_to_unsigned,
 *   add_two_64_bit_integers, normalize_fixed_point_value_105448ac) to compute a fallback
 *   value, which is then clamped to the range 0-127 and adjusted based on param_4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint find_exposure_value_index(uint32_t param_1,short param_2,int param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uint extraout_r4;
  uint extraout_r4_00;
  void *extraout_r5;
  uint extraout_r5_00;
  
  sVar1 = (short)((param_2 * 10) / param_3);
  uVar2 = 0;
  if (param_4 == 1) {
    do {
      uVar3 = uVar2 & 0xf;
      if (((((uVar3 == 0) || (uVar3 == 3)) || (uVar3 == 5)) ||
          (((uVar3 == 8 || (uVar3 == 0xb)) || (uVar3 == 0xd)))) &&
         (sVar1 == *(short *)(uVar2 * 2 + 0x105a4794/*ROM*/))) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x81);
  }
  else {
    do {
      if (sVar1 == *(short *)(DAT_105a4692/*ROM*/ + uVar2 * 2 + (param_4 & 0xffff) * 0x102)) {
        return uVar2;
      }
      uVar2 = uVar2 + 4 & 0xff;
    } while (uVar2 < 0x81);
  }
  uVar2 = negate_signed_integer((int)param_2);
  uVar3 = negate_signed_integer(param_3);
  uVar4 = compare_version_fields(uVar2,uVar3);
  uVar4 = compute_float_division(uVar4,0x41000000);
  uVar2 = compare_signed_fixed_point(0x42800000,uVar4);
  convert_signed_byte_to_unsigned(uVar2);
  add_two_64_bit_integers(extraout_r4,extraout_r5,0x3fe00000,0);
  uVar2 = normalize_fixed_point_value_105448ac(extraout_r4_00,extraout_r5_00);
  if ((uVar2 & 0xff) < 0x81) {
    uVar2 = (uVar2 & 0xff) + 1;
    if (param_4 == 1) {
      uVar3 = uVar2 & 7;
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
      uVar3 = (uVar2 & 0xf8) + uVar3;
    }
    else {
      uVar3 = uVar2 & 0xfc;
    }
  }
  else {
    uVar3 = 0x80;
  }
  return uVar3;
}
