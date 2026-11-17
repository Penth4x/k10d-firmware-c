/* @k10d set_mode_flag_and_update_ctrl @ 0x10431166
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * purpose:
 *   Locks mode control, validates state, sets a specific bit in a control object based on
 *   param_4, and updates the mode controller.
 * summary:
 *   Acquires a lock via mode_ctrl_lock and checks state via check_two_conditions_on_object.
 *   If valid, it calls store_three_values_if_valid with parameters, then maps param_4 (0-8)
 *   to a bitmask (1<<param_4). It instantiates two cls_1059f170 objects, configures one
 *   with the bitmask via store_value_at_offset_eight_104330a6, and calls
 *   clone_object_with_sem_guard to apply the change. Finally, it calls
 *   release_sem_and_clear_obj if the result is zero and unlocks the mode control.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int set_mode_flag_and_update_ctrl(int param_1,int param_2,int param_3,uint32_t param_4)

{
  int iVar1;
  uint uVar2;
  uintptr_t sp;
  int iStack_48;
  uint8_t auStack_3c [20];
  uint8_t auStack_28 [20];
  uint32_t uStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  iStack_48 = 0;
  iVar1 = mode_ctrl_lock(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = check_two_conditions_on_object((void *)param_1);
  if (iVar1 != 0) goto LAB_10431264;
  store_three_values_if_valid((uint32_t *)(param_1 + 0x44),param_2,param_3,0);
  switch(param_4) {
  case 0:
    uVar2 = 2;
    break;
  case 1:
    uVar2 = 4;
    break;
  case 2:
    uVar2 = 8;
    break;
  case 3:
    uVar2 = 0x10;
    break;
  case 4:
    uVar2 = 0x20;
    break;
  case 5:
    uVar2 = 0x40;
    break;
  case 6:
    uVar2 = 0x80;
    break;
  case 7:
    uVar2 = 0x100;
    break;
  case 8:
    uVar2 = 0x200;
    break;
  default:
    goto switchD_104311b2_default;
  }
  cls_1059f170_new((void *)auStack_3c);
  cls_1059f170_new((void *)auStack_28);
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  copy_five_values_between_objects(param_1,auStack_3c);
  store_value_at_offset_eight_104330a6(auStack_3c,uVar2 | 1);
  iStack_48 = clone_object_with_sem_guard(param_1,auStack_3c);
  cls_1059f170_destructor(auStack_28,2);
  cls_1059f170_destructor(auStack_3c,2);
switchD_104311b2_default:
  if (iStack_48 == 0) {
    release_sem_and_clear_obj((uint32_t *)(param_1 + 0x44));
  }
LAB_10431264:
  mode_ctrl_unlock((void *)param_1);
  return iStack_48;
}
