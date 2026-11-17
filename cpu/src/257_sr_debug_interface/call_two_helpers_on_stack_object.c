/* @k10d call_two_helpers_on_stack_object @ 0x104f343e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, passes it to two helper functions, then deletes it.
 * summary:
 *   Allocates a 16-byte stack object via cls_105a705c_new. Calls copy_nine_bytes_to_buffer
 *   with a value from param_1+8 and the stack object. Calls an unknown function at
 *   0x10460cf2 with the stack object and param_2. Finally destroys the stack object via
 *   cls_105a705c_delete. The specific roles of the helpers are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_stack_object(int param_1,void *param_2)

{
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a705c_new((void *)auStack_18);
  copy_nine_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  (*(code *)0x10460cf2/*ROM*/)(auStack_18,param_2);
  cls_105a705c_delete((void *)auStack_18,2);
  return;
}
