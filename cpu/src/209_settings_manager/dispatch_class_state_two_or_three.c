/* @k10d dispatch_class_state_two_or_three @ 0x104aa6f6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a cls_105a5d5c object, queries its state, and dispatches to a handler for
 *   state 2 or 3.
 * summary:
 *   The function allocates a cls_105a5d5c instance on the stack and initializes it using a
 *   value from param_1+0xc. It calls virtual slot 2 (extract_field_by_index_1045d346) to
 *   retrieve a state code. If the code is 2, it calls query_class_property_value; if 3, it
 *   calls query_class_state_value_104aa7c2. The result of the dispatched handler is
 *   returned, and the object is destroyed before exit.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_class_state_two_or_three(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_14 [12];
  
  cls_105a5d5c_new((void *)auStack_14);
  copy_seven_bytes(auStack_14,*(int *)(param_1 + 0xc));
  iVar1 = extract_field_by_index_1045d346(auStack_14,0);
  uVar2 = 0;
  if (iVar1 == 2) {
    uVar2 = query_class_property_value(param_1);
  }
  else if (iVar1 == 3) {
    uVar2 = query_class_state_value_104aa7c2(param_1);
  }
  cls_105a5d5c_delete((void *)auStack_14,2);
  return uVar2;
}
