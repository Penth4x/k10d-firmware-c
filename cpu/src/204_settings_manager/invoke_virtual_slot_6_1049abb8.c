/* @k10d invoke_virtual_slot_6_1049abb8 @ 0x1049abb8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 6 of an object and stores the result in a linked list node.
 * summary:
 *   The function retrieves an object pointer from a structure at param_1+0x24, then invokes
 *   virtual slot 6 (offset 0x34) on that object. The return value is stored in a pointer
 *   field (piVar1) and a status flag at param_1+0x40 is set to 1 if the result is 0, or 0
 *   otherwise. The caller is identified as virtual method slot 6 of class cls_105b573c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_6_1049abb8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint32_t *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = *(uint32_t **)(*(int *)(param_1 + 0x54) + 0xc);
  piVar1 = (int *)puVar3[1];
  iVar2 = *(int *)(*(int *)*puVar3 + 4);
  iVar5 = iVar2 * 4;
  **(int **)(iVar5 + param_1 + 0x24) = param_1 + 4;
  iVar5 = *(int *)(iVar5 + param_1 + 0x24);
  iVar4 = *(int *)(iVar5 + 0x10);
  iVar5 = (**(code **)(iVar4 + 0x34))(iVar5 + *(short *)(iVar4 + 0x30));
  *piVar1 = iVar5;
  if (iVar5 == 0) {
    *(uint32_t *)(param_1 + 0x40) = 1;
  }
  else {
    *(int *)*piVar1 = iVar2;
    *(uint32_t *)(param_1 + 0x40) = 0;
  }
  return;
}
