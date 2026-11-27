/* @k10d create_2d_buffer_object @ 0x1039c72c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 2D buffer object with specified dimensions and initializes it via a virtual
 *   call.
 * summary:
 *   Calculates row and column offsets based on param_4 and param_5 using a 0x18 stride.
 *   Calls app_obj_factory to allocate an object, then iterate_and_remove_list_entry to
 *   configure it with the calculated offsets. Finally, invokes a virtual method (slot 1) on
 *   the object's vtable to perform initialization with param_6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int create_2d_buffer_object(int param_1,int param_2,void *param_3,int param_4,int param_5,uint8_t param_6)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)((param_4 + -1) * 0x18 + 0x20U & 0xffff);
  pvVar3 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar2 = (void *)app_obj_factory((int *)(*(uint32_t *)(param_1 + 0x20)),(void *)(param_3),(void *)(uint32_t)param_3,(void *)(uint32_t)param_4);
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar1,pvVar3);
  (((vtbl_entry*)(*(int *)((int)pvVar2 + 0xc)))[1].fn)
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,param_6);
  return (int)pvVar2;
}
