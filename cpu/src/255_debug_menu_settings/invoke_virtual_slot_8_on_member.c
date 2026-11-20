/* @k10d invoke_virtual_slot_8_on_member @ 0x104ea2b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_8_on_member(cls_105c2050 *param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(uint32_t*)(param_1->field_0x14);
  uVar1 = (((vtbl_entry*)(iVar2))[8].fn)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar2))[8].adj);
  return uVar1;
}
