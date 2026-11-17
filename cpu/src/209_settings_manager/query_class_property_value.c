/* @k10d query_class_property_value @ 0x104aa758
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Instantiates a temporary object, sets a property from param_1, and queries its state
 *   via virtual slot 2.
 * summary:
 *   The function allocates a stack instance of cls_105a5d5c, calls copy_seven_bytes to
 *   initialize it with the value at param_1+0xc, and then invokes virtual method slot 2
 *   (extract_field_by_index_1045d346) with argument 3. The return value is clamped to the
 *   range 0-4, mapping any other result to 0. The object is destroyed before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_class_property_value(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  cls_105a5d5c_new((void *)auStack_14);
  copy_seven_bytes(auStack_14,*(int *)(param_1 + 0xc));
  iVar1 = extract_field_by_index_1045d346(auStack_14,3);
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
  cls_105a5d5c_delete((void *)auStack_14,2);
  return uVar2;
}
