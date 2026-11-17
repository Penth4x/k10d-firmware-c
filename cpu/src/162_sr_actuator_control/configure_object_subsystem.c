/* @k10d configure_object_subsystem @ 0x104709f6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 162_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Initializes or configures a subsystem within an object by calling four helper functions
 *   on its fields.
 * summary:
 *   The function takes an object pointer (param_1) and a flag (param_2). It calls
 *   eventflag_clr_flg on the field at offset 0x44 with argument 1. It calls
 *   write_byte_to_virtual_object with the field at offset 0x40, argument 2, and the boolean
 *   value of param_2. It calls send_data_via_cpucom with the field at offset 0x40 and the
 *   field at offset 4. Finally, it calls twai_flg_obj on the field at offset 0x44 with
 *   arguments 1, 0, and a global data pointer. The specific roles of the callees are
 *   unknown, but the pattern suggests a multi-step configuration or state transition of an
 *   object's internal components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_object_subsystem(int param_1,int param_2)

{
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  write_byte_to_virtual_object((void *)(*(uint32_t *)(param_1 + 0x40)),2,param_2 != 0);
  send_data_via_cpucom(*(int **)(param_1 + 0x40),(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
