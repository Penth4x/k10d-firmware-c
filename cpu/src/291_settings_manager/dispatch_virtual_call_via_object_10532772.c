/* @k10d dispatch_virtual_call_via_object_10532772 @ 0x10532772
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method pointer from an object structure and invokes it with a
 *   computed this-pointer and a transformed argument.
 * summary:
 *   The function dereferences a pointer at offset 0x14 of param_1, then accesses offset
 *   0x1c of that object. It reads a short value at offset 0x40 of the resulting sub-object
 *   and calls an external function at 0x104a8c94 with param_2. Finally, it performs a
 *   virtual call through the function pointer at offset 0x44 of the sub-object, passing the
 *   adjusted this-pointer (piVar3 + sVar1) and the return value from the external call.
 *   This follows the Cfront virtual call idiom where the short value is a this-adjustment.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_via_object_10532772(int param_1,uint32_t param_2)

{
  short sVar1;
  uint32_t uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)(*(int *)(param_1 + 0x14) + 0x1c);
  iVar4 = *piVar3;
  sVar1 = *(short *)(iVar4 + 0x40);
  uVar2 = (*(code *)0x104a8c94/*ROM*/)(param_2);
  (((vtbl_entry*)(iVar4))[8].fn)((int)piVar3 + (int)sVar1,uVar2);
  return;
}
