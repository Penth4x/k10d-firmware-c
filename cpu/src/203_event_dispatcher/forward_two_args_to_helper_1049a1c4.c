/* @k10d forward_two_args_to_helper_1049a1c4 @ 0x1049a1c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Stores param_2 on the stack and forwards both arguments to destroy_object_tree.
 * summary:
 *   The function takes a pointer and an integer, places the integer in a local stack
 *   variable, and calls destroy_object_tree with the pointer and the address of that local.
 *   It acts as a thin wrapper or thunk around destroy_object_tree. No other side effects or
 *   globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_two_args_to_helper_1049a1c4(void *param_1,int param_2)

{
  uintptr_t sp;
  int iStack_4;
  
  iStack_4 = param_2;
  destroy_object_tree(param_1,&iStack_4);
  return;
}
