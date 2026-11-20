/* @k10d evaluate_state_transition_flags @ 0x104ac132
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks bit flags in linked objects and updates state fields based on conditional logic.
 * summary:
 *   The function reads pointers from offsets 0x14, 0x18, 0x1c, and 0x20 of the input
 *   object. It performs bitwise AND operations on values pointed to by these pointers
 *   against specific offsets within the linked structures. Depending on the results, it
 *   calls merge_masked_word_fields with various parameters and updates fields at offsets
 *   0x24 and 0x34 of the input object. It returns 1 if a specific state transition occurs,
 *   otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ac1fc) overlaps instruction at (ram,0x104ac1fa)
    */

uint32_t evaluate_state_transition_flags(cls_105b7288 *param_1)

{
  uint32_t *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint32_t *puVar5;
  int iVar6;
  uint uVar7;
  uint32_t uVar8;
  int iVar9;
  
  puVar1 = (uint32_t *)param_1->field_0x1c;
  uVar8 = 0;
  puVar4 = (uint *)*puVar1;
  puVar5 = (uint32_t *)param_1->field_0x18;
  uVar7 = puVar5[0xe];
  if ((*puVar4 & puVar1[8]) == 0 || (*(uint *)*puVar5 & uVar7) != 0) {
    if ((param_1->field_0x20 != 0) && ((*puVar4 & puVar1[0xb]) != 0)) {
      merge_masked_word_fields(puVar1,0,puVar1[0xb]);
      puVar1 = (uint32_t *)param_1->field_0x18;
      if ((*(uint *)*puVar1 & puVar1[0x11]) == 0) {
        merge_masked_word_fields(puVar1,puVar1[0xd],puVar1[0xb] | puVar1[0xd]);
        uVar7 = ((uint32_t *)param_1->field_0x18)[0x11];
        merge_masked_word_fields((uint32_t *)param_1->field_0x18,uVar7,uVar7);
        merge_masked_word_fields((uint32_t *)param_1->field_0x1c,0,((uint32_t *)param_1->field_0x1c)[0xb]);
        uVar8 = 1;
        merge_masked_word_fields((uint32_t *)param_1->field_0x1c,0,((uint32_t *)param_1->field_0x1c)[7]);
        clear_and_set_flag_in_struct((uint32_t *)param_1->field_0x20);
        param_1->field_0x24 = 0;
        param_1->field_0x34 = 2;
      }
    }
  }
  else if ((*puVar4 & puVar1[6]) != 0) {
    puVar1 = (uint32_t *)param_1->field_0x14;
    uVar2 = (*(uint *)*puVar1 & puVar1[5]) >> (puVar1[6] & 0x1f);
    merge_masked_word_fields(puVar5,uVar7,uVar7);
    iVar6 = param_1->field_0x24;
    if (iVar6 == 0) {
      if (uVar2 == 0) {
        param_1->field_0x34 = 2;
        uVar8 = 1;
      }
    }
    else if ((uVar2 == 0) || ((iVar9 = *(int *)(iVar6 + 4), iVar3 = *(int *)(iVar6 + 0xc), iVar6 = append_bytes_to_dynamic_buffer((int *)(iVar6),(uint32_t *)(param_1->field_0x10),(uint)(uVar2)), iVar9 - iVar3 != iVar6 && ((uint)param_1->field_0x28 <= uVar2)))) {
      merge_masked_word_fields((uint32_t *)param_1->field_0x18,0,((uint32_t *)param_1->field_0x18)[0xe]);
    }
    else {
      param_1->field_0x24 = 0;
      param_1->field_0x34 = 2;
      uVar8 = 1;
    }
    uVar7 = ((uint32_t *)param_1->field_0x1c)[6];
    merge_masked_word_fields((uint32_t *)param_1->field_0x1c,uVar7,uVar7);
  }
  return uVar8;
}
