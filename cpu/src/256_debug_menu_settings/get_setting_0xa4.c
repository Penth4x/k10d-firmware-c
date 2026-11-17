/* @k10d get_setting_0xa4 @ 0x104f1cae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Reads setting id 0xa4 from the working copy for the mode indicated by the object's
 *   field at offset 0xc.
 * summary:
 *   Dereferences param_1+0xc to obtain a mode/context index and passes it as the first
 *   argument to setting_get with the fixed setting id 0xa4. Returns the value read by
 *   setting_get. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_0xa4(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = setting_get(*(int *)(param_1 + 0xc),0xa4);
  return uVar1;
}
