/* @k10d init_and_start_timer_object @ 0x10531a24
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a timer object field and conditionally starts a timer if a setup call
 *   succeeds.
 * summary:
 *   The function calls eventflag_clr_flg to initialize the field at offset 0xc of the
 *   object passed in param_1. It then calls send_cpucom_command_sequence_104615ba with
 *   fields at offsets 8 and 4. If send_cpucom_command_sequence_104615ba returns non-zero,
 *   it calls twai_flg_obj to set a flag or start a timer associated with the object. The
 *   return value of send_cpucom_command_sequence_104615ba is returned to the caller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int init_and_start_timer_object(int param_1)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0xc),1);
  iVar1 = send_cpucom_command_sequence_104615ba((void *)(*(uint32_t *)(param_1 + 8)),(void *)(param_1 + 4));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0xc),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}
