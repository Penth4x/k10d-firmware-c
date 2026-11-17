/* @k10d request_twai_object @ 0x1046f6a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Initializes a TWAI object and conditionally triggers a TWAI flag operation based on a
 *   status check.
 * summary:
 *   The function calls eventflag_clr_flg on a sub-object at offset 0x44 with argument 1. It
 *   then calls send_cpucom_command_sequence_104628be using a value from offset 0x34 and the
 *   base pointer. If send_cpucom_command_sequence_104628be returns non-zero, it invokes
 *   twai_flg_obj on the sub-object at offset 0x44 with arguments 1, 0, and _DAT_105a2af0.
 *   The return value of send_cpucom_command_sequence_104628be is propagated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int request_twai_object(int param_1)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  iVar1 = send_cpucom_command_sequence_104628be((void *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}
