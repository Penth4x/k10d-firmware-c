/* @k10d check_class_method_result @ 0x104f2bc2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 257_sr_debug_interface (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on a temporary object and returns whether its result equals 1.
 * summary:
 *   Constructs a temporary cls_105a6b04 object on the stack, passes the value at param_1+8
 *   to copy_twelve_bytes_to_buffer, then calls virtual slot 2
 *   (extract_field_from_param_table) with argument 7. The temporary object is destroyed,
 *   and the function returns true if the virtual call returned 1. The specific subsystem
 *   role of the class or the meaning of argument 7 is not determinable from the provided
 *   information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_class_method_result(int param_1)

{
  int iVar1;
  uintptr_t sp;
  cls_105a6b04 acStack_18 [4];
  
  cls_105a6b04_new(acStack_18);
  copy_twelve_bytes_to_buffer(*(int *)(param_1 + 8),acStack_18);
  iVar1 = extract_field_from_param_table(acStack_18,7);
  cls_105a6b04_delete(acStack_18,2);
  return iVar1 == 1;
}
