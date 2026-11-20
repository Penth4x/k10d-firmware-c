/* @k10d dispatch_event_with_timeout_1046f01e @ 0x1046f01e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 159_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Sends an event to a queue and waits for a response with a timeout.
 * summary:
 *   The function calls eventflag_clr_flg to likely prepare or signal a state at offset
 *   0x44. It then calls read_sensor_data_via_cpucom, passing a value from offset 0x34, a
 *   pointer to offset 4, and param_2. If read_sensor_data_via_cpucom returns non-zero, it
 *   calls twai_flg_obj (a standard ÂµITRON/REALOS wait-for-flag primitive) with a timeout
 *   defined by _DAT_105a2af0. This pattern suggests a synchronous request-response or event
 *   dispatch mechanism.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_event_with_timeout_1046f01e(int param_1,void *param_2)

{
  int iVar1;
  
  eventflag_clr_flg((uint32_t *)(param_1 + 0x44),1);
  iVar1 = read_sensor_data_via_cpucom((int *)(*(uint32_t *)(param_1 + 0x34)),(void *)(param_1 + 4),(int *)(param_2));
  if (iVar1 != 0) {
    twai_flg_obj((uint32_t *)(param_1 + 0x44),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
  }
  return iVar1;
}
