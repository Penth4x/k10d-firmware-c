/* @k10d reset_field_at_offset_0x9c @ 0x104df3d0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Writes zero to a field at offset 0x9c of param_1 and then calls a helper on that same
 *   field.
 * summary:
 *   The function takes a pointer (param_1), writes the value 0 to the memory location at
 *   param_1+0x9c via an indirect call to code at 0x1052bdd2, and then calls
 *   check_flag_and_call_helper_104d849a with param_1+0x9c as its argument. The role of the
 *   field and the helper is not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

void reset_field_at_offset_0x9c(cls_105bb314 *param_1)

{
  (*(code *)0x1052bdd2/*ROM*/)(&param_1->field_0x9c,0);
  check_flag_and_call_helper_104d849a((uint)&param_1->field_0x9c);
  return;
}
