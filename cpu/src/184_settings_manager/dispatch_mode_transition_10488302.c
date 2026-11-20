/* @k10d dispatch_mode_transition_10488302 @ 0x10488302
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 184_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_mode_transition_10488302(cls_105b3370 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 2) {
    if (param_1->field_0x53 == '\0') {
      iVar2 = param_1->field_0x44;
      iVar1 = advance_state_on_virtual_ok((int)param_1,param_3);
      if (iVar1 == 0) {
        iVar1 = advance_state_on_virtual_event((int)param_1,param_3);
        if (iVar1 == 0) {
          iVar1 = advance_state_counter_on_event((int)param_1,param_3);
          if ((iVar1 == 0) && (iVar1 = advance_state_on_virtual_call((int)param_1,param_3), iVar1 == 0)) {
            iVar1 = (((vtbl_entry*)(*param_3))[4].fn)
                              ((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x15);
            if (iVar1 != 0) {
              set_flag_at_offset_0x4c((int)param_1);
              iVar1 = (uint32_t)(dispatch_mode_transition_104884a8((void*)(param_1)));
              return iVar1;
            }
            iVar1 = (((vtbl_entry*)(*param_3))[4].fn)
                              ((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17);
            if (iVar1 == 0) {
              return (int)param_1;
            }
            return 0;
          }
          iVar1 = check_param_in_range_2_to_5(param_1,iVar2);
          if (iVar1 == 0) {
            return (int)param_1;
          }
          set_flag_at_offset_0x4d_104888f0((int)param_1);
        }
        else {
          if (6 < iVar2) {
            iVar1 = get_or_create_singleton_10488998();
            *(uint32_t *)(iVar1 + 0x44) = 2;
            return iVar1;
          }
          param_1->field_0x44 = iVar2 + 1;
        }
      }
      else {
        if (iVar2 < 3) {
          iVar1 = get_or_create_singleton_1051f11c();
          *(uint32_t *)(iVar1 + 0x44) = 7;
          return iVar1;
        }
        param_1->field_0x44 = iVar2 + -1;
      }
      dispatch_mode_transition_104884a8((void*)(param_1));
    }
  }
  else if (param_2 == 1) {
    param_1 = (cls_105b3370 *)0x0;
  }
  return (int)param_1;
}
