/* @k10d invoke_virtual_slot_two_on_two_members_10521f36 @ 0x10521f36
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_two_members_10521f36(cls_105d8830 *param_1)

{
  void *puVar1;
  
  puVar1 = (void *)(param_1->field_0xc);
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 0xc)))[2].fn)((char*)puVar1 + ((vtbl_entry*)(*(int *)((char*)puVar1 + 0xc)))[2].adj)
    ;
  }
  puVar1 = (void *)(param_1->field_0x10);
  if (puVar1 != 0) {
    (((vtbl_entry*)(*(int *)((char*)puVar1 + 0xc)))[2].fn)((char*)puVar1 + ((vtbl_entry*)(*(int *)((char*)puVar1 + 0xc)))[2].adj)
    ;
  }
  return 1;
}
