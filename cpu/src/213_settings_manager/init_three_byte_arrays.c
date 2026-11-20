/* @k10d init_three_byte_arrays @ 0x104afb50
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_byte_arrays(cls_105b7994 *param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  int iVar3;
  
  puVar2 = (uint32_t *)cls_105a2af8_new((cls_105a2af8 *)0x0);
  param_1->field_0x34 = (uintptr_t)(puVar2);
  if (puVar2 != (uint32_t *)0x0) {
    wait_flg_obj(puVar2,0);
    iVar3 = heap_alloc_2((uint)param_1->field_0x38 << 2);
    param_1->field_0x3c = iVar3;
    if (iVar3 != 0) {
      iVar3 = heap_alloc_2((uint)param_1->field_0x38 << 2);
      param_1->field_0x40 = iVar3;
      if (iVar3 != 0) {
        iVar3 = heap_alloc_2((uint)param_1->field_0x38 << 2);
        param_1->field_0x44 = iVar3;
        if (iVar3 != 0) {
          uVar1 = 0;
          if (param_1->field_0x38 != 0) {
            do {
              iVar3 = uVar1 * 4;
              *(uint32_t *)(param_1->field_0x3c + iVar3) = 0;
              *(uint32_t *)(param_1->field_0x40 + iVar3) = 0;
              *(uint32_t *)(param_1->field_0x44 + iVar3) = 0;
              uVar1 = uVar1 + 1 & 0xff;
            } while (uVar1 < param_1->field_0x38);
          }
          alloc_pool_and_init_task((int *)param_1,0x12,0x2000,4);
          return 1;
        }
      }
    }
  }
  return 0;
}
