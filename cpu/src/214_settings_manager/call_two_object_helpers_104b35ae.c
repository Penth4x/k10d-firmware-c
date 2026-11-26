/* @k10d call_two_object_helpers_104b35ae @ 0x104b35ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on fields at offsets 0x2c and 0x44 of a struct passed in
 *   param_1.
 * summary:
 *   The function dereferences param_1 and passes the 32-bit value at offset 0x2c to
 *   lazy_init_field_at_offset_0x18. It then passes the pointer value at offset 0x44 to
 *   set_flg_obj. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_object_helpers_104b35ae(cls_105b7f68 *param_1)

{
  lazy_init_field_at_offset_0x18(param_1->field_0x2c);
  set_flg_obj((void *)param_1->field_0x44, 0x400);
  return;
}
