/* @k10d invoke_virtual_slot_two_with_zero_104ce38c @ 0x104ce38c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_two_with_zero_104ce38c(cls_105b9634 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1->field_0x4;
  (((vtbl_entry*)(iVar1))[3].fn)
            ((void *)((int)param_1->field_0x4 + (int)((vtbl_entry*)(iVar1))[3].adj),0);
  return 1;
}
