/* @k10d apply_sysparam_override @ 0x10534e7e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Applies a system parameter override from a data buffer to the config struct, clearing
 *   the pending flag on success.
 * summary:
 *   If param_2 is zero, it calls merge_masked_word_fields on a member at offset 0x18.
 *   Otherwise, it sets a flag at 0x3c, stores param_3 at 0x2c, and if a pending value
 *   exists at 0x28, calls advance_buffer_pointer to process the override. If the result
 *   indicates completion (param_3[1] == param_3[3]), it clears the pending state and flag.
 *   It also checks a bit in a status word at 0x1c and calls merge_masked_word_fields if
 *   set. Returns a status code (1, 2, or 4).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t apply_sysparam_override(int param_1,int param_2,int *param_3)

{
  uint32_t *puVar1;
  uint uVar2;
  uint32_t uVar3;
  
  if (param_2 == 0) {
    uVar3 = 4;
    uVar2 = (*(uint32_t **)(param_1 + 0x18))[7];
    merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),uVar2,uVar2);
  }
  else {
    *(uint32_t *)(param_1 + 0x3c) = 1;
    *(int **)(param_1 + 0x2c) = param_3;
    uVar3 = 1;
    if ((*(int *)(param_1 + 0x28) != 0) && (param_3 != (int *)0x0)) {
      advance_buffer_pointer(param_3,*(uint32_t **)(param_1 + 0x20),*(int *)(param_1 + 0x28));
      *(uint32_t *)(param_1 + 0x28) = 0;
      if (param_3[1] == param_3[3]) {
        *(uint32_t *)(param_1 + 0x2c) = 0;
        uVar3 = 2;
        *(uint32_t *)(param_1 + 0x3c) = 0;
      }
      puVar1 = *(uint32_t **)(param_1 + 0x1c);
      uVar2 = puVar1[6];
      if ((*(uint *)*puVar1 & uVar2) != 0) {
        merge_masked_word_fields(puVar1,uVar2,uVar2);
      }
    }
  }
  return uVar3;
}
