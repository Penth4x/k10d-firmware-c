/* @k10d allocate_and_init_object_entry @ 0x1039c8d8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an object entry, optionally initializes it, links it into a list, and calls a
 *   virtual method.
 * summary:
 *   The function calculates an offset based on param_5 and calls app_obj_factory to
 *   allocate or retrieve an object pointer. If param_7 is non-zero, it calls
 *   call_helper_and_set_flag_104b7726 to initialize the object at a specific offset. It
 *   then calls iterate_and_remove_list_entry to link the new object into a structure
 *   pointed to by param_2. Finally, it invokes a virtual method (slot 2) on the object with
 *   param_6 as an argument and returns the object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_object_entry(int param_1,int param_2,void *param_3,short param_4,int param_5,uint8_t param_6,
                int param_7,short param_8)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar1 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)((param_4 + -1) * 0x18 + 0x20),(void *)__frv_reg_unset(7));
  if (param_7 != 0) {
    call_helper_and_set_flag_104b7726(pvVar1,param_8 * 0x18, __frv_reg_unset(6));
  }
  iterate_and_remove_list_entry((void *)param_2,pvVar1,(void *)param_7,pvVar2);
  (((vtbl_entry*)(*(int *)((int)pvVar1 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar1 + 0xc) + 8) + (int)pvVar1,param_6);
  return (int)pvVar1;
}
