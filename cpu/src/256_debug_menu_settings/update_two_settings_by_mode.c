/* @k10d update_two_settings_by_mode @ 0x104f1620
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Writes two setting entries (indices 3/2 or 299/0x12a) based on a mode flag, optionally
 *   transforming values via helpers.
 * summary:
 *   Checks a mode/state via check_object_property_43(param_1). If zero, it writes param_2
 *   (or map_index_to_code_104f1714 result if param_3==0) to setting index 3, and param_2
 *   (or map_index_to_offset_104f1742 result if param_3==1) to setting index 2. If non-zero,
 *   it repeats the logic but writes to indices 299 and 0x12a. Finally, it calls
 *   process_event_with_lock_104b9428 with a pointer from param_1+0x20 and param_2. The
 *   specific camera subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_two_settings_by_mode(int param_1,uint32_t param_2,int param_3)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    uVar2 = param_2;
    if (param_3 == 0) {
      uVar2 = map_index_to_code_104f1714(param_1,param_2);
    }
    setting_set(*(int *)(param_1 + 0xc),3,uVar2);
    uVar2 = param_2;
    if (param_3 == 1) {
      uVar2 = map_index_to_offset_104f1742(param_1,param_2);
    }
    setting_set(*(int *)(param_1 + 0xc),2,uVar2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      uVar2 = param_2;
      if (param_3 == 0) {
        uVar2 = map_index_to_code_104f1714(param_1,param_2);
      }
      setting_set(*(int *)(param_1 + 0xc),299,uVar2);
      uVar2 = param_2;
      if (param_3 == 1) {
        uVar2 = map_index_to_offset_104f1742(param_1,param_2);
      }
      setting_set(*(int *)(param_1 + 0xc),0x12a,uVar2);
    }
  }
  process_event_with_lock_104b9428(*(uint32_t *)(param_1 + 0x20),param_2);
  return;
}
