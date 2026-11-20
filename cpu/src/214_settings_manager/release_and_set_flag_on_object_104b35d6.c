/* @k10d release_and_set_flag_on_object_104b35d6 @ 0x104b35d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on a field at offset 0x2c and sets a flag on a pointer at offset 0x44.
 * summary:
 *   The function takes a single object pointer. It dereferences the 4-byte value at offset
 *   0x2c and passes it to check_and_set_flag_if_zero_104b2c9a. It then dereferences the
 *   pointer at offset 0x44 and passes it to set_flg_obj. The role of
 *   check_and_set_flag_if_zero_104b2c9a is unknown, and the specific flag set by
 *   set_flg_obj is not identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_and_set_flag_on_object_104b35d6(cls_105b7f68 *param_1)

{
  check_and_set_flag_if_zero_104b2c9a(param_1->field_0x2c);
  set_flg_obj((void *)param_1->field_0x44);
  return;
}
