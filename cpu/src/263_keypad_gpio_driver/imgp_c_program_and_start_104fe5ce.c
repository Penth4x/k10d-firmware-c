/* @k10d imgp_c_program_and_start_104fe5ce @ 0x104fe5ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Programs image-processor engine C from a request block and starts it.
 * summary:
 *   Copies a 16-byte parameter block from param_3 into the engine C request structure at
 *   param_1+0x68, sets the engine mode field at param_1+0x64 to 6, and initializes
 *   stride/size fields. Calls imgp_a_program_and_start (likely a shared helper or
 *   mislabeled) to trigger the engine start sequence. Part of the image_processor_driver
 *   module that controls the Milbeaut image-processor block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void imgp_c_program_and_start_104fe5ce(int param_1,void *param_2,uint32_t *param_3)

{
  void *pvVar1;
  uint uVar2;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  uVar2 = read_bounded_array_element_1051d696(pvVar1,7);
  update_camera_state_flags(pvVar1,7,uVar2 | 1);
  *(uint32_t *)(param_1 + 100) = 6;
  *(uint32_t *)(param_1 + 0x68) = *param_3;
  *(uint32_t *)(param_1 + 0x6c) = param_3[1];
  *(uint16_t *)(param_1 + 0x70) = *(uint16_t *)(param_3 + 2);
  *(uint16_t *)(param_1 + 0x72) = *(uint16_t *)((int)param_3 + 10);
  *(uint16_t *)(param_1 + 0x74) = *(uint16_t *)(param_3 + 3);
  *(uint16_t *)(param_1 + 0x76) = *(uint16_t *)((int)param_3 + 0xe);
  *(uint16_t *)(param_1 + 0x78) = *(uint16_t *)(param_3 + 4);
  *(uint16_t *)(param_1 + 0x7a) = *(uint16_t *)((int)param_3 + 0x12);
  *(uint16_t *)(param_1 + 0x7c) = *(uint16_t *)(param_3 + 5);
  *(uint16_t *)(param_1 + 0x7e) = *(uint16_t *)((int)param_3 + 0x16);
  *(uint16_t *)(param_1 + 0x80) = 0;
  *(uint16_t *)(param_1 + 0x82) = 0x20;
  *(uint16_t *)(param_1 + 0x84) = 0x20;
  *(uint32_t *)(param_1 + 0x88) = 0xffffffff;
  *(uint32_t *)(param_1 + 0x8c) = 0xffffffff;
  imgp_a_program_and_start(param_1,(uint32_t *)(param_1 + 100));
  return;
}
