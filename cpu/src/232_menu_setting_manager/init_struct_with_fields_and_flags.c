/* @k10d init_struct_with_fields_and_flags @ 0x104c4b86
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a struct by copying fields from a source and setting a flag.
 * summary:
 *   The function calls set_pointer_and_clear_flag and
 *   clear_flag_and_call_subroutine_104c4c74 on the object. It stores parameters at offsets
 *   0x1e0, 0x1e4, 0x1f0, and 0x1f4 (byte). It copies 8 bytes from param_4 to offset 0x1e8.
 *   Finally, it calls set_flg_obj on the flag field at offset 0x34.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_struct_with_fields_and_flags(int param_1,void *param_2,uint32_t param_3,int param_4,uint32_t param_5,
                 uint32_t param_6,uint8_t param_7)

{
  int iVar1;
  
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0x1e0) = param_3;
  *(uint32_t *)(param_1 + 0x1e4) = param_5;
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -4;
    *(uint32_t *)(iVar1 + param_1 + 0x1e8) = *(uint32_t *)(iVar1 + param_4);
  } while (iVar1 != 0);
  *(uint32_t *)(param_1 + 0x1f0) = param_6;
  *(uint8_t *)(param_1 + 500) = param_7;
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x100000);
  return;
}
