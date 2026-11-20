/* @k10d check_and_update_timer_state @ 0x104ac522
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates flag bits in two sub-objects and updates a state field based on a time delta
 *   comparison.
 * summary:
 *   The function reads pointers at offsets 0x18 and 0x1c of the object, treating them as
 *   arrays of flags. It checks specific bitmasks to determine if a condition is met. If the
 *   primary condition fails but a secondary one holds, it calls merge_masked_word_fields to
 *   clear/set flags and reset_and_flag_object_state. Otherwise, it calculates a difference
 *   from a structure at offset 0x24, compares it to a value at offset 0x28, and calls
 *   read_bytes_from_buffer with the result. It sets the field at offset 0x34 to 2 in
 *   several branches and returns a boolean indicating if the time delta was within the
 *   limit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_and_update_timer_state(cls_105b72e0 *param_1)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_10;
  
  puVar2 = (uint32_t *)param_1->field_0x1c;
  bVar3 = false;
  puVar1 = (uint32_t *)param_1->field_0x18;
  uVar4 = puVar1[0x11];
  if ((*(uint *)*puVar2 & puVar2[8]) == 0 || (*(uint *)*puVar1 & puVar1[0xe]) != 0) {
    if ((param_1->field_0x20 != 0) &&
       ((*(uint *)*puVar2 & puVar2[0xb]) != 0 && (*(uint *)*puVar1 & uVar4) == 0)) {
      merge_masked_word_fields(puVar1,uVar4,uVar4);
      merge_masked_word_fields((uint32_t *)param_1->field_0x1c,0,((uint32_t *)param_1->field_0x1c)[0xb]);
      reset_and_flag_object_state((uint32_t *)(param_1->field_0x20));
      bVar3 = true;
      param_1->field_0x34 = 2;
    }
  }
  else {
    merge_masked_word_fields(puVar2,0,puVar2[8]);
    uVar4 = *(int *)(param_1->field_0x24 + 0xc) - *(int *)(param_1->field_0x24 + 8);
    if (uVar4 == 0) {
      uVar4 = ((uint32_t *)param_1->field_0x18)[0xe];
      merge_masked_word_fields((uint32_t *)param_1->field_0x18,uVar4,uVar4);
      param_1->field_0x34 = 2;
    }
    else {
      uStack_10 = param_1->field_0x28;
      bVar3 = uVar4 <= uStack_10;
      if (bVar3) {
        uVar5 = ((uint32_t *)param_1->field_0x18)[0xe];
        merge_masked_word_fields((uint32_t *)param_1->field_0x18,uVar5,uVar5);
        param_1->field_0x34 = 2;
        uStack_10 = uVar4;
      }
      read_bytes_from_buffer((int *)(param_1->field_0x24),(uint32_t *)(param_1->field_0x10),(uint)(uStack_10));
      uVar4 = ((uint32_t *)param_1->field_0x1c)[6];
      merge_masked_word_fields((uint32_t *)param_1->field_0x1c,uVar4,uVar4);
    }
  }
  return bVar3;
}
