/* @k10d check_and_clear_flag @ 0x103e2b80
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 082_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Calls an unknown init function, compares a value derived from param_1 against a global,
 *   and conditionally clears a flag.
 * summary:
 *   The function first calls update_state_and_notify with no arguments. It then calls
 *   get_setting_by_index with param_1 and 0x10, comparing the result to the global
 *   bRam10596db8. If they differ, it calls apply_setting_from_table with param_1, 0xb, and
 *   0. The specific roles of the callees and the global are unknown, so the operation is
 *   described mechanically as a conditional flag clear based on a value comparison.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_clear_flag(cls_10596dc4 *param_1, uint32_t param_2)
{
  uint uVar1;
  
  update_state_and_notify((uint32_t *)(uint32_t)param_1,(uint32_t)param_2);
  uVar1 = get_setting_by_index((int)param_1,0x10);
  if (uVar1 != bRam10596db8) {
    apply_setting_from_table(param_1,0xb,0);
  }
  return;
}
