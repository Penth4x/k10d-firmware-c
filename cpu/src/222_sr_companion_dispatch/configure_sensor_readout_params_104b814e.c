/* @k10d configure_sensor_readout_params_104b814e @ 0x104b814e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Writes a set of computed timing and control parameters to a hardware block and
 *   initiates a readout operation.
 * summary:
 *   The function validates a state flag via set_pointer_and_clear_flag. It then extracts
 *   multiple fields from one or two parameter structures (param_3 and param_4) using
 *   function pointers at 0x104bb202-0x104bb224, packs them into bitfields, and writes them
 *   to indices 0-4 of a block pointed to by *(param_1 + 0x14) using
 *   dispatch_virtual_property_set. It subsequently calls send_cpucom_command_block to
 *   trigger an operation and checks the result. The specific hardware block and the exact
 *   nature of the parameters (likely sensor/AFE readout timing given the bit-packing of
 *   multiple small fields) are not explicitly identified in the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int configure_sensor_readout_params_104b814e(int param_1,uint32_t param_2,void *param_3,int param_4)

{
  bool bVar7;
  uint32_t uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iStack_30;
  
  iStack_30 = 0;
  bVar7 = set_pointer_and_clear_flag((int *)(param_1 + 0x2c),(void *)(param_1 + 4));
  if (bVar7) {
    if (param_4 == 0) {
      dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),0,0);
      dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),1,0);
      uVar1 = (*(code *)0x104bb202/*ROM*/)(param_3);
      uVar2 = (*(code *)0x104bb20c/*ROM*/)(param_3);
      uVar3 = (*(code *)0x104bb212/*ROM*/)(param_3);
      uVar4 = (*(code *)0x104bb218/*ROM*/)(param_3);
      uVar5 = (*(code *)0x104bb21e/*ROM*/)(param_3);
      uVar2 = uVar2 & 3 | (uVar3 & 1) << 2 | (uVar4 & 3) << 3 | (uVar5 & 1) << 5;
      uVar3 = (*(code *)0x104bb224/*ROM*/)(param_3);
    }
    else {
      uVar1 = (*(code *)0x104bb202/*ROM*/)(param_3);
      uVar2 = (*(code *)0x104bb20c/*ROM*/)(param_3);
      uVar3 = (*(code *)0x104bb212/*ROM*/)(param_3);
      uVar4 = (*(code *)0x104bb218/*ROM*/)(param_3);
      uVar5 = (*(code *)0x104bb21e/*ROM*/)(param_3);
      uVar6 = (*(code *)0x104bb224/*ROM*/)(param_3);
      dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),0,uVar1);
      dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),1,
                   uVar2 & 3 | (uVar3 & 1) << 2 | (uVar4 & 3) << 3 | (uVar5 & 1) << 5 |
                   (uVar6 & 3) << 6);
      uVar1 = (*(code *)0x104bb202/*ROM*/)(param_4);
      uVar2 = (*(code *)0x104bb20c/*ROM*/)(param_4);
      uVar3 = (*(code *)0x104bb212/*ROM*/)(param_4);
      uVar4 = (*(code *)0x104bb218/*ROM*/)(param_4);
      uVar5 = (*(code *)0x104bb21e/*ROM*/)(param_4);
      uVar2 = uVar2 & 3 | (uVar3 & 1) << 2 | (uVar4 & 3) << 3 | (uVar5 & 1) << 5;
      uVar3 = (*(code *)0x104bb224/*ROM*/)(param_4);
    }
    dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),2,uVar1);
    dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),3,uVar2 | (uVar3 & 3) << 6);
    dispatch_virtual_property_set((void *)(*(uint32_t *)(param_1 + 0x14)),4,param_2);
    eventflag_clr_flg((uint32_t *)(param_1 + 0x24),1);
    iStack_30 = send_cpucom_command_block((void *)(*(uint32_t *)(param_1 + 0x14)),(void *)(param_1 + 4));
    if (iStack_30 != 0) {
      twai_flg_obj((uint32_t *)(param_1 + 0x24),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
    }
    delete_signal_semaphore((int *)(param_1 + 0x2c));
  }
  return iStack_30;
}
