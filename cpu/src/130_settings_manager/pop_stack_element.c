/* @k10d pop_stack_element @ 0x1045cc4a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Removes the top element from a stack-like structure and returns the previous top
 *   pointer.
 * summary:
 *   The function checks if the stack (param_1) is non-empty by comparing the top pointer
 *   (param_1[1]) against the base pointer (*param_1). If non-empty, it calls
 *   copy_word_array_1045cd06 to handle the element being removed (likely deallocation or
 *   cleanup) and then decrements the top pointer. It calls zero_memory_range with the new
 *   top and the old top, possibly for logging or state update. Finally, it returns the
 *   value of param_2, which appears to be the element being popped or a related pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int pop_stack_element(int *param_1,void *param_2)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  
  puVar2 = (uint32_t *)param_1[1];
  if ((int)(((uint)((int)puVar2 - *param_1 >> 1) >> 0x1e) + ((int)puVar2 - *param_1)) >> 2 != 0) {
    if ((uint32_t *)((int)param_2 + 4) != puVar2) {
      copy_word_array_1045cd06(param_1,(uint32_t *)((int)param_2 + 4),puVar2,param_2);
    }
    puVar2 = (uint32_t *)param_1[1];
    puVar1 = puVar2 + -1;
    param_1[1] = (int)puVar1;
    zero_memory_range(param_1,puVar1,puVar2);
  }
  return (int)param_2;
}
