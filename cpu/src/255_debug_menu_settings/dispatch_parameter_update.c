/* @k10d dispatch_parameter_update @ 0x104edd14
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Routes a parameter update to one of three handlers based on flags in a state structure,
 *   then invokes a callback.
 * summary:
 *   The function checks byte offset 0x61 and int offset 0x20 of the structure at param_3 to
 *   select one of three callees (compute_wb_gain_from_meter, compute_sensor_readout_params,
 *   or compute_aperture_scale_factors). It stores values from offsets 0x30 and 0x34 of
 *   param_3 into a local stack buffer, along with param_5. Finally, it calls the function
 *   pointer at 0x1052e43c with param_1+0x312c and the values from offsets 0x28, 0x2c, and
 *   0x34 of param_3. The specific camera subsystem is not identifiable from the provided
 *   pseudocode and unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_parameter_update(int param_1,ushort *param_2,int param_3,int param_4,ushort *param_5)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint32_t *puVar5;
  uint8_t *puVar6;
  
  puVar5 = (uint32_t *)&stack0xffffffe8;
  puVar6 = &stack0xffffffe8;
  puVar4 = &stack0xffffffe8;
  if (*(char *)(param_3 + 0x61) == '\0') {
    if (*(int *)(param_3 + 0x20) == 0) {
      compute_sensor_readout_params(param_1,param_2,param_3,param_4,param_5);
    }
    else {
      compute_aperture_scale_factors(param_1,param_2,param_3,param_4,param_5);
      puVar5 = (uint32_t *)puVar6;
    }
  }
  else {
    compute_wb_gain_from_meter(param_1,param_2,param_3,param_4,param_5);
    puVar5 = (uint32_t *)puVar4;
  }
  uVar1 = *(uint32_t *)(param_3 + 0x28);
  uVar2 = *(uint32_t *)(param_3 + 0x2c);
  uVar3 = *(uint32_t *)(param_3 + 0x34);
  *puVar5 = *(uint32_t *)(param_3 + 0x30);
  puVar5[1] = (uintptr_t)(param_5);
  (*(code *)0x1052e43c/*ROM*/)(param_1 + 0x312c,uVar1,uVar2,uVar3);
  return;
}
