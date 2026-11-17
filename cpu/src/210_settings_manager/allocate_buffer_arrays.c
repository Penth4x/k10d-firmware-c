/* @k10d allocate_buffer_arrays @ 0x104ab44e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_buffer_arrays(void *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  uVar1 = 0;
  if ((*(byte *)((int)param_1 + 0x14) < 3) && (*(byte *)((int)param_1 + 0x15) < 4)) {
    uVar1 = heap_alloc_2((uint)*(byte *)((int)param_1 + 0x14) << 2);
    *(uint32_t *)((int)param_1 + 0x1c) = uVar1;
    uVar1 = heap_alloc_2((uint)*(byte *)((int)param_1 + 0x15) << 2);
    *(uint32_t *)((int)param_1 + 0x20) = uVar1;
    puVar2 = (uint32_t *)heap_alloc_2(0x14);
    *(uint32_t **)((int)param_1 + 0x50) = puVar2;
    *puVar2 = *(uint32_t *)((int)param_1 + 0x3c);
    *(uint32_t *)(*(int *)((int)param_1 + 0x50) + 4) = *(uint32_t *)((int)param_1 + 0x40);
    *(uint32_t *)(*(int *)((int)param_1 + 0x50) + 8) = *(uint32_t *)((int)param_1 + 0x44);
    *(uint32_t *)(*(int *)((int)param_1 + 0x50) + 0xc) = *(uint32_t *)((int)param_1 + 0x48);
    *(uint32_t *)(*(int *)((int)param_1 + 0x50) + 0x10) = *(uint32_t *)((int)param_1 + 0x4c);
    uVar1 = 1;
  }
  return uVar1;
}
