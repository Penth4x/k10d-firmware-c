/* @k10d clear_flag_then_call_helper_104be680 @ 0x104be680
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Clears a byte at offset 0xfd98 in a struct and calls a helper with the same arguments.
 * summary:
 *   The function writes zero to the byte at param_1 + 0xfd98, then calls
 *   configure_and_start_capture_session passing param_1, 0, param_2, param_3, and param_4.
 *   The role of the cleared flag and the helper's behavior are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_then_call_helper_104be680(int param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4)

{
  *(uint8_t *)(param_1 + 0xfd98) = 0;
  configure_and_start_capture_session(param_1,0,param_2,param_3,param_4);
  return;
}
