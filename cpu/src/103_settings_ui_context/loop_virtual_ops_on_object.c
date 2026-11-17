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

void loop_virtual_ops_on_object(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(*param_1 + 0x4c))((int)*(short *)(*param_1 + 0x48) + (int)param_1,0);
  piVar2 = param_1 + 2;
  set_flag_at_offset_eight_10427ba8(piVar2);
  do {
    init_object_with_two_ids_10427bba(piVar2);
    (**(code **)(*param_1 + 0x54))((int)*(short *)(*param_1 + 0x50) + (int)param_1,0);
    set_flag_at_offset_eight_10427c02(piVar2);
    iVar1 = check_and_clear_event_flag(piVar2);
    while (iVar1 == 0) {
      (**(code **)(*param_1 + 100))((int)*(short *)(*param_1 + 0x60) + (int)param_1,0);
      iVar1 = check_and_clear_event_flag(piVar2);
    }
    (**(code **)(*param_1 + 0x5c))((int)*(short *)(*param_1 + 0x58) + (int)param_1,0);
  } while( true );
}
