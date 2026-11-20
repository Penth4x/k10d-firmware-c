/* @k10d invoke_virtual_slot_and_helpers_10369ada @ 0x10369ada
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on the object, invokes virtual slot 8, then calls a fourth helper.
 * summary:
 *   The function takes an object pointer in param_1. It calls
 *   dispatch_on_field_0x2c_104bb7f8 on param_1+0xf, calls init_object_state_from_ram_flags
 *   on the object, performs a virtual call to slot 8 (offset 0x44) with a this-adjustment
 *   from offset 0x40, and finally calls request_ui_sync_code_4 on param_1+5. The specific
 *   roles of the callees are unknown, so the operation is described mechanically as a
 *   sequence of helper calls and a virtual dispatch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_helpers_10369ada(int *param_1)

{
  dispatch_on_field_0x2c_104bb7f8(param_1 + 0xf);
  init_object_state_from_ram_flags(param_1);
  (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
  request_ui_sync_code_4(param_1 + 5);
  return;
}
