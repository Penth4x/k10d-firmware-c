/* @k10d invoke_virtual_slot_and_clear_fields_104a2a24 @ 0x104a2a24
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 2 on an object pointer stored at offset 0x11c of param_1, then
 *   zeroes param_1 fields 1 through 5.
 * summary:
 *   The function reads an object pointer from param_1[0]. If non-null, it performs a
 *   Cfront-style virtual call to slot 2 (offset 0x14) of the vtable at that object, passing
 *   a this-adjusted pointer. It then unconditionally clears the next five integer fields of
 *   param_1. No other callees or MMIO operations are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_and_clear_fields_104a2a24(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x11c) + 0x14))
              (*(short *)(*(int *)(iVar1 + 0x11c) + 0x10) + iVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}
