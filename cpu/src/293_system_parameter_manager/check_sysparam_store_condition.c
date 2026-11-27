/* @k10d check_sysparam_store_condition @ 0x10534d84
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates a condition on a nested object and updates the parent's state flags and
 *   pointer.
 * summary:
 *   This function is virtual slot 3 of cls_106210ec. It reads a pointer from offset 0x1c of
 *   the object and checks two bitmasks. If the condition is met, it calls
 *   merge_masked_word_fields, then reads another pointer from offset 0x14 and extracts a
 *   shifted value. Depending on the value and the state at offset 0x2c, it either calls
 *   copy_aligned_word_block or append_bytes_to_dynamic_buffer, and potentially clears the
 *   pointer at 0x2c and sets the flag at 0x3c to 2. It returns 1 if the state was updated,
 *   0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10534e1e) overlaps instruction at (ram,0x10534e1c)
    */

uint32_t check_sysparam_store_condition(cls_106210ec *param_1, uint32_t param_2, uint32_t param_3)
{
  uint uVar1;
  int iVar2;
  uint32_t *puVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  
  puVar3 = (uint32_t *)param_1->field_0x1c;
  uVar5 = 0;
  if ((*(uint *)*puVar3 & puVar3[8]) != 0 && (*(uint *)*puVar3 & puVar3[6]) != 0) {
    merge_masked_word_fields(puVar3,0,puVar3[8]);
    puVar3 = (uint32_t *)param_1->field_0x14;
    uVar1 = (*(uint *)*puVar3 & puVar3[5]) >> (puVar3[6] & 0x1f);
    if (uVar1 == 0) {
      if ((param_1->field_0x2c != 0) && (*(int *)(param_1->field_0x2c + 0xc) != 0)) {
        param_1->field_0x2c = 0;
        uVar5 = 1;
        param_1->field_0x3c = 2;
      }
    }
    else {
      iVar4 = param_1->field_0x2c;
      if (iVar4 == 0) {
        param_1->field_0x28 = uVar1;
        copy_aligned_word_block((uint32_t *)(param_1->field_0x20),(uint32_t *)(param_1->field_0x10), (uint)((uint32_t)param_3));
        return 0;
      }
      iVar6 = *(int *)(iVar4 + 4);
      iVar2 = *(int *)(iVar4 + 0xc);
      iVar4 = append_bytes_to_dynamic_buffer((int *)(iVar4),(uint32_t *)(param_1->field_0x10),(uint)(uVar1));
      if ((iVar6 - iVar2 == iVar4) || (uVar1 < (uint)param_1->field_0x30)) {
        param_1->field_0x2c = 0;
        uVar5 = 1;
        param_1->field_0x3c = 2;
      }
    }
    uVar1 = ((uint32_t *)param_1->field_0x1c)[6];
    merge_masked_word_fields((uint32_t *)param_1->field_0x1c,uVar1,uVar1);
  }
  return uVar5;
}
