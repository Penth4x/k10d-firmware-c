/* @k10d call_subroutine_and_set_flag @ 0x1046f510
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Calls a helper with object fields and parameters, then sets a flag if the helper
 *   returns non-zero.
 * summary:
 *   The function first calls eventflag_clr_flg with a pointer to offset 0x44 of the object
 *   and the value 1. It then calls send_sensor_data_via_cpucom, passing the value at offset
 *   0x34, a pointer to offset 4, and the second and third arguments. If
 *   send_sensor_data_via_cpucom returns a non-zero value, it calls twai_flg_obj to set a
 *   flag at offset 0x44. The return value of send_sensor_data_via_cpucom is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_subroutine_and_set_flag(int param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  iVar1 = send_sensor_data_via_cpucom((int *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4),(uint *)(param_2),(int)(param_3));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}
