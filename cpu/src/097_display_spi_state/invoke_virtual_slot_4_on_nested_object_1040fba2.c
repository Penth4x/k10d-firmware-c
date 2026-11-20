/* @k10d invoke_virtual_slot_4_on_nested_object_1040fba2 @ 0x1040fba2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_4_on_nested_object_1040fba2(cls_1059be70 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1->field_0x6c + 8);
  (((vtbl_entry*)(iVar1))[4].fn)
            (param_1->field_0x6c + 8 + (int)((vtbl_entry*)(iVar1))[4].adj,&param_1->field_0x8);
  return;
}
