/* @k10d allocate_and_link_heap_blocks @ 0x1052cde0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates three memory pool blocks and a large heap buffer, then links their pointers
 *   into a target object.
 * summary:
 *   The function stores the return value of construct_large_camera_object(0) at
 *   param_1+500. It allocates three blocks from the system heap via mempool_get_block,
 *   storing the pointers at param_1+0x1f8, 0x1fc, and 0x200. It allocates a 0x2050-byte
 *   buffer via heap_alloc, initializes its header with specific constants, and calls
 *   fill_byte_array to zero two 0x400-byte regions. Finally, it copies these four pointers
 *   into the object pointed to by the value at param_1+500.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_link_heap_blocks(void *param_1)

{
  uint32_t uVar1;
  void *pvVar2;
  void *pvVar3;
  uint16_t *puVar4;
  uint16_t *puVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t uStack_9;
  
  uVar1 = construct_large_camera_object(0);
  *(uint32_t *)((int)param_1 + 500) = uVar1;
  pvVar2 = (void *)get_system_heap();
  pvVar3 = (void *)return_constant_0x33(&uStack_9);
  uVar1 = mempool_get_block(pvVar2,pvVar3,0);
  *(uint32_t *)((int)param_1 + 0x1f8) = uVar1;
  pvVar2 = (void *)get_system_heap();
  pvVar3 = (void *)return_constant_0x5468(&uStack_9);
  uVar1 = mempool_get_block(pvVar2,pvVar3,0);
  *(uint32_t *)((int)param_1 + 0x1fc) = uVar1;
  pvVar2 = (void *)get_system_heap();
  pvVar3 = (void *)call_subroutine_and_return_0x2026(&uStack_9);
  uVar1 = mempool_get_block(pvVar2,pvVar3,0);
  *(uint32_t *)((int)param_1 + 0x200) = uVar1;
  puVar4 = (uint16_t *)heap_alloc((void *)0x2050);
  if (puVar4 == (uint16_t *)0x0) {
    puVar4 = (uint16_t *)0x0;
  }
  else {
    puVar5 = puVar4;
    if ((puVar4 != (uint16_t *)0x0) ||
       (puVar5 = (uint16_t *)heap_alloc((void *)0x2050), puVar5 != (uint16_t *)0x0)) {
      *puVar5 = 0x100;
      puVar5[1] = 0x100;
      puVar5[2] = 0x100;
      puVar5[3] = 0x100;
      puVar5[4] = 0x100;
      puVar5[5] = 0x100;
      puVar5[6] = 0x100;
      puVar5[7] = 0x100;
      puVar5[8] = 0;
      puVar5[9] = 0x2000;
      puVar5[10] = 0x2000;
      puVar5[0xb] = 0x2000;
      puVar5[0xc] = 0x2000;
      puVar5[0xd] = 0x2000;
      puVar5[0xe] = 0x2000;
      puVar5[0xf] = 0x2000;
      puVar5[0x10] = 0x2000;
      puVar5[0x11] = 0x2000;
      *(uint32_t *)(puVar5 + 0x12) = 0;
      *(uint32_t *)(puVar5 + 0x14) = 0;
      *(uint32_t *)(puVar5 + 0x1016) = 0;
      *(uint32_t *)(puVar5 + 0x1018) = 0;
      puVar5[0x101a] = 0;
      *(uint32_t *)(puVar5 + 0x1024) = 0;
      *(uint8_t *)(puVar5 + 0x1026) = 0;
      fill_byte_array(puVar5 + 0x16,0,0x400);
      fill_byte_array(puVar5 + 0x816,0,0x400);
    }
  }
  *(uint16_t **)((int)param_1 + 0x250) = puVar4;
  iVar6 = *(int *)((int)param_1 + 500);
  if (iVar6 != 0) {
    uVar1 = return_constant_0x33(&uStack_9);
    *(uint32_t *)(iVar6 + 0x4ec) = uVar1;
    *(uint32_t *)(*(int *)((int)param_1 + 500) + 0x4e8) = *(uint32_t *)((int)param_1 + 0x1f8);
    iVar6 = *(int *)((int)param_1 + 500);
    uVar1 = return_constant_0x5468(&uStack_9);
    *(uint32_t *)(iVar6 + 0x4fc) = uVar1;
    *(uint32_t *)(*(int *)((int)param_1 + 500) + 0x4f8) = *(uint32_t *)((int)param_1 + 0x1fc);
    iVar6 = *(int *)((int)param_1 + 500);
    uVar1 = call_subroutine_and_return_0x2026(&uStack_9);
    *(uint32_t *)(iVar6 + 0x4f4) = uVar1;
    *(uint32_t *)(*(int *)((int)param_1 + 500) + 0x4f0) = *(uint32_t *)((int)param_1 + 0x200);
    *(uint32_t *)(*(int *)((int)param_1 + 500) + 0x4c4) = *(uint32_t *)((int)param_1 + 0x250);
  }
  return;
}
