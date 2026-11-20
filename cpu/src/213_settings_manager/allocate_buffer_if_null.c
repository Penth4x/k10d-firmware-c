/* @k10d allocate_buffer_if_null @ 0x104af774
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 0x80-byte buffer via dispatch_by_type_field_104af7e6 if the first field of
 *   the object is null, otherwise returns 0.
 * summary:
 *   Checks if the first 4-byte field of the object pointed to by param_1 is zero. If it is,
 *   it calls dispatch_by_type_field_104af7e6 with the object pointer, size 0x80, and flag
 *   0, returning the result. If the field is non-zero, it returns 0. This is virtual method
 *   slot 3 of class cls_105b7838.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_buffer_if_null(cls_105b7838 *param_1)

{
  uint32_t uVar1;
  
  if (param_1->field_0x0 == 0) {
    uVar1 = dispatch_by_type_field_104af7e6((void *)param_1,0x80,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
