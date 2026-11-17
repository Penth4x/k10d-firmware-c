/* @k10d get_setting_delay_ms_104f1868 @ 0x104f1868
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Maps a setting value (id 0x73) to a delay in milliseconds (0, 1000, 3000, or 5000).
 * summary:
 *   Reads setting id 0x73 from the object at param_1+0xc via setting_get. Returns 0 for
 *   values 3 or unknown, 1000 for 0, 3000 for 1, and 5000 for 2. The caller
 *   process_mode_event_flags uses this to drive a timed mode/display state transition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_delay_ms_104f1868(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = setting_get(*(int *)(param_1 + 0xc),0x73);
  if (iVar1 == 3) {
    uVar2 = 0;
  }
  else if (iVar1 == 0) {
    uVar2 = 1000;
  }
  else if (iVar1 == 1) {
    uVar2 = 3000;
  }
  else if (iVar1 == 2) {
    uVar2 = 5000;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
