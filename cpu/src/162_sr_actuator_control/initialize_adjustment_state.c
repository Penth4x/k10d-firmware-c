/* @k10d initialize_adjustment_state @ 0x10470aaa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 162_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Configures a state object by setting flags, mode, and callback pointers at specific
 *   offsets.
 * summary:
 *   The function takes a base pointer and an integer flag. It calls eventflag_clr_flg to
 *   set a value at offset 0x44, write_byte_to_virtual_object to configure a mode (0xd) and
 *   boolean state at offset 0x40, send_data_via_cpucom to set a callback or pointer at
 *   offset 0x40, and twai_flg_obj to register a flag object. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_adjustment_state(int param_1,int param_2)

{
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  write_byte_to_virtual_object((void *)(*(uint32_t *)(param_1 + 0x40)),0xd,param_2 != 0);
  send_data_via_cpucom(*(int **)(param_1 + 0x40),(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
