/* @k10d check_and_dispatch_virtual_call @ 0x10369700
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Checks a condition, clears a flag, and invokes a virtual method if the condition is
 *   met.
 * summary:
 *   The function calls increment_byte_and_notify to determine a boolean state. If the state
 *   is non-zero, it clears a byte at offset 0x2c1 in the object, calls
 *   init_object_state_from_ram_flags, executes a virtual call via slot at offset 0x44, and
 *   calls request_ui_sync_code_4. It returns the result of the initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_dispatch_virtual_call(int *param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = increment_byte_and_notify((uint32_t)param_1, (uint32_t)param_x1);
  if (iVar1 != 0) {
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    init_object_state_from_ram_flags(param_1);
    (((vtbl_entry*)(*param_1))[8].fn)((int)((vtbl_entry*)(*param_1))[8].adj + (int)param_1);
    request_ui_sync_code_4(param_1 + 5);
  }
  return iVar1 != 0;
}
