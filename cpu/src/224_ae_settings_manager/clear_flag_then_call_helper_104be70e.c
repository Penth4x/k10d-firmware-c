/* @k10d clear_flag_then_call_helper_104be70e @ 0x104be70e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0xfd98 in a struct and calls a helper with the same five
 *   arguments.
 * summary:
 *   Writes zero to the byte at param_1 + 0xfd98, then invokes
 *   configure_and_start_capture_session passing param_1 through param_5 unchanged. The role
 *   of the cleared byte and the helper is not determinable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_then_call_helper_104be70e(int param_1,int param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5)

{
  *(uint8_t *)(param_1 + 0xfd98) = 0;
  configure_and_start_capture_session(param_1,param_2,param_3,param_4,param_5);
  return;
}
