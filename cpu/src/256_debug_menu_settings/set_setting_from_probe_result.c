/* @k10d set_setting_from_probe_result @ 0x104f26d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads a value via check_object_property_43 twice and writes 0x32 or 0x15a into a
 *   settings field.
 * summary:
 *   Calls check_object_property_43(param_1) to obtain a status/value. If the first call
 *   returns 0, it sets the result to 0x32; otherwise it calls check_object_property_43
 *   again and, if that is non-zero, sets the result to 0x15a. Finally, it calls setting_set
 *   to store this computed value into the settings block at offset 0xc of param_1, using
 *   param_2 as the setting identifier.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_from_probe_result(int param_1,uint32_t param_2)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    uVar2 = 0x32;
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      uVar2 = 0x15a;
    }
  }
  setting_set(*(int *)(param_1 + 0xc),uVar2,param_2);
  return;
}
