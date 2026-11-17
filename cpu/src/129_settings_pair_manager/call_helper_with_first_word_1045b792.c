/* @k10d call_helper_with_first_word_1045b792 @ 0x1045b792
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies the first word of param_1, passes it to dereference_first_pointer_1045ba02, and
 *   forwards the result to unlink_and_copy_pointer.
 * summary:
 *   The function reads the first 32-bit word from the pointer in param_1 and stores it on
 *   the stack. It calls dereference_first_pointer_1045ba02 with that word, dereferences the
 *   returned pointer to get a second word, and then calls unlink_and_copy_pointer with a
 *   stack address, the original param_1, and the second word. No camera-specific behavior
 *   is evident from the pseudocode or unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_first_word_1045b792(uint32_t *param_1)

{
  uint32_t *puVar1;
  uintptr_t sp;
  uint32_t auStack_1c [2];
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  auStack_1c[0] = *param_1;
  uStack_c = auStack_1c[0];
  puVar1 = (uint32_t *)dereference_first_pointer_1045ba02(auStack_1c);
  uStack_14 = *puVar1;
  unlink_and_copy_pointer(&uStack_10,param_1,&uStack_14);
  return;
}
