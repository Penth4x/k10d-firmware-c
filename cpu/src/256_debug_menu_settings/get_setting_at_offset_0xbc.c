/* @k10d get_setting_at_offset_0xbc @ 0x104f1d12
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads the setting at index 0xbc from the working copy pointed to by param_1+0xc.
 * summary:
 *   Dereferences param_1+0xc to obtain a pointer to a settings structure, then calls
 *   setting_get with index 0xbc to fetch a single setting value. Returns that value in r4.
 *   The specific meaning of setting 0xbc is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_at_offset_0xbc(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = setting_get(*(int *)(param_1 + 0xc),0xbc);
  return uVar1;
}
