/* @k10d init_object_and_dispatch_10391e62 @ 0x10391e62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * init_object_and_dispatch_10391e62(int *param_1)

{
  int iVar1;
  uintptr_t sp;
  char cStack_9;
  
  param_1[1] = (int)(param_1 + 2);
  call_helper_with_second_field_10391ef4((void *)__frv_reg_unset(4));
  cStack_9 = '\0';
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  iVar1 = check_flag_and_set_output(iVar1,&cStack_9);
  if ((iVar1 == 0) && (cStack_9 == '\0')) {
    (**(code **)(*param_1 + 0x34))((int)*(short *)(*param_1 + 0x30) + (int)param_1);
    param_1 = (int *)create_and_configure_object_10393b48(0,0,param_1);
  }
  return param_1;
}
