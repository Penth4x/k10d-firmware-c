/* @k10d initialize_object_with_size_check @ 0x1048253a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Copies a size field from a source struct, initializes object fields based on size
 *   thresholds, and returns a success flag.
 * summary:
 *   The function copies a 32-bit value from offset 8 of param_2 to offset 0xc of param_1.
 *   It calls map_size_to_shift_value and map_size_to_shift_amount to populate fields at
 *   offsets 0x10 and 0x12. It then branches on the value at offset 0xc: if less than
 *   0x4000001, it calls select_size_class_by_threshold and further branches on whether the
 *   value is less than 0x400001, calling either compute_exposure_step_index or
 *   compute_windowed_offset and setting specific fields (0x1e, 0x20, 0x22). It returns 1 if
 *   the initial size check passes, 0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_with_size_check(cls_105ab6c0 *param_1,int param_2)

{
  uint16_t uVar2;
  uint32_t uVar1;
  uint8_t uVar3;
  
  param_1->field_0xc = *(uint32_t *)(param_2 + 8);
  uVar2 = map_size_to_shift_value(__frv_reg_unset(4), __frv_reg_unset(5));
  param_1->field_0x10 = uVar2;
  uVar2 = map_size_to_shift_amount((uint32_t)(param_1),(uint)(param_1->field_0xc));
  param_1->field_0x12 = uVar2;
  if ((uint)param_1->field_0xc < 0x4000001) {
    uVar3 = select_size_class_by_threshold((uint32_t)(param_1), (uint)(__frv_reg_unset(5)));
    param_1->field_0x1c = uVar3;
    if ((uint)param_1->field_0xc < 0x400001) {
      compute_exposure_step_index(__frv_reg_unset(4));
      param_1->field_0x1e = 1;
      param_1->field_0x20 = 2;
      param_1->field_0x22 = 0x200;
    }
    else {
      compute_windowed_offset((int)(param_1));
      param_1->field_0x22 = 0;
      param_1->field_0x20 = 2;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
