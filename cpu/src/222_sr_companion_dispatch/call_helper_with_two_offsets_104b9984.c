/* @k10d call_helper_with_two_offsets_104b9984 @ 0x104b9984
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper twice with the same first two args, using index 0 and 1 plus a pointer
 *   offset by a global.
 * summary:
 *   The function invokes build_mode_settings_snapshot_104b99b0 twice. The first call passes
 *   param_1, param_2, 0, and the value at param_1+0x44. The second call passes param_1,
 *   param_2, 1, and a pointer computed by adding the global _DAT_80048310 to the integer at
 *   param_1+0x44. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_helper_with_two_offsets_104b9984(int param_1,void *param_2)

{
  build_mode_settings_snapshot_104b99b0(param_1,param_2,0,*(uint8_t **)(param_1 + 0x44));
  build_mode_settings_snapshot_104b99b0(param_1,param_2,1,(uint8_t *)(*(int *)(param_1 + 0x44) + _DAT_80048310/*SDRAM*/));
  return;
}
