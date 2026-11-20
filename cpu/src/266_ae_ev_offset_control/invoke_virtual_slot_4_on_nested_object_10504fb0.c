/* @k10d invoke_virtual_slot_4_on_nested_object_10504fb0 @ 0x10504fb0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4f74": ignoring multiple overlapping fields */

void invoke_virtual_slot_4_on_nested_object_10504fb0(cls_105d4f74 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x1c + 4);
  (((vtbl_entry*)(iVar1))[4].fn)
            (param_1->field_0x1c + 4 + (int)((vtbl_entry*)(iVar1))[4].adj,&param_1->field_0x4);
  return;
}
