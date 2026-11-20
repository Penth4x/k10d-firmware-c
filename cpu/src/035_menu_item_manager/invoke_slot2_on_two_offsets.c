/* @k10d invoke_slot2_on_two_offsets @ 0x10373bd0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of cls_105b9458 on two sub-objects at fixed offsets within
 *   param_1.
 * summary:
 *   The function takes a single object pointer and invokes the verified virtual method slot
 *   2 (reset_object_fields_and_call_base) on two members located at offsets 0x3c and 0x250.
 *   No other side effects or state changes are visible. The caller is
 *   initialize_object_with_delay, whose role is not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_slot2_on_two_offsets(void *param_1)

{
  reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x3c));
  reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x250));
  return;
}
