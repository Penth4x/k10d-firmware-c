/* @k10d write_three_values_to_target_104ebeaa @ 0x104ebeaa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_values_to_target_104ebeaa(cls_105c29b0 *param_1,int param_2,int *param_3)

{
  (*(code *)0x1044e9a6/*ROM*/)(param_1->field_0x8,*(uint8_t *)(*param_3 + param_2));
  (*(code *)0x1044e9f2/*ROM*/)(param_1->field_0x8,*(uint8_t *)(param_3[1] + param_2));
  (*(code *)0x1044ea3e/*ROM*/)(param_1->field_0x8,*(uint32_t *)(param_3[2] + param_2 * 4));
  return;
}
