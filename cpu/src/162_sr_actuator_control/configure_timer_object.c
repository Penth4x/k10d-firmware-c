/* @k10d configure_timer_object @ 0x10470a50
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 162_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Initializes and starts a timer object by setting its period, callback, and enabling it.
 * summary:
 *   The function takes a pointer to a timer object structure (param_1) and a period value
 *   (param_2). It calls eventflag_clr_flg to likely reset or initialize a sub-field at
 *   offset 0x44. It then calls write_byte_to_virtual_object with the object pointer at
 *   offset 0x40, the period param_2, and a boolean flag derived from param_2. Next,
 *   send_data_via_cpucom is called to set a callback or handler pointer at offset 4 of the
 *   object. Finally, twai_flg_obj is called to enable the timer flag/object. The sequence
 *   suggests a standard timer setup and activation routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_timer_object(int param_1,int param_2)

{
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  write_byte_to_virtual_object((int *)(*(uint32_t *)(param_1 + 0x40)),(int)(10),(uint)(param_2 != 0));
  send_data_via_cpucom(*(int **)(param_1 + 0x40),(void *)(param_1 + 4));
  twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  return;
}
