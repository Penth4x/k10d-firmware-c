/* @k10d clear_struct_fields_104a1a02 @ 0x104a1a02
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Zeroes nine consecutive 32-bit fields at offsets 8 through 0x28 of a structure passed
 *   in param_1.
 * summary:
 *   The function writes zero to nine 4-byte locations within the memory block pointed to by
 *   param_1. It does not touch the first 8 bytes of the structure. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_struct_fields_104a1a02(cls_105b6174 *param_1)

{
  param_1->field_0x8 = 0;
  param_1->field_0xc = 0;
  param_1->field_0x10 = 0;
  param_1->field_0x14 = 0;
  param_1->field_0x18 = 0;
  param_1->field_0x1c = 0;
  param_1->field_0x20 = 0;
  param_1->field_0x24 = 0;
  param_1->field_0x28 = 0;
  return;
}
