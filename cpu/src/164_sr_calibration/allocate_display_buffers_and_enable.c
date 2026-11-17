/* @k10d allocate_display_buffers_and_enable @ 0x10471356
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 164_sr_calibration (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_display_buffers_and_enable(int param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x5c) == 0)) {
    pvVar1 = (void *)get_system_heap();
    uVar2 = mempool_get_block(pvVar1,(void *)0x96000,0);
    *(uint32_t *)(param_1 + 0x58) = uVar2;
    pvVar1 = (void *)get_system_heap();
    iVar3 = mempool_get_block(pvVar1,(void *)0x96000,0);
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(int *)(param_1 + 0x58) != 0) && (iVar3 != 0)) {
      sr_state_machine(*(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58),iVar3);
      configure_sensor_readout_mode(*(uint32_t *)(param_1 + 0x54),9,0);
      trigger_sr_cal_transfer_1047142a(param_1);
      display_output_enable(*(uint32_t *)(param_1 + 0x54));
    }
  }
  return;
}
