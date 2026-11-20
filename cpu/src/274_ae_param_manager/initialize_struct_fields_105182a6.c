/* @k10d initialize_struct_fields_105182a6 @ 0x105182a6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Initializes multiple fields of a structure by calling helper functions on specific
 *   offsets.
 * summary:
 *   The function takes a pointer to a structure and calls four instances of
 *   iterate_and_invoke_virtual_method on offsets 0xc, 0x44, 0x7c, and 0xb4. It then calls
 *   call_with_field_at_offset_0x70 on offset 0x140, a function at 0x104a199c on offset
 *   0x1b4, and release_two_handles on offset 0x1e4. The specific roles of these callees are
 *   unknown, but the pattern suggests a standard initialization routine for a complex
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d65d0": ignoring overlapping field "field_0x1e4" */

void initialize_struct_fields_105182a6(cls_105d65d0 *param_1)

{
  iterate_and_invoke_virtual_method((int)(&param_1->field_0xc));
  iterate_and_invoke_virtual_method((int)(&param_1->field_0x44));
  iterate_and_invoke_virtual_method((int)(&param_1->field_0x7c));
  iterate_and_invoke_virtual_method((int)(&param_1->field_0xb4));
  iterate_and_invoke_virtual_method(param_1->field_0xf0);
  call_with_field_at_offset_0x70((cls_105d6608 *)&param_1->field_0x140);
  (*(code *)0x104a199c/*ROM*/)(&param_1->field_0x1b4);
  release_two_handles((cls_105b6554 *)&((uint32_t *)&(param_1->field_0x1b4))[12]);
  return;
}
