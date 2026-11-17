/* @k10d read_setting_from_object @ 0x104d1b9c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * purpose:
 *   Refreshes the settings working copy if needed and reads a specific setting value into
 *   an output pointer.
 * summary:
 *   The function takes an object pointer, a setting ID, and an output pointer. It calls an
 *   unknown function on the object's field at offset 8 to determine if a refresh is
 *   required. If true, it calls settings_refresh_working_copy to update the local copy.
 *   Finally, it calls setting_get to retrieve the value for the given ID and stores it in
 *   the output parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_setting_from_object(int param_1,int param_2,uint32_t *param_3)

{
  bool bVar2;
  uint32_t uVar1;
  
  bVar2 = check_object_field_via_helper(*(void **)(param_1 + 8));
  if (bVar2) {
    settings_refresh_working_copy(*(void **)(param_1 + 8));
  }
  uVar1 = setting_get(*(int *)(param_1 + 8),param_2);
  *param_3 = uVar1;
  return 0;
}
