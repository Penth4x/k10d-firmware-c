/* @k10d dispatch_object_teardown_103a5702 @ 0x103a5702
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Conditionally invokes a virtual method if a flag is clear, then calls three helpers on
 *   a derived object pointer.
 * summary:
 *   Checks byte at offset 4 of the object; if zero, calls virtual slot 8 (offset 0x44) with
 *   argument 0. Then passes param_1+2 to three unnamed callees (0x10492252, 0x10492216,
 *   0x10491f5c). The callees' roles are unknown, so the specific subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_teardown_103a5702(int *param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 1) == '\0') {
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1,0);
  }
  piVar1 = param_1 + 2;
  dispatch_event_to_object_10492252(piVar1,param_1);
  request_ui_sync_and_set_flag(piVar1);
  request_ui_sync_with_flag_10491f5c(piVar1,0);
  return;
}
