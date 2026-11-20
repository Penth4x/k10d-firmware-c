/* @k10d invoke_virtual_slot_two_on_two_members_10521f7c @ 0x10521f7c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_members_10521f7c(cls_105d8830 *param_1)

{
  void *puVar1;
  
  puVar1 = (void *)(param_1->field_0xc);
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 0xc)))[1].fn)((char*)puVar1 + *(short *)(*(int *)((char*)puVar1 + 0xc) + 8),3);
  }
  puVar1 = (void *)(param_1->field_0x10);
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 0xc)))[1].fn)((char*)puVar1 + *(short *)(*(int *)((char*)puVar1 + 0xc) + 8),3);
  }
  return;
}
