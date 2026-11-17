/* @k10d invoke_virtual_slot_six_10369aa0 @ 0x10369aa0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Calls helper functions on an object and then invokes virtual slot 6 via its vtable.
 * summary:
 *   The function takes an object pointer in param_1. It calls
 *   dispatch_on_field_0x2c_104bb7ae on a sub-structure at offset 0xf, calls
 *   init_object_state_from_ram_flags on the object itself, and request_ui_sync_code_4 on a
 *   sub-structure at offset 5. It then performs a virtual call to slot 6 (offset 0x44 in
 *   the vtable) with the object as the this-pointer, applying the this-adjustment from the
 *   vtable entry at offset 0x40. The specific roles of the callees are unknown, but the
 *   pattern is a standard object method invocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_six_10369aa0(int *param_1)

{
  dispatch_on_field_0x2c_104bb7ae(param_1 + 0xf);
  init_object_state_from_ram_flags(param_1);
  (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
  request_ui_sync_code_4(param_1 + 5);
  return;
}
