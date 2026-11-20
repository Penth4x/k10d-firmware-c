/* @k10d invoke_virtual_slot_two_on_three_objects @ 0x104e7cac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_on_three_objects(cls_105c14c8 *param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  iVar2 = *(int *)param_1->field_0x8;
  (((vtbl_entry*)(iVar2))[3].fn)
            ((void *)((int)param_1->field_0x8 + (int)((vtbl_entry*)(iVar2))[3].adj),0);
  piVar1 = (int *)get_or_create_sram_object_1039fa94();
  (((vtbl_entry*)(*piVar1))[3].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[3].adj,param_2);
  return 1;
}
