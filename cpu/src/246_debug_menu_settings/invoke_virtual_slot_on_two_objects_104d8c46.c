/* @k10d invoke_virtual_slot_on_two_objects_104d8c46 @ 0x104d8c46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 on two objects obtained from
 *   get_or_create_singleton_object_104d8cbe and get_or_create_singleton_object_104d8e3e,
 *   passing param_2 and param_3.
 * summary:
 *   Retrieves two object pointers via get_or_create_singleton_object_104d8cbe and
 *   get_or_create_singleton_object_104d8e3e. For each, performs a Cfront-style virtual call
 *   to slot 3 (offset 0x1c in the vtable) with a this-adjustment from offset 0x18,
 *   forwarding param_2 and param_3. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_two_objects_104d8c46(void *param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_104d8cbe();
  (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
            (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
  iVar1 = get_or_create_singleton_object_104d8e3e();
  (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
            (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
  return;
}
