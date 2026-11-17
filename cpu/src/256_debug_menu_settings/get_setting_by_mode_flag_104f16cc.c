/* @k10d get_setting_by_mode_flag_104f16cc @ 0x104f16cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Selects a setting ID based on a flag from check_object_property_43 and param_2, then
 *   reads that setting via setting_get.
 * summary:
 *   The function calls check_object_property_43(param_1) to obtain a status/flag value. If
 *   the flag is 0, it selects setting ID 3 (if param_2==1) or 2 (otherwise). If the flag is
 *   non-zero, it re-checks the flag and selects ID 299 (0x12b) or 298 (0x12a) based on
 *   param_2. Finally, it calls setting_get with the object pointer at param_1+0xc and the
 *   selected ID, returning the result. The specific camera subsystem is not identifiable
 *   from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_flag_104f16cc(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    if (param_2 == 1) {
      iVar3 = 3;
    }
    else {
      iVar3 = 2;
    }
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      if (param_2 == 1) {
        iVar3 = 299;
      }
      else {
        iVar3 = 0x12a;
      }
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
