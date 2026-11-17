/* @k10d reset_state_and_copy_buffer @ 0x104189a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_state_and_copy_buffer(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  
  *(uint8_t *)(param_1 + 0x14f4) = 0;
  process_event_if_type_three(*(uint32_t *)(param_1 + 0x50),(void *)(*(uint32_t *)(param_1 + 0x14f8)));
  *(uint32_t *)(param_1 + 0x14f8) = 0;
  *(uint32_t *)(param_1 + 0x88) = 0;
  *(uint32_t *)(param_1 + 0x84) = 0;
  *(uint32_t *)(param_1 + 0x8c) = 0;
  *(uint8_t *)(param_1 + 0x14fc) = 1;
  set_setting_and_notify_object(*(uint32_t *)(param_1 + 0x5c),0);
  pvVar1 = (void *)get_or_init_singleton_object_1051d40e();
  pvVar2 = (void *)get_or_init_singleton_object_1051d40e();
  uVar3 = read_bounded_array_element_1051d696(pvVar2,0x18);
  update_camera_state_flags(pvVar1,0x18,uVar3 & 0xfffffff7);
  return;
}
