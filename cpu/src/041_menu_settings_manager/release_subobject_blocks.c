/* @k10d release_subobject_blocks @ 0x1039de86
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_subobject_blocks(cls_10564150 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1->field_0x60;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x60 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x64;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x64 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x68;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x68 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x70;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x70 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x7c;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x7c + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x88;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x88 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x6c;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x6c + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x74;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x74 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x78;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x78 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x90;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x90 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x80;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x80 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x84;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x84 + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x8c;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x8c + (int)((vtbl_entry*)(iVar2))[17].adj);
  iVar2 = *(int *)param_1->field_0x94;
  (((vtbl_entry*)(iVar2))[17].fn)((int)param_1->field_0x94 + (int)((vtbl_entry*)(iVar2))[17].adj);
  pvVar1 = (void *)get_system_heap();
  mempool_release_block(pvVar1,(char*)(param_1) ->field_0x98);
  return;
}
