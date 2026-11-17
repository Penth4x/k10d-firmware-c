/* @k10d get_setting_delay_ms_104f1820 @ 0x104f1820
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Maps a 0-3 setting value to a millisecond delay of 0, 3000, 10000, or 30000.
 * summary:
 *   Reads setting id 0x97 from the object at param_1+0xc via setting_get. Returns 0 for
 *   values 0 or >=4, 3000 for 1, 10000 for 2, and 30000 for 3. The specific camera
 *   subsystem for setting 0x97 is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_delay_ms_104f1820(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = setting_get(*(int *)(param_1 + 0xc),0x97);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 3000;
  }
  else if (iVar1 == 2) {
    uVar2 = 10000;
  }
  else if (iVar1 == 3) {
    uVar2 = 30000;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
