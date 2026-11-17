/* @k10d invoke_virtual_slot_15_1049b6f4 @ 0x1049b6f4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 15 of the object in param_2, passing a byte from param_1 as the
 *   argument.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointed to by param_2.
 *   It reads the vtable pointer from the object, accesses slot 15 (offset 0x3c), and
 *   applies the this-adjustment from offset 0x38. The argument passed is the byte at offset
 *   0xc of param_1. No other side effects or callees are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_15_1049b6f4(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x3c))
            ((int)*(short *)(*param_2 + 0x38) + (int)param_2,*(uint8_t *)(param_1 + 0xc));
  return;
}
