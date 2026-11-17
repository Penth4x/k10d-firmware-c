/* @k10d init_object_with_buffer_and_callback_104af018 @ 0x104af018
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_buffer_and_callback_104af018(int param_1,uint8_t *param_2,int param_3,uint32_t param_4,uint32_t param_5,
                 uint32_t param_6)

{
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint8_t *)(param_1 + 0x14) = 0;
  if ((param_2 != (uint8_t *)0x0) && (param_3 != 0)) {
    copy_bytes_aligned((void *)(*(uint32_t *)(param_1 + 4)),param_2,param_3,0);
    *(int *)(param_1 + 8) = param_3;
    (**(code **)(*(int *)(param_1 + 0x18) + 0x14))
              (*(short *)(*(int *)(param_1 + 0x18) + 0x10) + param_1,param_4,param_5,param_6);
  }
  return;
}
