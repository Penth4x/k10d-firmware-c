/* @k10d dispatch_object_method_if_flags_set @ 0x10494e24
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object if two byte flags in the context struct are set.
 * summary:
 *   The function first calls dispatch_object_event_and_notify. It then checks if byte at
 *   offset 0xac is zero, calls read_byte_at_offset_8, and checks if byte at offset 0xa0 is
 *   non-zero. If these conditions are met, it calls dispatch_virtual_method_with_params,
 *   performs a virtual call via a pointer chain from offset 0x60, and calls
 *   dispatch_virtual_call_with_params_10495120. Finally, it calls
 *   invoke_virtual_on_range_items_10493858 with the context and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_method_if_flags_set(cls_105b4dac *param_1)

{
  int iVar1;
  
  dispatch_object_event_and_notify((cls_105b48dc *)param_1);
  if (((param_1->field_0xac == '\0') && (iVar1 = read_byte_at_offset_8((int)(param_1)), iVar1 != 0)) &&
     (param_1->field_0xa0 != '\0')) {
    dispatch_virtual_method_with_params((int)(param_1));
    iVar1 = *(int *)(*(int *)param_1->field_0x60 + 0xc);
    (((vtbl_entry*)(iVar1))[10].fn)(*(int *)param_1->field_0x60 + (int)((vtbl_entry*)(iVar1))[10].adj);
    dispatch_virtual_call_with_params_10495120((int)(param_1));
  }
  invoke_virtual_on_range_items_10493858(param_1,0);
  return;
}
