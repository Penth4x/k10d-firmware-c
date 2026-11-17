/* @k10d configure_and_start_sensor_readout @ 0x1050133c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Configures sensor/AFE parameters from a struct, toggles control lines, waits for ready,
 *   and initiates readout.
 * summary:
 *   The function writes a series of configuration values from param_2 into an object
 *   pointed to by *(param_1+0x14) via a sequence of setter calls. It then manipulates
 *   control signals on *(param_1+0x14)+0x10 and +0x11, including toggling bits and polling
 *   status functions (0x1045318c, 0x1045312e) in loops until specific conditions are met.
 *   Finally, it calls set_irq_enable_bit and set_irq_mask_by_channel with various
 *   constants, likely setting up DMA or interrupt contexts, and ends with a final enable
 *   call. The pattern of configuring parameters, waiting for hardware readiness, and
 *   starting a process is consistent with initiating a sensor readout or similar hardware
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_and_start_sensor_readout(int param_1,uint32_t *param_2)

{
  int iVar1;
  
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffff2,0x4000);
  (*(code *)0x10453098/*ROM*/)
            (*(uint32_t *)(param_1 + 0x14),((uint)param_2[4] >> 9 & 0xffff) + 1 & 0xffff);
  (*(code *)0x104530cc/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*param_2);
  (*(code *)0x1045302c/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[1]);
  (*(code *)0x10453050/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[2]);
  (*(code *)0x10453074/*ROM*/)(*(uint32_t *)(param_1 + 0x14),param_2[3]);
  (*(code *)0x10452f92/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_2 + 5));
  (*(code *)0x10452fb4/*ROM*/)(*(uint32_t *)(param_1 + 0x14),(int)(uint)*(ushort *)(param_2 + 5) >> 1);
  (*(code *)0x10452fd6/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)(param_2 + 5));
  (*(code *)0x10452ff8/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*(uint16_t *)((int)param_2 + 0x16));
  (*(code *)0x10453156/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,1);
  (*(code *)0x10453156/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,0);
  iVar1 = (*(code *)0x1045318c/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  while (iVar1 != 0) {
    iVar1 = (*(code *)0x1045318c/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  }
  set_bit_14_in_ram40030400(*(int *)(param_1 + 0x14) + 0x10,1);
  iVar1 = (*(code *)0x1045312e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  while (iVar1 == 0) {
    iVar1 = (*(code *)0x1045312e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10);
  }
  (*(code *)0x104531a2/*ROM*/)(*(int *)(param_1 + 0x14) + 0x10,0);
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffff1,0x80);
  (*(code *)0x104534a8/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x104533bc/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,0);
  (*(code *)0x104533f4/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,0);
  (*(code *)0x10453384/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,0);
  (*(code *)0x10453492/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x1045342e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x10453698/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,2);
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffff0,0xe0);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff2,0xa000);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff1,0x3c);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff0,0x1f);
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  set_ram_flag_40030001(*(int *)(param_1 + 0x14) + 0x11,1);
  return;
}
