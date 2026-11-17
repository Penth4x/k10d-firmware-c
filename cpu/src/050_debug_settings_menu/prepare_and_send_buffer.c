/* @k10d prepare_and_send_buffer @ 0x103b2106
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 050_debug_settings_menu (unit names are model-proposed)
 * purpose:
 *   Retrieves a buffer via helper calls and passes it to two output functions.
 * summary:
 *   The function reads a pointer from offset 0x28 of the input object. It calls
 *   get_setting_0xb2 and get_setting_by_mode_flag_104f16cc with this pointer, then
 *   conditionally sets a value to 8 if a byte at offset 0x48 is 0x0a. It calls
 *   select_and_copy_string_by_index to obtain a byte pointer, then calls menu_item_register
 *   with the object's offset 8 to get a target pointer. Finally, it calls glyph_draw and
 *   set_struct_fields_and_flag with this target pointer and the retrieved buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void prepare_and_send_buffer(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  byte *pbVar3;
  void *pvVar4;
  
  iVar1 = get_setting_0xb2(*(int *)((int)param_1 + 0x28));
  uVar2 = get_setting_by_mode_flag_104f16cc(*(int *)((int)param_1 + 0x28),iVar1);
  if (*(char *)((int)param_1 + 0x48) == '\n') {
    uVar2 = 8;
  }
  pbVar3 = (byte *)select_and_copy_string_by_index(*(uint32_t *)((int)param_1 + 0x28),uVar2,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  pvVar4 = (void *)menu_item_register((int)param_1 + 8);
  glyph_draw(pvVar4,pbVar3);
  pvVar4 = (void *)menu_item_register((int)param_1 + 8);
  set_struct_fields_and_flag(pvVar4,0x60,2);
  return;
}
