/* @k10d process_object_state_change_10391310 @ 0x10391310
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

void process_object_state_change_10391310(cls_10562400 *param_1,uint32_t param_2)

{
  int *piVar1;
  
  if (*(char *)&param_1[0x46].field_0x8c != '\0') {
    *(uint8_t *)((int)&param_1[0x46].field_0x8c + 2) = 1;
    add_offset_to_pointer_104df392((int)param_1);
    clear_flag_and_call_two_helpers_104d8346(__frv_reg_unset(4));
    piVar1 = (int *)param_1[0x46].field_0x88;
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[14].fn)((int)((vtbl_entry*)(*piVar1))[14].adj + (int)piVar1);
    }
    call_single_helper_104df450((int)(param_1),(uint32_t)(*(uint32_t *)&param_1[0x46].field_0x6c));
  }
  call_single_helper_104df384((cls_105bb314 *)param_1);
  return;
}
