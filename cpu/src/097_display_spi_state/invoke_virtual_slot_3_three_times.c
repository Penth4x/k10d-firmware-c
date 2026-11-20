/* @k10d invoke_virtual_slot_3_three_times @ 0x1041aeba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_3_three_times(cls_1059cbf0 *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1->field_0x24 + 4);
  puVar1 = &param_1->field_0x8;
  (((vtbl_entry*)(iVar2))[4].fn)(param_1->field_0x24 + 4 + (int)((vtbl_entry*)(iVar2))[4].adj,puVar1);
  iVar2 = *(int *)(param_1->field_0x24 + 4);
  (((vtbl_entry*)(iVar2))[4].fn)(param_1->field_0x24 + 4 + (int)((vtbl_entry*)(iVar2))[4].adj,puVar1);
  iVar2 = *(int *)(param_1->field_0x24 + 4);
  (((vtbl_entry*)(iVar2))[4].fn)(param_1->field_0x24 + 4 + (int)((vtbl_entry*)(iVar2))[4].adj,puVar1);
  return;
}
