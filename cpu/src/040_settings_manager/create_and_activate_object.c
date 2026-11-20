/* @k10d create_and_activate_object @ 0x1039cb1c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Creates an object via a factory call, registers it with a manager, and invokes its
 *   virtual slot 1 with argument 1.
 * summary:
 *   The function calls app_obj_factory with a field from param_1 (offset 0x20) and param_3
 *   to obtain a new object pointer. It then passes this new object to
 *   iterate_and_remove_list_entry along with param_2 and two null pointers. Finally, it
 *   performs a virtual call on the new object, specifically invoking slot 1 (offset 0xc in
 *   the vtable) with the argument 1, likely to initialize or activate the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void create_and_activate_object(int param_1,int param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = (void *)0x0;
  pvVar3 = (void *)0x0;
  pvVar1 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar1,pvVar2,pvVar3);
  (((vtbl_entry*)(*(int *)((int)pvVar1 + 0xc)))[1].fn)
            ((int)pvVar1 + (int)*(short *)(*(int *)((int)pvVar1 + 0xc) + 8),1);
  return;
}
