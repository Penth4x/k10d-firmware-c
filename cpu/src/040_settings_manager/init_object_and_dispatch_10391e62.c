/* @k10d init_object_and_dispatch_10391e62 @ 0x10391e62
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105626dc * init_object_and_dispatch_10391e62(cls_105626dc *param_1)

{
  int iVar1;
  uintptr_t sp;
  char cStack_9;
  
  param_1->field_0x4 = (uintptr_t)(&param_1->field_0x8);
  call_helper_with_second_field_10391ef4((void *)(uint32_t)param_1);
  cStack_9 = '\0';
  iVar1 = get_value_from_object();
  iVar1 = add_offset_to_pointer_104df392(iVar1);
  iVar1 = check_flag_and_set_output(iVar1,&cStack_9);
  if ((iVar1 == 0) && (cStack_9 == '\0')) {
    (((vtbl_entry*)(param_1->field_0x0))[6].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[6].adj);
    param_1 = (cls_105626dc *)create_and_configure_object_10393b48(0,0,param_1);
  }
  return param_1;
}
