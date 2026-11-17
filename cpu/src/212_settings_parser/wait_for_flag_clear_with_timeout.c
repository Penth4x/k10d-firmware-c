/* @k10d wait_for_flag_clear_with_timeout @ 0x104ac788
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 212_settings_parser (unit names are model-proposed)
 * purpose:
 *   Sets a state field to 4, calls a helper on a sub-object, then polls a flag until it
 *   clears or 100 iterations pass.
 * summary:
 *   The function writes the constant 4 to offset 0x34 of the object passed in param_1. It
 *   retrieves a pointer from offset 0x18 and calls merge_masked_word_fields with that
 *   pointer and its 7th element as arguments. It then checks if the first word of the sub-
 *   object ANDed with the 7th element is non-zero. If so, it enters a loop calling
 *   check_kernel_call_success_10459fea(1) up to 101 times until the condition becomes false
 *   or the counter exceeds 100.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_clear_with_timeout(int param_1)

{
  uint uVar1;
  int iVar2;
  
  *(uint32_t *)(param_1 + 0x34) = 4;
  uVar1 = (*(uint32_t **)(param_1 + 0x18))[7];
  merge_masked_word_fields(*(uint32_t **)(param_1 + 0x18),uVar1,uVar1);
  if ((*(uint *)**(uint32_t **)(param_1 + 0x18) & (*(uint32_t **)(param_1 + 0x18))[7]) != 0) {
    iVar2 = 0;
    do {
      check_kernel_call_success_10459fea();
      if (100 < iVar2) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while ((*(uint *)**(uint32_t **)(param_1 + 0x18) & (*(uint32_t **)(param_1 + 0x18))[7]) !=
             0);
  }
  return;
}
