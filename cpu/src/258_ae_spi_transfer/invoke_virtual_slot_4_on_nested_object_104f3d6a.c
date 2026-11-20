/* @k10d invoke_virtual_slot_4_on_nested_object_104f3d6a @ 0x104f3d6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105c3a34": ignoring multiple overlapping fields */

void invoke_virtual_slot_4_on_nested_object_104f3d6a(cls_105c3a34 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x14 + 4);
  (((vtbl_entry*)(iVar1))[4].fn)
            (param_1->field_0x14 + 4 + (int)((vtbl_entry*)(iVar1))[4].adj,&param_1->field_0x4);
  return;
}
