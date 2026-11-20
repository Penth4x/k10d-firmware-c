/* @k10d initialize_twai_flag_object @ 0x1046d9c0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 157_sr_event_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a TWAI flag object at offset 0x44 of the provided structure.
 * summary:
 *   The function calls eventflag_clr_flg and send_cpucom_command_sequence_10462982 with
 *   pointers derived from param_1, then invokes twai_flg_obj to set up a flag object at
 *   param_1 + 0x44. The specific roles of the first two callees are unknown, but the final
 *   call explicitly initializes a TWAI flag structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_twai_flag_object(int param_1)

{
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  send_cpucom_command_sequence_10462982((void *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
