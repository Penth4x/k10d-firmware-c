/* @k10d allocate_and_init_2d_buffer_1039c9c0 @ 0x1039c9c0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 2D buffer based on dimensions in param_4 and param_5, then initializes it
 *   via a callee.
 * summary:
 *   Calculates row and column offsets using 0x18 (24) byte strides for param_4 and param_5.
 *   Calls app_obj_factory to allocate memory using a size from param_1+0x20 and param_3.
 *   Passes the allocated pointer and calculated offsets to iterate_and_remove_list_entry
 *   for initialization. Returns the allocated pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_2d_buffer_1039c9c0(int param_1,int param_2,void *param_3,int param_4,int param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)((param_4 + -1) * 0x18 + 0x20U & 0xffff);
  pvVar3 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar2 = (void *)app_obj_factory((void *)(*(uint32_t *)(param_1 + 0x20)),param_3,(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar1,pvVar3);
  return (int)pvVar2;
}
