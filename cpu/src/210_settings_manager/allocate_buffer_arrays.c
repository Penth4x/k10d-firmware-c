/* @k10d allocate_buffer_arrays @ 0x104ab44e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 210_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_buffer_arrays(cls_105b71d4 *param_1)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  
  uVar1 = 0;
  if (((byte)param_1->field_0x14 < 3) && ((byte)param_1->field_0x15 < 4)) {
    uVar1 = heap_alloc_2((uint)(byte)param_1->field_0x14 << 2);
    param_1->field_0x1c = uVar1;
    uVar1 = heap_alloc_2((uint)(byte)param_1->field_0x15 << 2);
    param_1->field_0x20 = uVar1;
    puVar2 = (uint32_t *)heap_alloc_2(0x14);
    param_1->field_0x50 = (uint32_t)puVar2;
    *puVar2 = param_1->field_0x3c;
    *(uint32_t *)(param_1->field_0x50 + 4) = param_1->field_0x40;
    *(uint32_t *)(param_1->field_0x50 + 8) = param_1->field_0x44;
    *(uint32_t *)(param_1->field_0x50 + 0xc) = param_1->field_0x48;
    *(uint32_t *)(param_1->field_0x50 + 0x10) = param_1->field_0x4c;
    uVar1 = 1;
  }
  return uVar1;
}
