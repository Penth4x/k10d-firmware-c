/* @k10d create_and_init_object_with_coords @ 0x1039c602
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an object via app_obj_factory, initializes it with
 *   iterate_and_remove_list_entry using scaled coordinates, and invokes a virtual method.
 * summary:
 *   The function takes two 12-bit values from param_4 and param_5, left-shifts them by 4 to
 *   create scaled offsets. It calls app_obj_factory with a field from param_1 (offset 0x20)
 *   and param_3 to obtain a pointer (pvVar2). It then calls iterate_and_remove_list_entry
 *   with param_2, the new pointer, and the scaled offsets. Finally, it performs a virtual
 *   call on the object at offset 0xc (slot 1) passing param_6, and returns the new object
 *   pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_and_init_object_with_coords(int param_1,int param_2,void *param_3,uint param_4,uint param_5,uint8_t param_6)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((param_4 & 0xfff) << 4);
  pvVar1 = (void *)((param_5 & 0xfff) << 4);
  pvVar2 = (void *)app_obj_factory((void *)(*(uint32_t *)(param_1 + 0x20)),param_3,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar3,pvVar1);
  (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,param_6);
  return (int)pvVar2;
}
