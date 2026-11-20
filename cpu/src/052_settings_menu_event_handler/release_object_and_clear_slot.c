/* @k10d release_object_and_clear_slot @ 0x103b9066
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 052_settings_menu_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_and_clear_slot(cls_10594c54 *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = param_1->field_0x50;
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0x10)))[7].fn)
              (((vtbl_entry*)(*(int *)(iVar1 + 0x10)))[7].adj + iVar1,0);
    check_kernel_object_id_valid(&param_1->field_0x40);
  }
  param_1->field_0x50 = 0;
  uVar2 = get_or_create_singleton_object_1050b118();
  set_object_field_via_helper_1050b886(uVar2,0);
  return;
}
