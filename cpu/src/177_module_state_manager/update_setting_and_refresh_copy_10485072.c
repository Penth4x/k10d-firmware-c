/* @k10d update_setting_and_refresh_copy_10485072 @ 0x10485072
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes a new value into a settings field at offset 8 and refreshes the working copy.
 * summary:
 *   Calls write_three_word_buffer to store param_2 into the field at param_1+8, then
 *   invokes settings_refresh_working_copy to propagate the change to the 0x344-byte working
 *   copy. The specific setting being modified is not identifiable from the pseudocode
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_setting_and_refresh_copy_10485072(void *param_1,uint32_t param_2)

{
  write_three_word_buffer(*(uint32_t *)((int)param_1 + 8),param_2);
  settings_refresh_working_copy(param_1);
  return;
}
