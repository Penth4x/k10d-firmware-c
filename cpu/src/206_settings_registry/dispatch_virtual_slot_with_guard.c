/* @k10d dispatch_virtual_slot_with_guard @ 0x104a455c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object, then conditionally calls another virtual method
 *   based on a helper's return value.
 * summary:
 *   The function first invokes virtual slot 7 (offset 0x3c) on the object pointed to by
 *   param_1+4. It then calls an unknown function at 0x104a29d0 with param_1 as an argument.
 *   If that function returns non-zero, it invokes virtual slot 8 (offset 0x44) on the same
 *   object and returns its result; otherwise, it returns 0. No camera-specific subsystems
 *   are identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_slot_with_guard(cls_105b6554 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  (((vtbl_entry*)(param_1->field_0x4))[7].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[7].adj);
  iVar1 = (*(code *)0x104a29d0/*ROM*/)(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (((vtbl_entry*)(param_1->field_0x4))[8].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x4))[8].adj);
  }
  return uVar2;
}
