/* @k10d invoke_virtual_slot_six_10493ad4 @ 0x10493ad4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_six_10493ad4(cls_105b4dac *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)param_1->field_0x60 + 0xc);
  (((vtbl_entry*)(iVar1))[8].fn)(*(int *)param_1->field_0x60 + (int)((vtbl_entry*)(iVar1))[8].adj);
  return;
}
