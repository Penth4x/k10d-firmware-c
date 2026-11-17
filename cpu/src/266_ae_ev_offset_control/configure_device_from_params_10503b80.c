/* @k10d configure_device_from_params_10503b80 @ 0x10503b80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_device_from_params_10503b80(int param_1,int param_2,void *param_3)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x14),(void *)param_2);
  (*(code *)0x10456f92/*ROM*/)(*(uint32_t *)(param_1 + 0xc),1);
  (*(code *)0x10456f92/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0);
  (*(code *)0x1045700a/*ROM*/)(*(uint32_t *)(param_1 + 0xc),1);
  (*(code *)0x10457084/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_3 + 0x34));
  (*(code *)0x104570a6/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*(uint16_t *)((int)param_3 + 0x36));
  (*(code *)0x104570c8/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*(uint32_t *)((int)param_3 + 0x38));
  (*(code *)0x104570ec/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*(uint32_t *)((int)param_3 + 0x3c));
  (*(code *)0x1045742a/*ROM*/)(*(uint32_t *)(param_1 + 0xc),*(uint32_t *)((int)param_3 + 0x40));
  populate_param_block_and_call_driver(param_1,param_3,*(uint8_t *)((int)param_3 + 0x50));
  set_irq_enable_bit(*(int *)(param_1 + 0x10),-0x7fffffed,1);
  (*(code *)0x10456fbe/*ROM*/)(*(uint32_t *)(param_1 + 0xc),1);
  return;
}
