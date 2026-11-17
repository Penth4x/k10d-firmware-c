/* @k10d apply_settings_update @ 0x1048502e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes an unknown handler on a field at offset 8, then refreshes the working copy of
 *   the settings block.
 * summary:
 *   Takes a settings object pointer, calls write_four_values_to_sram with the value at
 *   offset 8 (role unknown), and then calls settings_refresh_working_copy to copy the
 *   master settings block into the working copy at offset 0x14. The first callee's purpose
 *   is not established, so the overall role is partially unclear.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_settings_update(void *param_1)

{
  write_four_values_to_sram(*(uint32_t *)((int)param_1 + 8));
  settings_refresh_working_copy(param_1);
  return;
}
