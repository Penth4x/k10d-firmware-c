/* @k10d query_class_state_value_104aa7c2 @ 0x104aa7c2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Instantiates a temporary cls_105a5d5c object, initializes it with a field from param_1,
 *   and returns the result of its virtual slot 2 call clamped to 0-4.
 * summary:
 *   The function allocates a cls_105a5d5c object on the stack and calls copy_seven_bytes to
 *   initialize it using the value at offset 0xc of param_1. It then invokes virtual method
 *   slot 2 (extract_field_by_index_1045d346) with an argument of 2. The return value is
 *   normalized to a range of 0 to 4, where 0 indicates an out-of-range result. The object
 *   is destroyed before returning the normalized value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_class_state_value_104aa7c2(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105a5d5c acStack_14 [3];
  
  cls_105a5d5c_new(acStack_14);
  copy_seven_bytes(acStack_14,*(int *)(param_1 + 0xc));
  iVar1 = extract_field_by_index_1045d346(acStack_14,2);
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  else if (iVar1 == 2) {
    uVar2 = 2;
  }
  else if (iVar1 == 3) {
    uVar2 = 3;
  }
  else if (iVar1 == 4) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  cls_105a5d5c_delete(acStack_14,2);
  return uVar2;
}
