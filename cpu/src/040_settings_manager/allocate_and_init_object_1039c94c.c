/* @k10d allocate_and_init_object_1039c94c @ 0x1039c94c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an object via a helper, optionally initializes it, registers it, and invokes
 *   a virtual method.
 * summary:
 *   The function calls app_obj_factory to allocate or retrieve an object pointer, passing a
 *   value from param_1+0x20 and a computed offset. If param_6 is non-zero, it calls
 *   call_helper_and_set_flag_104b7726 to initialize the object with a scaled offset. It
 *   then calls iterate_and_remove_list_entry to register or link the object, and finally
 *   invokes a virtual method (slot 1) on the object. The allocated object pointer is
 *   returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_1039c94c(int param_1,int param_2,void *param_3,short param_4,int param_5,int param_6,
                short param_7)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar1 = (void *)app_obj_factory((void *)(*(uint32_t *)(param_1 + 0x20)),param_3,(void *)((param_4 + -1) * 0x18 + 0x20),(void *)__frv_reg_unset(7));
  if (param_6 != 0) {
    call_helper_and_set_flag_104b7726(pvVar1,param_7 * 0x18, __frv_reg_unset(6));
  }
  iterate_and_remove_list_entry((void *)param_2,pvVar1,(void *)param_6,pvVar2);
  (**(code **)(*(int *)((int)pvVar1 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar1 + 0xc) + 8) + (int)pvVar1,1);
  return (int)pvVar1;
}
