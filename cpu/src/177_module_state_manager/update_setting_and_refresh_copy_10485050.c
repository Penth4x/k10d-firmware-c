/* @k10d update_setting_and_refresh_copy_10485050 @ 0x10485050
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes a new value into a settings field at offset 8 of the object, then refreshes the
 *   working copy.
 * summary:
 *   Takes an object pointer and a value, passes the field at offset 8 and the value to
 *   initialize_sram_block_10429a28 (likely a setter), then calls
 *   settings_refresh_working_copy to propagate the change. The specific setting being
 *   modified is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_setting_and_refresh_copy_10485050(void *param_1,uint32_t param_2)

{
  initialize_sram_block_10429a28(*(uint32_t *)((int)param_1 + 8),param_2);
  settings_refresh_working_copy(param_1);
  return;
}
