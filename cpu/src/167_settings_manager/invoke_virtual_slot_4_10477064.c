/* @k10d invoke_virtual_slot_4_10477064 @ 0x10477064
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 4 of an object and returns true if the result is not -1.
 * summary:
 *   The function performs a Cfront-style virtual call on the object pointed to by param_1,
 *   specifically invoking slot 4 (offset 0x24 in the vtable). It preserves the value of
 *   param_1[2] across the call by saving and restoring it, which suggests the callee may
 *   modify that field. The return value is a boolean indicating whether the virtual method
 *   returned a value other than -1. No specific camera subsystem or hardware interaction is
 *   evident from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_slot_4_10477064(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  iVar1 = (**(code **)(*param_1 + 0x24))((int)*(short *)(*param_1 + 0x20) + (int)param_1);
  param_1[2] = iVar2;
  return iVar1 != -1;
}
