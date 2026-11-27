/* @k10d dispatch_state_transition_1051f14e @ 0x1051f14e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int dispatch_state_transition_1051f14e(cls_105d6e14 *param_1,int param_2,int *param_3, uint32_t param_4)
{
  int iVar1;
  int iVar2;
  
  if (param_2 != 2) {
    if (param_2 != 1) {
      return (int)param_1;
    }
    return 0;
  }
  iVar2 = param_1->field_0x44;
  iVar1 = advance_state_on_virtual_ok((int)param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = advance_state_on_virtual_event((int)param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x15);
      if (iVar1 == 0) {
        iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17)
        ;
        if (iVar1 == 0) {
          return (int)param_1;
        }
        return 0;
      }
      if (iVar2 == 4) {
        iVar1 = get_or_create_singleton_object_1051f6ba();
        return iVar1;
      }
      set_flag_at_offset_0x50_1051f5f4((int)param_1);
    }
    else {
      if (6 < iVar2) {
        iVar1 = get_or_create_singleton_object_104882d0();
        *(uint32_t *)(iVar1 + 0x44) = 2;
        return iVar1;
      }
      param_1->field_0x44 = iVar2 + 1;
    }
  }
  else {
    if (iVar2 < 3) {
      iVar1 = backup_eep_opener();
      *(uint32_t *)(iVar1 + 0x44) = 6;
      return iVar1;
    }
    param_1->field_0x44 = iVar2 + -1;
  }
  iVar1 = (uint32_t)(dispatch_mode_transition_sequence((void*)(param_1),(uint32_t)param_2,(uint32_t)param_3,(void *)(uint32_t)param_4));
  return iVar1;
}
