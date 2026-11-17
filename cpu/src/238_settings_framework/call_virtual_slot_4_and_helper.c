/* @k10d call_virtual_slot_4_and_helper @ 0x104cec6a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 238_settings_framework (unit names are model-proposed)
 * purpose:
 *   Invokes virtual slot 4 on an object from get_or_create_singleton_object_104cfcea, then
 *   calls kernel_diag_taskstack with a derived pointer.
 * summary:
 *   The function retrieves an object pointer via get_or_create_singleton_object_104cfcea
 *   and performs a virtual call to slot 4 (offset 0x2c) using the Cfront idiom. It then
 *   calls kernel_diag_taskstack with an argument derived from param_1 (specifically
 *   *(param_1 + 4) + 8). The specific roles of the callees and the virtual method are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_virtual_slot_4_and_helper(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)get_or_create_singleton_object_104cfcea();
  (**(code **)(*piVar1 + 0x2c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x28));
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 8));
  return;
}
