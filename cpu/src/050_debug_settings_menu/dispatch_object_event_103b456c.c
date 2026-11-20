/* @k10d dispatch_object_event_103b456c @ 0x103b456c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Retrieves an object from a container and invokes a virtual method on it with a single
 *   argument.
 * summary:
 *   The function reads a pointer from offset 0x28 of the input structure and a byte from
 *   offset 0x45. It calls get_setting_by_mode_flag_104f16cc and
 *   select_and_copy_string_by_index with these values, then passes the result to
 *   glyph_draw. It subsequently calls set_struct_fields_and_flag with constants 0x60 and 2.
 *   Finally, it retrieves an object via menu_item_register and performs a virtual call
 *   (slot 1) on it with argument 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_event_103b456c(void *param_1)

{
  uint32_t uVar1;
  byte *pbVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)param_1 + 0x28);
  uVar1 = get_setting_by_mode_flag_104f16cc(iVar4,(uint)*(byte *)((int)param_1 + 0x45));
  pbVar2 = (byte *)select_and_copy_string_by_index(iVar4,uVar1,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iVar4 = (int)param_1 + 8;
  pvVar3 = (void *)menu_item_register(iVar4);
  glyph_draw(pvVar3,pbVar2);
  pvVar3 = (void *)menu_item_register(iVar4);
  set_struct_fields_and_flag(pvVar3,0x60,2);
  iVar4 = menu_item_register(iVar4);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),1);
  return;
}
