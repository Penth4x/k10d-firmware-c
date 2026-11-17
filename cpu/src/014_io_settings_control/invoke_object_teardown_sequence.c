/* @k10d invoke_object_teardown_sequence @ 0x10369a2c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Calls four helpers on an object, including a virtual method at vtable offset 0x44.
 * summary:
 *   The function takes an object pointer and performs a sequence of operations: it calls
 *   dispatch_on_mode_field_104bb71a on a sub-structure at offset 0xf, calls
 *   init_object_state_from_ram_flags on the object itself, invokes a virtual method (slot
 *   8) via the vtable at offset 0x44 with a this-adjustment, and finally calls
 *   request_ui_sync_code_4 on a sub-structure at offset 5. The pattern suggests a cleanup
 *   or deactivation routine for a complex object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_teardown_sequence(int *param_1)

{
  dispatch_on_mode_field_104bb71a(param_1 + 0xf);
  init_object_state_from_ram_flags(param_1);
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  request_ui_sync_code_4(param_1 + 5);
  return;
}
