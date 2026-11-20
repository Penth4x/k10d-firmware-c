/* @k10d configure_menu_item_states_103b0e74 @ 0x103b0e74
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object retrieved from param_1+8, checking a state flag
 *   from param_1+0x28 to conditionally call a cleanup routine.
 * summary:
 *   The function retrieves an object pointer from param_1+8 via menu_item_register and
 *   calls its virtual slot 2 (offset 0xc in vtable) with arguments 0 and 1. It checks the
 *   return value of query_object_property_byte_104f2294 on param_1+0x28; if the result is
 *   not 1, it calls read_setting_by_id on param_1+0x28 and repeats the virtual call with
 *   argument 1. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_menu_item_states_103b0e74(void *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  select_setting_id_by_probe(*(uint32_t *)((int)param_1 + 0x28));
  iVar3 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = query_object_property_byte_104f2294(*(uint32_t *)((int)param_1 + 0x28));
  if ((iVar2 != 0) && (iVar2 == 1)) {
    bVar1 = true;
  }
  iVar2 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  if (!bVar1) {
    read_setting_by_id(*(uint32_t *)((int)param_1 + 0x28));
    iVar2 = menu_item_register(iVar3);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
