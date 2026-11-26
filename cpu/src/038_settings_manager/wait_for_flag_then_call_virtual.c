/* @k10d wait_for_flag_then_call_virtual @ 0x103912b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 038_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

void wait_for_flag_then_call_virtual(cls_10562400 *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)&param_1[0x46].field_0x78;
  while (cVar1 != '\0') {
    check_kernel_call_success_10459fea(0x64);
    cVar1 = *(char *)&param_1[0x46].field_0x78;
  }
  invoke_virtual_slot_10_on_sixteen_objects();
  override_parent_slot4((cls_105bb314 *)param_1);
  return;
}
