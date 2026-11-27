/* @k10d compute_and_dispatch_pixel_offset @ 0x1051ba92
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Computes a linear memory offset from struct fields and dispatches to a helper or a no-
 *   op based on a bit test.
 * summary:
 *   The function checks if two fields at offsets 4 and 6 are zero. If so, it calls a series
 *   of helpers (compute_lens_fw_crc32, abs_uint32, multiply_two_floats,
 *   add_two_64_bit_integers, normalize_fixed_point_value_105448ac) to compute a value,
 *   otherwise it reads a value from offset 8. It then tests bit 5 of the field at offset
 *   0x13. If the bit is set, it calls allocate_and_process_buffer; otherwise, it calculates
 *   a complex offset using fields at offsets 0, 1, 2, and 10, and calls
 *   clear_zero_high_nibble_bytes with this offset and a second computed value. The
 *   calculations resemble address arithmetic for a 2D buffer or pixel data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_dispatch_pixel_offset(cls_105d6afc *param_1, uint32_t param_2, uint32_t param_3)
{
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  int iVar1;
  uint extraout_r5;
  void *extraout_r5_00;
  uint extraout_r5_01;
  uint64_t uVar2;
  
  if ((param_1->field_0x8 == 0) && (param_1->field_0xc == 0)) {
    compute_lens_fw_crc32(param_1->field_0x4);
    uVar2 = abs_uint32((uint)param_1->field_0x14 * (uint)param_1->field_0x16);
    multiply_two_floats((uint)((ulonglong)uVar2 >> 0x20),(uint)uVar2,0x3ff80000,0);
    add_two_64_bit_integers(extraout_r4_00,extraout_r5_00,extraout_r4,extraout_r5);
    iVar1 = normalize_fixed_point_value_105448ac(extraout_r4_01,extraout_r5_01);
  }
  else {
    iVar1 = param_1->field_0x10;
  }
  if ((uint)param_1->field_0x26 == ((int)(uint)param_1->field_0x26 >> 5) * 0x20) {
    allocate_and_process_buffer((uint32_t)param_1, (uint32_t)param_2, (uint32_t)param_3);
  }
  else {
    clear_zero_high_nibble_bytes(param_1,(uint)param_1->field_0x2 * (uint)param_1->field_0x14 + param_1->field_0x4 +
                         (uint)param_1->field_0x0,
                 (uint)param_1->field_0x2 * ((int)(uint)param_1->field_0x14 >> 1) + iVar1 +
                 ((int)(uint)param_1->field_0x0 >> 1));
  }
  return;
}
