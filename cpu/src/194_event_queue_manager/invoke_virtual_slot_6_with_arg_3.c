/* @k10d invoke_virtual_slot_6_with_arg_3 @ 0x104922fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_6_with_arg_3(cls_105b4254 *param_1)

{
  int iVar1;
  
  iVar1 = param_1->field_0x10;
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[6].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[6].adj + iVar1,3);
  }
  return;
}
