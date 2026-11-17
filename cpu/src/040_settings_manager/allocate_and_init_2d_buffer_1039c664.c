/* @k10d allocate_and_init_2d_buffer_1039c664 @ 0x1039c664
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a 2D buffer of param_4 x param_5 elements and initializes it via a virtual
 *   call.
 * summary:
 *   Calculates row and column offsets (0x18 bytes per element) for a 2D structure. Calls
 *   app_obj_factory to allocate memory based on param_1 and param_3. Passes the allocated
 *   pointer and offsets to iterate_and_remove_list_entry. Finally, invokes a virtual method
 *   (slot 2) on the object at offset 0xc of the allocated buffer with argument 1, likely to
 *   initialize or reset the buffer contents. Returns the allocated pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int allocate_and_init_2d_buffer_1039c664(int param_1,int param_2,void *param_3,int param_4,int param_5)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)((param_4 + -1) * 0x18 + 0x20U & 0xffff);
  pvVar3 = (void *)((param_5 + -1) * 0x18 + 0x18U & 0xffff);
  pvVar2 = (void *)app_obj_factory((void *)(*(uint32_t *)(param_1 + 0x20)),param_3,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  iterate_and_remove_list_entry((void *)param_2,pvVar2,pvVar1,pvVar3);
  (**(code **)(*(int *)((int)pvVar2 + 0xc) + 0xc))
            ((int)*(short *)(*(int *)((int)pvVar2 + 0xc) + 8) + (int)pvVar2,1);
  return (int)pvVar2;
}
