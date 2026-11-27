/* @k10d allocate_and_init_2d_array @ 0x1039c7e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 2D array of 0x18-byte elements and initializes it via a virtual call.
 * summary:
 *   Calculates row and column offsets based on param_4 and param_5. Calls app_obj_factory
 *   to allocate memory using a size from param_1+0x20 and param_3. Passes the allocated
 *   pointer and offsets to iterate_and_remove_list_entry, then invokes a virtual method
 *   (slot 2) on the allocated object with argument 1. Returns the allocated pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_2d_array(int param_1,int param_2,void *param_3,int param_4,int param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)((param_4 + -1) * 0x18 + 0x20U & 0xffff);
  pvVar3 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar2 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar1,pvVar3);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
  return (int)pvVar2;
}
