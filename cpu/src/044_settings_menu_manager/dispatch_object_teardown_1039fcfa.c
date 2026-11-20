/* @k10d dispatch_object_teardown_1039fcfa @ 0x1039fcfa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally invokes a virtual method on the object, then calls three helper functions
 *   on a derived pointer.
 * summary:
 *   Checks if the second byte of the object is zero. If so, it calls virtual slot 8 (offset
 *   0x44) with a this-adjustment from offset 0x40 and argument 0. It then passes a pointer
 *   to the third field (param_1 + 2) to three unnamed callees:
 *   dispatch_event_to_object_10492252, request_ui_sync_and_set_flag, and
 *   request_ui_sync_with_flag_10491f5c (with argument 1). The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_teardown_1039fcfa(cls_105643d0 *param_1)

{
  int *piVar1;
  
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  piVar1 = &param_1->field5_0x8;
  dispatch_event_to_object_10492252((cls_105b4254 *)piVar1,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)piVar1);
  request_ui_sync_with_flag_10491f5c(piVar1,1);
  return;
}
