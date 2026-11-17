/* @k10d configure_sensor_readout_sequence @ 0x10500fe4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Initializes and sequences sensor/AFE control registers with timed delays and status
 *   polling.
 * summary:
 *   The function writes to a control block at param_1+0x1c, sets a state flag at
 *   param_1+0x3c, and then issues a long sequence of calls to functions in the
 *   0x10452xxx-0x10453xxx range using pointers from param_1+0x14 and param_1+0x18. It
 *   intersperses these with calls to set_irq_enable_bit and set_irq_mask_by_channel (likely
 *   delay or wait primitives) and includes polling loops on status functions (0x1045318c,
 *   0x1045312e). The pattern of register writes, delays, and status checks is
 *   characteristic of configuring a sensor or AFE readout pipeline.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_sensor_readout_sequence(int param_1,void *param_2,uint32_t *param_3)

{
  int iVar1;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  *(uint32_t *)(param_1 + 0x3c) = 2;
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452ce6/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452f4a/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452e22/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452d86/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452eae/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffff2,0x4000);
  (*(code *)0x10453098/*ROM*/)
            (*(uint32_t *)(param_1 + 0x14),((uint)param_3[4] >> 9 & 0xffff) + 1 & 0xffff);
  (*(code *)0x104530cc/*ROM*/)(*(uint32_t *)(param_1 + 0x14),*param_3);
  (*(code *)0x10452f92/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452fb4/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452fd6/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
  (*(code *)0x10452ff8/*ROM*/)(*(uint32_t *)(param_1 + 0x14),0);
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
  set_irq_enable_bit(*(int *)(param_1 + 0x18),-0x7ffffff0,0xcc);
  (*(code *)0x1045342e/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,1);
  (*(code *)0x10453698/*ROM*/)(*(int *)(param_1 + 0x14) + 0x11,2);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff2,0xa000);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff1,0x3c);
  set_irq_mask_by_channel(*(int *)(param_1 + 0x18),-0x7ffffff0,0x33);
  (*(code *)0x10452b14/*ROM*/)(*(uint32_t *)(param_1 + 0x14),1);
  set_ram_flag_40030001(*(int *)(param_1 + 0x14) + 0x11,1);
  return 0;
}
