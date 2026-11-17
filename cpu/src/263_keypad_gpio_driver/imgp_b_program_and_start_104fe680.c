/* @k10d imgp_b_program_and_start_104fe680 @ 0x104fe680
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Programs image-processor engine B from a request block, sets completion bit 0x04, and
 *   starts the engine.
 * summary:
 *   Copies fields from param_3 into the request block at param_1, sets the engine ID to 7
 *   and clears the status field. It calls update_camera_state_flags to set bit 0x04
 *   (completion interrupt) in the engine control register. Finally, it calls
 *   imgp_a_program_and_start to trigger the start sequence for engine B.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_b_program_and_start_104fe680(int param_1,void *param_2,uint32_t *param_3)

{
  void *pvVar1;
  uint uVar2;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,7);
  update_camera_state_flags(pvVar1,7,uVar2 | 1);
  *(uint32_t *)(param_1 + 100) = 7;
  *(uint32_t *)(param_1 + 0x68) = 0;
  *(uint32_t *)(param_1 + 0x6c) = *param_3;
  *(uint16_t *)(param_1 + 0x70) = *(uint16_t *)(param_3 + 1);
  *(uint16_t *)(param_1 + 0x72) = *(uint16_t *)((int)param_3 + 6);
  *(uint16_t *)(param_1 + 0x74) = 0;
  *(uint16_t *)(param_1 + 0x76) = *(uint16_t *)(param_3 + 2);
  *(uint16_t *)(param_1 + 0x78) = 0;
  *(uint16_t *)(param_1 + 0x7a) = 0;
  *(uint16_t *)(param_1 + 0x7c) = *(uint16_t *)((int)param_3 + 10);
  *(uint16_t *)(param_1 + 0x7e) = *(uint16_t *)(param_3 + 3);
  *(uint16_t *)(param_1 + 0x80) = *(uint16_t *)((int)param_3 + 0xe);
  *(uint16_t *)(param_1 + 0x82) = 0x20;
  *(uint16_t *)(param_1 + 0x84) = 0x20;
  *(uint32_t *)(param_1 + 0x88) = 0xffffffff;
  *(uint32_t *)(param_1 + 0x8c) = 0xffffffff;
  imgp_a_program_and_start(param_1,(uint32_t *)(param_1 + 100));
  return;
}
