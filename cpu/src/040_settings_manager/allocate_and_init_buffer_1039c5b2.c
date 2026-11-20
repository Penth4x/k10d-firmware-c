/* @k10d allocate_and_init_buffer_1039c5b2 @ 0x1039c5b2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a buffer via app_obj_factory, initializes it with
 *   iterate_and_remove_list_entry, and invokes a virtual method on the result.
 * summary:
 *   The function takes a pointer (param_1) and reads a value from offset 0x20 to pass to
 *   app_obj_factory along with param_3, likely allocating or retrieving a resource. It then
 *   calls iterate_and_remove_list_entry with param_2, the result of the first call, and two
 *   values derived from param_4 and param_5 (shifted left by 4). Finally, it performs a
 *   virtual function call on the object returned by app_obj_factory, specifically calling
 *   slot 2 (offset 0xc in the vtable) with an argument of 1. The function returns the
 *   pointer obtained from app_obj_factory.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_buffer_1039c5b2(int param_1,int param_2,void *param_3,uint param_4,uint param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((param_4 & 0xfff) << 4);
  pvVar1 = (void *)((param_5 & 0xfff) << 4);
  pvVar2 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar3,pvVar1);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
  return (int)pvVar2;
}
