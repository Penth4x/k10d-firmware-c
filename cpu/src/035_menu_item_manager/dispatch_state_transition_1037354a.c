/* @k10d dispatch_state_transition_1037354a @ 0x1037354a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * dispatch_state_transition_1037354a(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  int *piVar3;
  
  if (param_1[8] == 0) {
    if (param_1[0xd] != 0) {
      copy_two_words_and_set_flag(param_1);
      param_1[8] = 1;
      param_1[9] = 0;
      (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
      request_ui_sync_code_4(param_1 + 0x119);
      write_second_field_via_helper_1036c486(param_1,param_1[6]);
      poll_and_update_state_entry(param_1,1);
      return param_1;
    }
  }
  else {
    if (param_1[8] != 1) {
      return param_1;
    }
    if (*(char *)((int)param_1 + 0x29) == '\0') {
      if (*(char *)((int)param_1 + 0x2a) == '\0') {
        param_1[9] = 1;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
        request_ui_sync_code_4(param_1 + 0x119);
        write_second_field_via_helper_1036c486(param_1,param_1[6]);
        return param_1;
      }
      if (((*(short *)(param_1[0xd] + 4) != *(short *)(param_1 + 0xc)) ||
          (*(short *)(param_1[0xd] + 6) != *(short *)((int)param_1 + 0x32))) ||
         (iVar1 = check_two_short_pairs_equal(param_1), iVar1 != 0)) {
        copy_two_words_and_set_flag(param_1);
        param_1[9] = 2;
        (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
        request_ui_sync_code_4(param_1 + 0x119);
        write_second_field_via_helper_1036c486(param_1,param_1[6]);
        poll_and_update_state_entry(param_1,1);
        return param_1;
      }
      if (*(char *)(param_1 + 5) != '\0') {
        return param_1;
      }
      if (*(char *)((int)param_1 + 0x29) == '\0') {
        return param_1;
      }
    }
  }
  uVar2 = get_or_create_singleton_object_1036c796();
  piVar3 = (int *)read_array_element_bounded(uVar2,2);
  return piVar3;
}
