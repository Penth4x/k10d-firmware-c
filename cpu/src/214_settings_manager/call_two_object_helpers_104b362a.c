/* @k10d call_two_object_helpers_104b362a @ 0x104b362a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on fields at offsets 0x30 and 0x44 of the object passed in
 *   param_1.
 * summary:
 *   The function dereferences the pointer in param_1, passes the 32-bit value at offset
 *   0x30 to init_object_if_flag_zero, and passes the pointer at offset 0x44 to set_flg_obj.
 *   It performs no other operations and returns void. The specific roles of the object
 *   fields and the callees are not determinable from the provided pseudocode and callee
 *   list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_object_helpers_104b362a(cls_105b7f68 *param_1, uint32_t param_2, uint32_t param_3)
{
  init_object_if_flag_zero(param_1->field_0x30, (uint32_t)param_2, (uint32_t)param_3);
  set_flg_obj((void *)param_1->field_0x44, 0x10000);
  return;
}
