/* @k10d call_two_unnamed_helpers_104ae0b4 @ 0x104ae0b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the input pointer to the second one.
 * summary:
 *   This function acts as a thin wrapper that calls invoke_virtual_slot_two_104ae2bc with
 *   no arguments, then calls invoke_virtual_slot_4_104af106 with param_1. It is virtual
 *   slot 2 of class cls_105b76c0. No side effects or data manipulation are visible in this
 *   function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_104ae0b4(cls_105b76c0 *param_1)

{
  invoke_virtual_slot_two_104ae2bc((uint32_t)param_1);
  invoke_virtual_slot_4_104af106(&param_1->field_0x0);
  return;
}
