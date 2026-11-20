/* @k10d loop_virtual_ops_on_object @ 0x104270b2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Performs an infinite loop of virtual method calls and helper function invocations on an
 *   object.
 * summary:
 *   The function enters an infinite loop that repeatedly calls virtual methods on the
 *   object passed in param_1 (slots at offsets 0x4c, 0x54, 0x60, and 0x5c) and invokes four
 *   helper functions (set_flag_at_offset_eight_10427ba8, init_object_with_two_ids_10427bba,
 *   set_flag_at_offset_eight_10427c02, check_and_clear_event_flag) on a derived pointer. It
 *   includes a nested while loop that waits for check_and_clear_event_flag to return a non-
 *   zero value, calling a virtual method in between. The specific camera subsystem is not
 *   identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

void loop_virtual_ops_on_object(cls_105bb314 *param_1)

{
  int iVar1;
  void **ppuVar2;
  
  (((vtbl_entry*)(param_1->field_0x0))[9].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[9].adj,0);
  ppuVar2 = &((uint32_t *)&(param_1->field_0x4))[1];
  set_flag_at_offset_eight_10427ba8(ppuVar2);
  do {
    init_object_with_two_ids_10427bba(ppuVar2);
    (((vtbl_entry*)(param_1->field_0x0))[10].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[10].adj,0);
    set_flag_at_offset_eight_10427c02(ppuVar2);
    iVar1 = check_and_clear_event_flag(ppuVar2);
    while (iVar1 == 0) {
      (((vtbl_entry*)(param_1->field_0x0))[12].fn)
                ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[12].adj,0);
      iVar1 = check_and_clear_event_flag(ppuVar2);
    }
    (((vtbl_entry*)(param_1->field_0x0))[11].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[11].adj,0);
  } while( true );
}
