/* @k10d set_select_flag @ 0x10488f54
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed set_object_flag_at_0x4c)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the byte at offset 0x4c of the object pointed to by param_1 to 1.
 * summary:
 *   The function writes the value 1 to the memory location at param_1 + 0x4c. It is called
 *   as virtual method slot 2 of class cls_105b34ec. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_select_flag(int param_1)

{
  *(uint8_t *)(param_1 + 0x4c) = 1;
  return;
}
