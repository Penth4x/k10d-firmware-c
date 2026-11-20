/* @k10d dispatch_event_by_type_10395858 @ 0x10395858
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches an event based on type codes in param_2 and updates a state field in
 *   param_1.
 * summary:
 *   The function branches on the first integer of param_2. For type 3 with sub-type 0xc, it
 *   calls store_result_at_offset_0x38. For type 7, it calls
 *   get_or_create_singleton_object_10396af8 and stores the result in param_1[0xe]. For type
 *   8, it performs a virtual call via the vtable at offset 0x6c. If a flag at offset 0x3d
 *   is set, it toggles a boolean at 0x3e, calls a chain of helpers (get_value_from_object,
 *   add_offset_to_pointer_104df392, toggle_object_state_by_flag), and calls
 *   forward_param_to_helper_10394ad8 with a timeout of 500. It returns the value stored in
 *   param_1[0xe].
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_10395858(cls_10562d94 *param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  param_1->field_0x38 = (uint32_t)(param_1);
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0xc) {
      store_result_at_offset_0x38(param_1);
    }
  }
  else if (iVar1 == 7) {
    uVar2 = get_or_create_singleton_object_10396af8();
    param_1->field_0x38 = uVar2;
  }
  else if (iVar1 == 8) {
    uVar2 = (((vtbl_entry*)(param_1->field_0x0))[13].fn)
                      ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[13].adj,
                       auStack_c,0);
    param_1->field_0x38 = uVar2;
  }
  if (param_1->field_0x3d != '\0') {
    param_1->field_0x3e = param_1->field_0x3e == '\0';
    iVar1 = get_value_from_object();
    iVar1 = add_offset_to_pointer_104df392(iVar1);
    toggle_object_state_by_flag(iVar1,param_1->field_0x3e);
    forward_param_to_helper_10394ad8(param_1,500);
  }
  return param_1->field_0x38;
}
