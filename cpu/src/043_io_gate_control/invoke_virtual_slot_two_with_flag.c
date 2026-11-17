/* @k10d invoke_virtual_slot_two_with_flag @ 0x1039f402
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 043_io_gate_control (unit names are model-proposed)
 * purpose:
 *   Reads a flag from an object, selects one of two constants, and calls virtual slot 2 on
 *   a sub-object.
 * summary:
 *   The function calls check_object_property_43 on the value at offset 0xbc of param_1.
 *   Based on the result, it selects either _DAT_105bb5a8 or _DAT_105bb5b8. It then
 *   retrieves a pointer from offset 0x2c of param_1 and performs a virtual call to slot 2
 *   (offset 0x1c) with a this-adjustment from offset 0x18, passing the constant 0x130066
 *   and the selected data value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void invoke_virtual_slot_two_with_flag(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  uVar1 = check_object_property_43(*(int *)(param_1 + 0xbc));
  uVar2 = _DAT_105bb5a8/*ROM*/;
  if (uVar1 != 0) {
    uVar2 = _DAT_105bb5b8/*ROM*/;
  }
  iVar3 = **(int **)(param_1 + 0x2c);
  (**(code **)(iVar3 + 0x1c))
            ((int)*(int **)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x18),0x130066,uVar2);
  return;
}
