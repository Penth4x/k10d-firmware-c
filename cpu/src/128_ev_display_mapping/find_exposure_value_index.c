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

uint find_exposure_value_index(uint32_t unused_arg, short ev_num, int ev_den, uint table_mode)

{
  short target_ev;
  uint scan_idx;
  uint result;
  uint32_t fp_value;
  uint reg_r4;
  uint reg_r4_after;
  void *reg_r5;
  uint reg_r5_after;

  target_ev = (short)((ev_num * 10) / ev_den);
  scan_idx = 0;

  if (table_mode == 1) {
    do {
      result = scan_idx & 0xf;
      if (((((result == 0) || (result == 3)) || (result == 5)) ||
          (((result == 8 || (result == 0xb)) || (result == 0xd)))) &&
         (target_ev == *(short *)(scan_idx * 2 + 0x105a4794/*ROM*/))) {
        return scan_idx;
      }
      scan_idx = scan_idx + 1 & 0xff;
    } while (scan_idx < 0x81);
  }
  else {
    do {
      if (target_ev == *(short *)(DAT_105a4692/*ROM*/ + scan_idx * 2 + (table_mode & 0xffff) * 0x102)) {
        return scan_idx;
      }
      scan_idx = scan_idx + 4 & 0xff;
    } while (scan_idx < 0x81);
  }

  scan_idx = negate_signed_integer((int)ev_num);
  result = negate_signed_integer(ev_den);
  fp_value = compare_version_fields(scan_idx, result);
  fp_value = compute_float_division(fp_value, 0x41000000);
  scan_idx = compare_signed_fixed_point(0x42800000, fp_value);
  convert_signed_byte_to_unsigned(scan_idx);
  add_two_64_bit_integers(reg_r4, reg_r5, 0x3fe00000, 0);
  scan_idx = normalize_fixed_point_value_105448ac(reg_r4_after, reg_r5_after);

  if ((scan_idx & 0xff) < 0x81) {
    scan_idx = (scan_idx & 0xff) + 1;
    if (table_mode == 1) {
      result = scan_idx & 7;
      switch (result) {
      case 0:
      case 1:
      case 2:
        result = 0;
        break;
      case 3:
      case 4:
        result = 3;
        break;
      case 5:
      case 6:
      case 7:
        result = 5;
      }
      result = (scan_idx & 0xf8) + result;
    }
    else {
      result = scan_idx & 0xfc;
    }
  }
  else {
    result = 0x80;
  }

  return result;
}
