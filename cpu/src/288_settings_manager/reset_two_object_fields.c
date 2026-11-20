/* @k10d reset_two_object_fields @ 0x1052cb20
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes the 4-byte fields at offsets 4 and 0x14 of the object passed in param_1.
 * summary:
 *   This is virtual slot 2 of class cls_105fa6fc. It performs two simple stores, setting
 *   the words at offsets 0x04 and 0x14 of the object to zero. It has no callees and no
 *   other side effects. The specific meaning of these two fields is not determinable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_two_object_fields(cls_105fa6fc *param_1)

{
  param_1->field_0x4 = 0;
  param_1->field_0x14 = 0;
  return;
}
