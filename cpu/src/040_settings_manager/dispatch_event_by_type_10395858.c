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

int dispatch_event_by_type_10395858(int *param_1,int *param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_c [4];
  
  param_1[0xe] = (int)param_1;
  iVar1 = *param_2;
  if (iVar1 == 3) {
    if (param_2[1] == 0xc) {
      store_result_at_offset_0x38(param_1);
    }
  }
  else if (iVar1 == 7) {
    iVar1 = get_or_create_singleton_object_10396af8();
    param_1[0xe] = iVar1;
  }
  else if (iVar1 == 8) {
    iVar1 = (**(code **)(*param_1 + 0x6c))
                      ((int)*(short *)(*param_1 + 0x68) + (int)param_1,auStack_c,0);
    param_1[0xe] = iVar1;
  }
  if (*(char *)((int)param_1 + 0x3d) != '\0') {
    *(bool *)((int)param_1 + 0x3e) = *(char *)((int)param_1 + 0x3e) == '\0';
    iVar1 = get_value_from_object();
    iVar1 = add_offset_to_pointer_104df392(iVar1);
    toggle_object_state_by_flag(iVar1,*(uint8_t *)((int)param_1 + 0x3e));
    forward_param_to_helper_10394ad8(param_1,500);
  }
  return param_1[0xe];
}
