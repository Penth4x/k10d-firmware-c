/* @k10d free_heap_if_flagged_1051ec9e @ 0x1051ec9e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown helper then frees the given heap pointer when bit 0 of param_2 is set.
 * summary:
 *   If param_1 is non-NULL, it invokes lens_fw_update_teardown and, when (param_2 & 1) is
 *   true, calls heap_free on param_1. The role of lens_fw_update_teardown is unknown, so
 *   the overall intent beyond conditional heap deallocation is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_heap_if_flagged_1051ec9e(void *param_1,uint param_2)

{
  if (param_1 != 0) {
    lens_fw_update_teardown();
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
