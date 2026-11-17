/* @k10d allocate_and_init_buffer_1039c846 @ 0x1039c846
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block via app_obj_factory, passes it to
 *   iterate_and_remove_list_entry with computed offsets, and invokes a virtual method on
 *   the result.
 * summary:
 *   The function calculates two 16-bit offsets based on param_4 and param_5. It calls
 *   app_obj_factory with a field from param_1 and param_3 to obtain a pointer (pvVar2). It
 *   then calls iterate_and_remove_list_entry with param_2, the new pointer, and the
 *   calculated offsets. Finally, it performs a virtual call on an object located at offset
 *   0xc within pvVar2, passing param_6 as an argument, and returns the pointer pvVar2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_buffer_1039c846(int param_1,int param_2,void *param_3,int param_4,int param_5,uint8_t param_6)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)((param_4 + -1) * 0x18 + 0x20U & 0xffff);
  pvVar3 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar2 = (void *)app_obj_factory((void *)(*(uint32_t *)(param_1 + 0x20)),param_3,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar1,pvVar3);
  (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,param_6);
  return (int)pvVar2;
}
