/* @k10d clear_settings_if_flag_set @ 0x104bad7c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 223_menu_display_context (unit names are model-proposed)
 * purpose:
 *   Clears two settings (at indices 0x105b9074 and 0x105b9084) if setting 0x60 is non-zero.
 * summary:
 *   The function checks if setting 0x60 is non-zero via setting_get. If true, it reads two
 *   values from an array at param_3 and writes them to the settings block using
 *   setting_set. The specific meaning of setting 0x60 and the target settings is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_settings_if_flag_set(uint32_t param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = setting_get(param_2,0x60);
  if (iVar1 != 0) {
    setting_set(param_2,*(uint32_t *)(param_3 * 4 + 0x105b9074/*ROM*/),0);
    setting_set(param_2,*(uint32_t *)(param_3 * 4 + 0x105b9084/*ROM*/),0);
  }
  return;
}
