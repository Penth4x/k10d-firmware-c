/* @k10d get_setting_or_compute_value @ 0x104f152c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns a setting value or a computed result based on a mode flag and object state.
 * summary:
 *   If param_2 is zero, it constructs a temporary object, calls a helper with a field from
 *   param_1, invokes virtual slot 2, and passes the result to
 *   map_mode_code_to_index_1045b3e8. Otherwise, it checks the return value of
 *   check_object_property_43; if zero, it reads setting ID 1, otherwise it reads setting ID
 *   0x129 (if check_object_property_43 is non-zero again). The function returns the
 *   resulting value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_or_compute_value(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint32_t auStack_24 [7];
  
  uVar2 = 0;
  if (param_2 == 0) {
    cls_105a6d8c_new(auStack_24);
    copy_status_block_bytes(*(int *)(param_1 + 8),auStack_24);
    uVar1 = extract_field_from_struct_1045ff0e((int)auStack_24,7);
    uVar2 = map_mode_code_to_index_1045b3e8(*(uint32_t *)(param_1 + 0x44),uVar1 & 0xff,2);
    cls_105a6d8c_delete(auStack_24,2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 == 0) {
      uVar2 = setting_get(*(int *)(param_1 + 0xc),1);
    }
    else {
      uVar1 = check_object_property_43(param_1);
      if (uVar1 != 0) {
        uVar2 = setting_get(*(int *)(param_1 + 0xc),0x129);
      }
    }
  }
  return uVar2;
}
