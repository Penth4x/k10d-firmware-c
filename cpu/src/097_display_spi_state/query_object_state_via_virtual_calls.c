/* @k10d query_object_state_via_virtual_calls @ 0x1041bbf8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void query_object_state_via_virtual_calls(cls_1059d1d8 *param_1,uint *param_2,uint32_t *param_3,uint32_t *param_4)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar2))[32].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[32].adj,1);
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar2))[31].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[31].adj);
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[34].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[34].adj,1);
  *param_3 = uVar1;
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[34].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[34].adj,0);
  *param_4 = uVar1;
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  iVar2 = (((vtbl_entry*)(iVar2))[33].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[33].adj);
  *param_2 = (uint)(iVar2 != 0);
  iVar2 = *(int *)(param_1->field_0x2c + 4);
  (((vtbl_entry*)(iVar2))[32].fn)(param_1->field_0x2c + (int)((vtbl_entry*)(iVar2))[32].adj,0);
  return;
}
