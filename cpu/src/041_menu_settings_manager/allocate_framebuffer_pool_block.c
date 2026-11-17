/* @k10d allocate_framebuffer_pool_block @ 0x1039d89a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a large memory pool block and initializes framebuffer-like geometry fields in
 *   the object.
 * summary:
 *   The function calls alloc_pool_and_init_task and wait_flg_obj on object sub-structures,
 *   then allocates a 0x96100-byte block from the system heap pool 0. It stores the pointer
 *   at offset 0x98 and sets up a series of offsets and dimensions (0x280, 0x1e0) at offsets
 *   0xa0-0xb8, resembling a framebuffer or buffer descriptor initialization. Finally, it
 *   calls create_kernel_object on offset 0x20 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_framebuffer_pool_block(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  
  alloc_pool_and_init_task((int *)((int)param_1 + 4),0x10,0x1000,4);
  wait_flg_obj((void *)((int)param_1 + 0xcc),0);
  pvVar1 = (void *)get_system_heap();
  uVar2 = mempool_get_block(pvVar1,(void *)0x96100,0);
  *(uint32_t *)((int)param_1 + 0x98) = uVar2;
  *(uint32_t *)((int)param_1 + 0xa0) = 2;
  *(uint32_t *)((int)param_1 + 0xa4) = *(uint32_t *)((int)param_1 + 0x98);
  *(int *)((int)param_1 + 0xa8) = *(int *)((int)param_1 + 0x98) + 0x4b000;
  *(int *)((int)param_1 + 0xac) = *(int *)((int)param_1 + 0x98) + 0x5dc00;
  *(uint16_t *)((int)param_1 + 0xb0) = 0x280;
  *(uint16_t *)((int)param_1 + 0xb2) = 0x1e0;
  *(uint16_t *)((int)param_1 + 0xb4) = 0x280;
  *(uint16_t *)((int)param_1 + 0xb6) = 0;
  *(uint16_t *)((int)param_1 + 0xb8) = 0;
  create_kernel_object((void *)((int)param_1 + 0x20));
  return 1;
}
