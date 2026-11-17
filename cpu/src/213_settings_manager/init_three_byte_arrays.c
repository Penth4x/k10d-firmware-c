/* @k10d init_three_byte_arrays @ 0x104afb50
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_byte_arrays(int *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  pvVar2 = (void *)cls_105a2af8_new((uint32_t *)0x0);
  param_1[0xd] = (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    wait_flg_obj(pvVar2,0);
    iVar3 = heap_alloc_2((uint)*(byte *)(param_1 + 0xe) << 2);
    param_1[0xf] = iVar3;
    if (iVar3 != 0) {
      iVar3 = heap_alloc_2((uint)*(byte *)(param_1 + 0xe) << 2);
      param_1[0x10] = iVar3;
      if (iVar3 != 0) {
        iVar3 = heap_alloc_2((uint)*(byte *)(param_1 + 0xe) << 2);
        param_1[0x11] = iVar3;
        if (iVar3 != 0) {
          uVar1 = 0;
          if (*(char *)(param_1 + 0xe) != '\0') {
            do {
              iVar3 = uVar1 * 4;
              *(uint32_t *)(param_1[0xf] + iVar3) = 0;
              *(uint32_t *)(param_1[0x10] + iVar3) = 0;
              *(uint32_t *)(param_1[0x11] + iVar3) = 0;
              uVar1 = uVar1 + 1 & 0xff;
            } while (uVar1 < *(byte *)(param_1 + 0xe));
          }
          alloc_pool_and_init_task(param_1,0x12,0x2000,4);
          return 1;
        }
      }
    }
  }
  return 0;
}
