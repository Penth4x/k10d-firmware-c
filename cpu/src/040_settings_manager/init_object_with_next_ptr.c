/* @k10d init_object_with_next_ptr @ 0x10393d30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting its next pointer to offset 8 and clearing a flag at
 *   offset 0x7c.
 * summary:
 *   The function takes a pointer to an object and sets the field at offset 4 to point to
 *   offset 8 of the same object. It clears the byte at offset 0x7c. If the byte at offset
 *   0x72 is non-zero, it calls forward_param_to_helper_10394ad8 with the object and the
 *   value at offset 0x80. Finally, it calls call_two_helpers_on_struct_10393db0 with the
 *   object pointer and returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562a24 * init_object_with_next_ptr(cls_10562a24 *param_1)

{
  param_1->field_0x4 = (uint32_t)&param_1->field_0x8;
  *(uint8_t *)&param_1->field_0x7c = 0;
  if (param_1->field_0x72 != '\0') {
    forward_param_to_helper_10394ad8(param_1,param_1->field_0x80);
  }
  call_two_helpers_on_struct_10393db0((int)param_1);
  return param_1;
}
