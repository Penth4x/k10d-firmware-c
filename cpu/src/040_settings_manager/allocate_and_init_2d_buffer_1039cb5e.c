/* @k10d allocate_and_init_2d_buffer_1039cb5e @ 0x1039cb5e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 2D buffer of param_4 x param_5 elements and initializes it via a virtual
 *   call.
 * summary:
 *   Calculates row and column offsets based on param_4 and param_5 using a 0x18 (24) byte
 *   stride. Calls app_obj_factory to allocate memory, then iterate_and_remove_list_entry to
 *   set up the buffer structure. Finally, invokes a virtual method (slot 1) on the
 *   allocated object to perform initialization. Returns the pointer to the allocated
 *   buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_2d_buffer_1039cb5e(int param_1,int param_2,void *param_3,int param_4,int param_5)

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
