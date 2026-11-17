/* @k10d allocate_and_init_buffer_1039c6c2 @ 0x1039c6c2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a memory block based on dimensions and initializes it via a virtual call.
 * summary:
 *   Calculates two offsets (pvVar1, pvVar3) from parameters 4-7 using a stride of 0x18.
 *   Calls app_obj_factory to obtain a pointer (pvVar2), likely an allocation or object
 *   creation. Passes this pointer and the calculated offsets to
 *   iterate_and_remove_list_entry. Finally, invokes a virtual method (slot 2) on the object
 *   at offset 0xc of pvVar2 with argument 1, and returns pvVar2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_buffer_1039c6c2(int param_1,int param_2,void *param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)(((param_4 + -1) * 0x18 + 0x20U & 0xffff) + param_6 & 0xffff);
  pvVar3 = (void *)(((param_5 + -1) * 0x18 + 0x18U & 0xffff) + param_7 & 0xffff);
  pvVar2 = (void *)app_obj_factory(*(uint32_t *)(param_1 + 0x20),param_3,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar1,pvVar3);
  (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
  return (int)pvVar2;
}
