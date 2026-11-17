/* @k10d dispatch_mode_transition_10430fa2 @ 0x10430fa2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10430fc0) overlaps instruction at (ram,0x10430fbe)
    */

int dispatch_mode_transition_10430fa2(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  bool bVar4;
  uint8_t auStack_3c [20];
  uint8_t auStack_28 [20];
  int iStack_14;
  uint8_t uStack_10;
  uint32_t uStack_c;
  
  iVar1 = mode_ctrl_lock(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar1 = check_two_conditions_on_object((void *)param_1);
  if (iVar1 != 0) goto code_r0x1043110c;
  store_three_values_if_valid((uint32_t *)(param_1 + 0x44),param_2,param_3,0);
  cls_1059f170_new((void *)auStack_3c);
  cls_1059f170_new((void *)auStack_28);
  iStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  copy_five_values_between_objects(param_1,auStack_3c);
  iStack_14 = param_1 + 0x20;
  store_value_at_offset_eight_104330a6(auStack_3c,1);
  if (param_4 == 4) {
    iVar2 = write_param_to_buffer(*(uint32_t *)(param_1 + 0x30),auStack_3c,1);
code_r0x104310d2:
    bVar4 = iVar2 == 0;
  }
  else {
    if (param_4 == 2) {
      iVar1 = (*(code *)0x10433ce8/*ROM*/)(*(uint32_t *)(param_1 + 0x30));
      if (iVar1 == 0) {
        uVar3 = *(uint32_t *)(param_1 + 0x30);
        iVar1 = 1;
      }
      else {
        uVar3 = *(uint32_t *)(param_1 + 0x30);
        iVar2 = check_setting_0x97_active(uVar3);
        iVar1 = 2;
        if (iVar2 == 0) {
          iVar1 = 1;
        }
      }
      iVar2 = send_message_with_optional_payload(uVar3,auStack_3c,iVar1);
      goto code_r0x104310d2;
    }
    if (param_4 == 1) {
      iVar2 = init_and_set_value_10434ee8(*(uint32_t *)(param_1 + 0x30),auStack_3c,1);
      goto code_r0x104310d2;
    }
    if (param_4 == 0) {
      iVar2 = init_and_set_value_10434d94(*(uint32_t *)(param_1 + 0x30),auStack_3c,1);
      goto code_r0x104310d2;
    }
    bVar4 = true;
  }
  if (!bVar4) {
    iVar2 = clone_object_with_sem_guard(param_1,auStack_3c);
  }
  if (iVar2 == 0) {
    release_sem_and_clear_obj((uint32_t *)(param_1 + 0x44));
  }
  cls_1059f170_destructor(auStack_28,2);
  cls_1059f170_destructor(auStack_3c,2);
code_r0x1043110c:
  mode_ctrl_unlock((void *)param_1);
  return iVar2;
}
