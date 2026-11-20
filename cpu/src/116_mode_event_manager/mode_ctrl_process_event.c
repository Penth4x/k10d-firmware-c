/* @k10d mode_ctrl_process_event @ 0x10431b60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 116_mode_event_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mode_ctrl_process_event(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  cls_1059f170 cStack_3c;
  cls_1059f170 cStack_28;
  uint32_t uStack_14;
  char cStack_10;
  void *pvStack_c;
  
  iVar1 = mode_ctrl_lock(param_1,0);
  if (iVar1 != 0) {
    iVar1 = check_two_conditions_on_object((void *)param_1);
    if (iVar1 == 0) {
      cls_1059f170_new(&cStack_3c);
      cls_1059f170_new(&cStack_28);
      uStack_14 = 0;
      cStack_10 = '\0';
      pvStack_c = (void *)0x0;
      copy_five_values_between_objects(param_1,&cStack_3c);
      iVar1 = dispatch_event_by_type_10434c16(*(uint32_t *)(param_1 + 0x30),&cStack_3c,(uint)param_2);
      if (iVar1 == 0) {
        iVar2 = read_first_word_10433098(&cStack_3c.field_0x0);
        if (iVar2 == 0) {
          iVar1 = dispatch_event_with_state_check_10431c74(param_1,&cStack_3c);
        }
        else if (iVar2 == 1) {
          iVar1 = call_two_helpers_on_struct_fields_10431d46(param_1,&cStack_3c);
        }
        else if (iVar2 == 2) {
          iVar1 = call_two_helpers_on_struct_fields_10431d72(param_1,&cStack_3c);
        }
        else if (iVar2 == 3) {
          iVar1 = call_helper_with_offset_0x30(param_1,&cStack_3c);
        }
        else if (iVar2 == 4) {
          iVar1 = call_three_helpers_on_object_10431db2(param_1,&cStack_3c);
        }
      }
      if (iVar1 != 0) {
        if (cStack_10 == '\0') {
          clone_object_with_sem_guard(param_1,&cStack_3c);
        }
        else {
          mode_ctrl_on_status_h_104329b0(param_1,pvStack_c);
        }
      }
      cls_1059f170_destructor(&cStack_28,2);
      cls_1059f170_destructor(&cStack_3c,2);
    }
    mode_ctrl_unlock((void *)param_1);
  }
  return;
}
