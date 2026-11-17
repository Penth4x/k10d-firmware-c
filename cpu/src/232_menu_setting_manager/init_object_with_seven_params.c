/* @k10d init_object_with_seven_params @ 0x104c4b32
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by storing seven parameters at fixed offsets and setting a flag.
 * summary:
 *   The function writes param_3 through param_8 into the object at offsets 0xe4, 0xcc,
 *   0xd0, 0xd4, 0xd8, and 0xe0 respectively. It calls set_pointer_and_clear_flag with a
 *   pointer to offset 0x1c and param_2, and calls clear_flag_and_call_subroutine_104c4c74
 *   with the object pointer. Finally, it calls set_flg_obj on the field at offset 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_seven_params(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,
                 uint32_t param_6,uint32_t param_7,uint8_t param_8)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0xe4) = param_3;
  *(uint32_t *)(param_1 + 0xcc) = param_4;
  *(uint32_t *)(param_1 + 0xd0) = param_5;
  *(uint32_t *)(param_1 + 0xd4) = param_6;
  *(uint32_t *)(param_1 + 0xd8) = param_7;
  *(uint8_t *)(param_1 + 0xe0) = param_8;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
