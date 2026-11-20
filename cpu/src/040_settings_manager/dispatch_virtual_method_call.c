/* @k10d dispatch_virtual_method_call @ 0x1039cad0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resolves a virtual method from an object and invokes it with a single integer argument.
 * summary:
 *   The function extracts two 16-bit values from param_4 and param_5. It calls
 *   app_obj_factory using a field at offset 0x20 of param_1 and param_3 to obtain an object
 *   pointer. It then calls iterate_and_remove_list_entry with param_2, the object pointer,
 *   and the extracted values. Finally, it performs a virtual call on the object,
 *   specifically invoking slot 2 (offset 0xc in the vtable) with an argument of 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_call(int param_1,int param_2,void *param_3,uint param_4,uint param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)(param_4 & 0xffff);
  pvVar1 = (void *)(param_5 & 0xffff);
  pvVar2 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar3,pvVar1);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8),1);
  return;
}
