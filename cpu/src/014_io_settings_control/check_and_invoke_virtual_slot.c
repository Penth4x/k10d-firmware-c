/* @k10d check_and_invoke_virtual_slot @ 0x10369742
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Checks a condition via a helper, and if true, clears a flag, calls two helpers, and
 *   invokes virtual slot 8 of the object.
 * summary:
 *   The function calls decrement_byte_and_notify to get a status. If non-zero, it clears
 *   the byte at offset 0x2c1 of the object, calls init_object_state_from_ram_flags, invokes
 *   virtual slot 8 (offset 0x44) on the object, and calls request_ui_sync_code_4 with a
 *   pointer to the 5th word of the object. It returns the status from the initial check.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_invoke_virtual_slot(int *param_1, uint32_t param_x1)

{
  int iVar1;
  
  iVar1 = decrement_byte_and_notify(__frv_reg_unset(4), __frv_reg_unset(5));
  if (iVar1 != 0) {
    *(uint8_t *)((int)param_1 + 0x2c1) = 0;
    init_object_state_from_ram_flags(param_1);
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
    request_ui_sync_code_4(param_1 + 5);
  }
  return iVar1 != 0;
}
