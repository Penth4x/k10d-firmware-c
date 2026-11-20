/* @k10d clear_byte_and_call_two_helpers @ 0x104072b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0xb9 in the object, then calls two helper functions with the
 *   object.
 * summary:
 *   The function writes 0 to the byte at param_1 + 0xb9. It then calls
 *   call_helper_on_fetched_pointer with no arguments, followed by
 *   clear_struct_field_at_offset_8 passing param_1. The specific roles of the callees are
 *   unknown, so the operation is described mechanically as clearing a flag/field and
 *   invoking two subsequent routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_and_call_two_helpers(cls_105992d4 *param_1)

{
  param_1->field_0xb9 = '\0';
  call_helper_on_fetched_pointer();
  clear_struct_field_at_offset_8((cls_10564e90 *)param_1);
  return;
}
