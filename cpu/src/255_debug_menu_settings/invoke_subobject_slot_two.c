/* @k10d invoke_subobject_slot_two @ 0x104ec83e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 on ten sub-objects at fixed offsets within a large object.
 * summary:
 *   The function takes a base pointer (param_1) and sequentially invokes virtual method
 *   slot 2 on ten distinct sub-objects located at offsets 0x4 through 0x70. All callees are
 *   verified as virtual slot 2 implementations of various small classes. The function
 *   returns 1 unconditionally. The specific behavior of slot 2 for each sub-class is not
 *   provided, so the higher-level camera role cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_subobject_slot_two(cls_105c2b6c *param_1)

{
  store_query_result_at_offset_8_104eb9c4(&param_1->field_0x4);
  store_result_at_offset_eight_104ebc8e(&param_1->field_0x10);
  store_query_result_at_offset_8_104ebe80(&param_1->field_0x1c);
  store_query_result_at_offset_8_104ebf8e(&param_1->field_0x28);
  store_query_result_at_offset_8_104ec422(&param_1->field_0x34);
  store_query_result_at_offset_8_104ed3ec((cls_105c2be4 *)&param_1->field_0x40);
  store_query_result_at_offset_8_104ed4f4((cls_105c2c2c *)&param_1->field_0x4c);
  store_result_at_offset_eight_104ed5dc((cls_105c2c74 *)&param_1->field_0x58);
  store_result_at_offset_eight_104ed82c((cls_105c2cdc *)&param_1->field_0x64);
  store_query_result_at_offset_8_1050a860((cls_105d5428 *)&param_1->field_0x70);
  return 1;
}
