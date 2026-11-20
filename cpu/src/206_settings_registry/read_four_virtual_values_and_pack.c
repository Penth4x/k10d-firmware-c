/* @k10d read_four_virtual_values_and_pack @ 0x104a50b8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads four values from a virtual object via slot 2, packs them into a short, and passes
 *   the result to two helpers.
 * summary:
 *   The function dereferences a pointer at param_1+0x18 to get an object, then calls
 *   virtual slot 2 (offset 0x14) four times with arguments 0x14, 0x36, 1, and 8. It masks
 *   the first three results to bytes and the fourth to a short, storing the short on the
 *   stack. It then calls compute_exposure_value_from_table with a value from param_1+0x50
 *   and the four extracted values, and finally calls write_to_dynamic_array with param_2,
 *   0, and the return value of the first helper. The specific camera subsystem is not
 *   identifiable from the pseudocode or callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_four_virtual_values_and_pack(int param_1,int param_2)

{
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint16_t uVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_28 [4];
  
  puVar7 = auStack_28;
  uVar1 = *(uint32_t *)(param_1 + 0x50);
  iVar6 = **(int **)(param_1 + 0x18);
  uVar2 = (((vtbl_entry*)(iVar6))[2].fn)
                    ((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar6))[2].adj,0x14);
  iVar6 = **(int **)(param_1 + 0x18);
  uVar3 = (((vtbl_entry*)(iVar6))[2].fn)
                    ((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar6))[2].adj,0x36);
  iVar6 = **(int **)(param_1 + 0x18);
  uVar4 = (((vtbl_entry*)(iVar6))[2].fn)
                    ((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar6))[2].adj,1);
  iVar6 = **(int **)(param_1 + 0x18);
  uVar5 = (((vtbl_entry*)(iVar6))[2].fn)
                    ((int)*(int **)(param_1 + 0x18) + (int)((vtbl_entry*)(iVar6))[2].adj,8);
  *(uint16_t *)(puVar7 + 2) = uVar5;
  iVar6 = compute_exposure_value_from_table(uVar1,uVar2 & 0xff,uVar3 & 0xff,uVar4 & 0xff,*(short *)(puVar7 + 2));
  write_to_dynamic_array(param_2,0,iVar6);
  return;
}
