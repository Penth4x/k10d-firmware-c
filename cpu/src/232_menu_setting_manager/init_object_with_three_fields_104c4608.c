/* @k10d init_object_with_three_fields_104c4608 @ 0x104c4608
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting fields at offsets 0x1c, 0x84, and 0x34.
 * summary:
 *   The function takes an object pointer (param_1) and two values. It calls
 *   set_pointer_and_clear_flag to initialize a sub-object at offset 0x1c with param_2,
 *   calls clear_flag_and_call_subroutine_104c4c74 on the main object, stores param_3 at
 *   offset 0x84, and calls set_flg_obj on a flag object at offset 0x34. The specific
 *   subsystem is not identifiable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_three_fields_104c4608(int param_1,int param_2,uint32_t param_3)

{
  set_pointer_and_clear_flag((int *)(param_1 + 0x1c),(void *)param_2);
  clear_flag_and_call_subroutine_104c4c74(param_1);
  *(uint32_t *)(param_1 + 0x84) = param_3;
  set_flg_obj((uint32_t *)(param_1 + 0x34), 0x2);
  return;
}
