/* @k10d reset_object_state_fields_1047cbe2 @ 0x1047cbe2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed set of default values into a 0x64-byte object structure.
 * summary:
 *   The function takes a pointer to an object and initializes specific byte and word fields
 *   at offsets 0x44 through 0x58. It sets several bytes to 0 or 1, and writes 0xffffffff
 *   and 0x8000 to 32-bit fields. It returns 1. No callees are present, and the specific
 *   meaning of the fields is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_object_state_fields_1047cbe2(cls_105aaa50 *param_1)

{
  param_1->field_0x46 = 0;
  param_1->field_0x45 = 1;
  param_1->field_0x47 = 1;
  param_1->field_0x48 = 0;
  param_1->field_0x44 = 1;
  param_1->field_0x49 = 0;
  param_1->field_0x54 = 0x8000;
  param_1->field_0x50 = 0xffffffff;
  param_1->field_0x4c = 0xffffffff;
  param_1->field_0x58 = 1;
  return 1;
}
