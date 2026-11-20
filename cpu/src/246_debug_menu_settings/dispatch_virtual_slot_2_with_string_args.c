/* @k10d dispatch_virtual_slot_2_with_string_args @ 0x104d8f92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 2 of an object obtained from
 *   get_or_create_singleton_object_104d9012, passing two string pointers and a third
 *   parameter.
 * summary:
 *   The function first calls append_string_to_buffer with param_2 and a ROM address
 *   (0x105ba3a4). It then retrieves an object pointer from
 *   get_or_create_singleton_object_104d9012 and invokes virtual method slot 2 (offset 0x1c
 *   in the vtable) on that object, passing param_2 and param_3 as arguments. Finally, it
 *   calls append_string_to_buffer again with param_2 and a different ROM address
 *   (0x105ba3d4). The specific roles of the callees and the object are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_slot_2_with_string_args(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  
  append_string_to_buffer((int *)(param_2),(char *)(0x105ba3a4/*ROM*/));
  iVar1 = get_or_create_singleton_object_104d9012();
  (((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].fn)
            (iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0x1c)))[3].adj,param_2,param_3);
  append_string_to_buffer((int *)(param_2),(char *)(0x105ba3d4/*ROM*/));
  return;
}
