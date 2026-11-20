/* @k10d refresh_settings_and_propagate_mode @ 0x10434138
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 120_sr_menu_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void refresh_settings_and_propagate_mode(int param_1,int *param_2,int param_3)

{
  uint32_t uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  settings_refresh_working_copy(*(void **)(param_1 + 0xc));
  uVar3 = 0;
  uVar2 = 8;
  if (param_2 != (int *)0x0) {
    uVar1 = (((vtbl_entry*)(*param_2))[2].fn)((int)((vtbl_entry*)(*param_2))[2].adj + (int)param_2,5);
    set_two_flags_on_object_10435344(param_1,uVar1,0);
    resubmit_cpucom_context(param_1);
    uVar2 = (((vtbl_entry*)(*param_2))[7].fn)((int)((vtbl_entry*)(*param_2))[7].adj + (int)param_2,0x2e);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0x12) {
      uVar3 = 1;
    }
  }
  refresh_settings_if_changed_104343d8(param_1);
  clear_settings_if_flag_set(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xc),uVar3);
  apply_settings_and_dispatch(param_1,uVar2,0);
  *(char *)(param_1 + 0x50) = (char)uVar2;
  write_object_field_byte((void*)(*(uint32_t *)(param_1 + 0x1c)),0xe,param_3 == 0);
  resubmit_cpucom_context(param_1);
  return;
}
