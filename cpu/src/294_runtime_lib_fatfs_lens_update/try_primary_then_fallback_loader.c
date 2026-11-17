/* @k10d try_primary_then_fallback_loader @ 0x105381ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Calls a primary handler and, if it returns zero, calls a fallback handler with the same
 *   argument.
 * summary:
 *   The function passes param_1 to lens_fw_update_step_1053db22. If that call returns 0, it
 *   instead passes param_1 to process_unhandled_list_entries and returns that result;
 *   otherwise it returns the result of lens_fw_update_step_1053db22. Both callees are
 *   unnamed, so the specific subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int try_primary_then_fallback_loader(void *param_1)

{
  int extraout_r4;
  int iVar1;
  
  lens_fw_update_step_1053db22((int)param_1);
  iVar1 = extraout_r4;
  if (extraout_r4 == 0) {
    iVar1 = process_unhandled_list_entries(param_1);
  }
  return iVar1;
}
