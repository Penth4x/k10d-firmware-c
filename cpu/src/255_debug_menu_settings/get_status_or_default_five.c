/* @k10d get_status_or_default_five @ 0x104ea4be
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns a status code from a callee if an object field is zero, otherwise returns 5.
 * summary:
 *   Checks the integer at offset 0xc of the object pointed to by param_1. If it is zero,
 *   calls dispatch_on_state_field_104ea53c with the object pointer and returns its result.
 *   If the field is non-zero, returns the constant 5. The role of the object and the
 *   meaning of the status codes are not determinable from the provided pseudocode and
 *   unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int get_status_or_default_five(cls_105c20d0 *param_1)

{
  int iVar1;
  
  if (param_1->field_0xc == 0) {
    iVar1 = dispatch_on_state_field_104ea53c((int)param_1);
  }
  else {
    iVar1 = 5;
  }
  return iVar1;
}
