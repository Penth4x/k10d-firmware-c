/* @k10d invoke_virtual_slot_13_104ea3ca @ 0x104ea3ca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_13_104ea3ca(cls_105c2050 *param_1)

{
  int iVar1;
  
  iVar1 = *(uint32_t *)(param_1->field_0x14);
  (((vtbl_entry*)(iVar1))[13].fn)((int)param_1->field_0x14 + (int)((vtbl_entry*)(iVar1))[13].adj);
  return;
}
