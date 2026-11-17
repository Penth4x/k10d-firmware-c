/* @k10d compute_shifted_bitfield @ 0x104c929c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 234_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Extracts a 10-bit field from a helper result and left-shifts it by 5.
 * summary:
 *   The function calls two accessors on param_2 and passes their results to
 *   compute_lens_fw_crc32. It then performs a series of calls to functions in the
 *   0x10544xxx range, passing constants like 0x3fa00000 and 0x3fe00000. Finally, it calls
 *   normalize_fixed_point_value_105448ac, masks the result with 0x7ff (10 bits), and
 *   returns the value shifted left by 5. The specific subsystem is not identifiable from
 *   the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_shifted_bitfield(uint32_t param_1,uint32_t *param_2,uint32_t param_3)

{
  uint uVar1;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r4_02;
  uint extraout_r4_03;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint extraout_r5_01;
  void *extraout_r5_02;
  uint extraout_r5_03;
  uint64_t uVar2;
  
  uVar1 = return_first_word_1045c514(param_2);
  compute_lens_fw_crc32(uVar1);
  uVar1 = read_struct_field_at_offset_4(param_2);
  compute_lens_fw_crc32(uVar1);
  uVar2 = abs_uint32(param_3);
  multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3fa00000,0);
  uVar2 = multiply_fixed_point_values_105445a2(extraout_r4_00,extraout_r5_00,extraout_r4,extraout_r5);
  multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,extraout_r4_01,extraout_r5_01);
  add_two_64_bit_integers(extraout_r4_02,extraout_r5_02,0x3fe00000,0);
  uVar1 = normalize_fixed_point_value_105448ac(extraout_r4_03,extraout_r5_03);
  return (uVar1 & 0x7ff) << 5;
}
