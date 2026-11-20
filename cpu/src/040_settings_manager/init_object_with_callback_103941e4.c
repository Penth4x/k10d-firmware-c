/* @k10d init_object_with_callback_103941e4 @ 0x103941e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting a self-referential pointer, clearing a flag, and
 *   conditionally invoking a setup routine.
 * summary:
 *   The function writes the address of param_1 + 4 into the field at offset 0x48. It calls
 *   release_object_with_pointer_field, then clears the byte at offset 0x4d. It calls
 *   poll_until_flag_clear_10394370 with param_1; if the result is non-zero, it calls
 *   map_mode_code_to_index_103942e6. Finally, it returns param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b1c * init_object_with_callback_103941e4(cls_10562b1c *param_1)

{
  int iVar1;
  
  param_1->field_0x48 = (uint32_t)(uintptr_t)&param_1->field_0x4;
  release_object_with_pointer_field((void *)__frv_reg_unset(4));
  param_1->field_0x4d = 0;
  iVar1 = poll_until_flag_clear_10394370((uint32_t)(uintptr_t)param_1);
  if (iVar1 != 0) {
    map_mode_code_to_index_103942e6((uint32_t)(uintptr_t)param_1);
  }
  return param_1;
}
