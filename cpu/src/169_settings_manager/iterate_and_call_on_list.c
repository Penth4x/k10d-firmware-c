/* @k10d iterate_and_call_on_list @ 0x1047ddb4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a linked list stored in the object and calls a helper on each element.
 * summary:
 *   Reads the head pointer at offset 4 and the end sentinel at offset 8 of the object
 *   passed in param_1. If they differ, it loops calling heap_free_2 on the current
 *   element's value, then advances the pointer via pop_stack_element until reaching the
 *   sentinel. This is a standard virtual method (slot 4) that performs a per-element
 *   operation over an internal list.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_call_on_list(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != *(int **)(param_1 + 8)) {
    do {
      heap_free_2(*piVar1);
      piVar1 = (int *)pop_stack_element((int *)(param_1 + 4),piVar1);
    } while (piVar1 != *(int **)(param_1 + 8));
  }
  return;
}
