/* @k10d update_setting_and_persist @ 0x103e6fce
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a new value into a struct field and conditionally persists it via setting_set.
 * summary:
 *   Writes param_3 to offset 0x14 of the object pointed to by param_1. If param_3 is 0x11
 *   or 0xe, or if it is 0, 1, 3, or 7 and param_2 matches 0x185001c, it calls setting_set
 *   to save the byte at offset 0x20 to setting ID 0x73. For the latter case, it also sets
 *   the byte at offset 0x22 to 0x8c and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int update_setting_and_persist(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x14) = param_3;
  if ((param_3 == 0x11) || (param_3 == 0xe)) {
    if (param_2 == 0x185001c) {
      setting_set(*(int *)(param_1 + 8),0x73,(uint)*(byte *)(param_1 + 0x20));
    }
  }
  else if (((((param_3 == 7) || (param_3 == 0)) || (param_3 == 1)) || (param_3 == 3)) &&
          (param_2 == 0x185001c)) {
    setting_set(*(int *)(param_1 + 8),0x73,(uint)*(byte *)(param_1 + 0x20));
    *(uint8_t *)(param_1 + 0x22) = 0x8c;
    param_1 = 0;
  }
  return param_1;
}
