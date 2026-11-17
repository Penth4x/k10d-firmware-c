/* @k10d construct_and_call_with_param_104f33b0 @ 0x104f33b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object, initializes it from param_1, and invokes a function
 *   pointer with param_2.
 * summary:
 *   Allocates a stack-based object via cls_105a6b04_new. Calls copy_twelve_bytes_to_buffer
 *   with a field from param_1 to initialize the object. Then calls the function pointer at
 *   0x1045f538 passing the object and param_2. Finally destroys the object with
 *   cls_105a6b04_delete. The specific subsystem is not identifiable from the provided
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void construct_and_call_with_param_104f33b0(int param_1,void *param_2)

{
  uintptr_t sp;
  uint8_t auStack_18 [16];
  
  cls_105a6b04_new((void *)auStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),auStack_18);
  (*(code *)0x1045f538/*ROM*/)(auStack_18,param_2);
  cls_105a6b04_delete((void *)auStack_18,2);
  return;
}
