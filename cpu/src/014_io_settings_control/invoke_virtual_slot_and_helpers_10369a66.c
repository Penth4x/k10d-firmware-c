/* @k10d invoke_virtual_slot_and_helpers_10369a66 @ 0x10369a66
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Calls two helpers on the object, invokes virtual slot 8, then calls a fourth helper on
 *   a sub-object.
 * summary:
 *   The function takes an object pointer (param_1) and performs a sequence of operations:
 *   it calls dispatch_on_field_0x2c_104bb764 on a field at offset 0xf, calls
 *   init_object_state_from_ram_flags on the object itself, invokes virtual slot 8 (offset
 *   0x44) with a this-adjustment from offset 0x40, and finally calls request_ui_sync_code_4
 *   on a field at offset 5. The virtual call idiom indicates a Cfront-style object with a
 *   vtable at *param_1. The specific subsystem is not determinable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_helpers_10369a66(int *param_1)

{
  dispatch_on_field_0x2c_104bb764(param_1 + 0xf);
  init_object_state_from_ram_flags(param_1);
  (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
  request_ui_sync_code_4(param_1 + 5);
  return;
}
