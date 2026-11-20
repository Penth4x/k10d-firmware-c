/* @k10d construct_and_call_with_param_104f3368 @ 0x104f3368
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object, initializes it from param_1, calls a function with it
 *   and param_2, then destroys it.
 * summary:
 *   The function allocates a stack-based object using cls_105a6abc_new. It passes the
 *   object and a value from param_1+8 to copy_buffer_with_lock_1045e22a, likely for
 *   initialization. It then calls an unknown function at 0x1045f2da with the object and
 *   param_2. Finally, it cleans up the object with cls_105a6abc_delete. The specific camera
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void construct_and_call_with_param_104f3368(int param_1,void *param_2)

{
  uintptr_t sp;
  cls_105a6abc acStack_1c [5];
  
  cls_105a6abc_new(acStack_1c);
  copy_buffer_with_lock_1045e22a(*(int *)(param_1 + 8),acStack_1c);
  (*(code *)0x1045f2da/*ROM*/)(acStack_1c,param_2);
  cls_105a6abc_delete(acStack_1c,2);
  return;
}
