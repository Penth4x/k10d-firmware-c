/* @k10d init_object_with_param_block @ 0x104c4ac2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object struct by copying a parameter block and setting individual
 *   fields.
 * summary:
 *   The function writes param_2 into the object at offset 0x1c via
 *   set_pointer_and_clear_flag, calls clear_flag_and_call_subroutine_104c4c74 on the
 *   object, and then populates fields from 0xbc to 0xe0 with the remaining parameters. It
 *   copies an 8-byte block from param_5 into offsets 0xc4-0xcb, sets five 32-bit fields and
 *   one byte field, and finally calls set_flg_obj on a flag at offset 0x34. The caller is
 *   pack_and_forward_event_params.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_param_block(int param_1,int param_2,uint32_t param_3,void *param_4,int param_5,
                 uint32_t param_6,uint32_t param_7,uint32_t param_8,uint32_t param_9,
                 uint32_t param_10,uint8_t param_11)

{
  int iVar1;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0xbc) = param_3;
  *(void **)(param_1 + 0xc0) = param_4;
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -4;
    *(uint32_t *)(iVar1 + param_1 + 0xc4) = *(uint32_t *)(iVar1 + param_5);
  } while (iVar1 != 0);
  *(uint32_t *)(param_1 + 0xcc) = param_6;
  *(uint32_t *)(param_1 + 0xd0) = param_7;
  *(uint32_t *)(param_1 + 0xd4) = param_8;
  *(uint32_t *)(param_1 + 0xd8) = param_9;
  *(uint32_t *)(param_1 + 0xdc) = param_10;
  *(uint8_t *)(param_1 + 0xe0) = param_11;
  set_flg_obj((uint32_t *)(param_1 + 0x34));
  return;
}
