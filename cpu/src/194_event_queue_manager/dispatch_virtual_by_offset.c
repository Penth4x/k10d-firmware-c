/* @k10d dispatch_virtual_by_offset @ 0x10491ddc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_by_offset(cls_105b41d0 *param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = param_1->field_0x0;
  if (iVar1 == param_2) {
    (((vtbl_entry*)(param_1->field_0x8))[6].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x8))[6].adj,iVar1);
    uVar2 = 1;
  }
  else if (iVar1 + 200 == param_2) {
    (((vtbl_entry*)(param_1->field_0x8))[7].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x8))[7].adj,iVar1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
