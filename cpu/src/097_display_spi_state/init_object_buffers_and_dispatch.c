/* @k10d init_object_buffers_and_dispatch @ 0x10418c94
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_buffers_and_dispatch(int param_1, uint32_t param_x1)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint32_t uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  uint32_t uStack_c;
  
  uStack_c = 0;
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar1 = param_1 + 0x1588 + iVar3;
      if ((*(char *)(iVar1 + 4) != '\0') && (*(char *)(iVar1 + 5) == '\0')) {
        puVar2 = (uint32_t *)(param_1 + 0x1588 + iVar4 * 8);
        *(uint32_t *)(param_1 + 0x84) = *puVar2;
        *(uint8_t *)((int)puVar2 + 5) = 1;
        **(int **)(param_1 + 0x84) = param_1 + 0x40;
        break;
      }
      iVar3 = iVar3 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar3 < 0x48);
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    if (*(int *)(param_1 + 0x1568) == 0) {
      call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
      pvVar5 = (void *)get_system_heap();
      uVar6 = mempool_get_block(pvVar5,*(void **)(*(int *)(param_1 + 0x84) + 0x74),0);
      *(uint32_t *)(param_1 + 0x1568) = uVar6;
      check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
    }
    if (*(int *)(param_1 + 0x156c) == 0) {
      call_kernel_with_short_id((uint32_t *)(param_1 + 0x1550));
      pvVar5 = (void *)get_system_heap();
      uVar6 = mempool_get_block(pvVar5,*(void **)(*(int *)(param_1 + 0x84) + 100),0);
      *(uint32_t *)(param_1 + 0x156c) = uVar6;
      check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x1550));
    }
    if ((*(int *)(param_1 + 0x1568) != 0) && (*(int *)(param_1 + 0x156c) != 0)) {
      pvVar5 = *(void **)(*(int *)(param_1 + 0x84) + 100);
      if (*(int *)(*(int *)(param_1 + 0x84) + 0x34) == 0) {
        puVar2 = (uint32_t *)(param_1 + 0x1550);
        call_kernel_with_short_id(puVar2);
        pvVar7 = (void *)get_system_heap();
        pvVar7 = (void *)mempool_get_block(pvVar7,pvVar5,0);
        pvVar8 = (void *)get_system_heap();
        pvVar8 = (void *)mempool_get_block(pvVar8,pvVar5,0);
        pvVar9 = (void *)get_system_heap();
        pvVar5 = (void *)mempool_get_block(pvVar9,pvVar5,0);
        check_kernel_call_success_10459d88(puVar2);
        if (((pvVar7 == 0) || (pvVar8 == 0)) || (pvVar5 == 0)) {
          call_kernel_with_short_id(puVar2);
          if (pvVar7 != 0) {
            pvVar9 = (void *)get_system_heap();
            mempool_release_block(pvVar9,pvVar7);
          }
          if (pvVar8 != 0) {
            pvVar7 = (void *)get_system_heap();
            mempool_release_block(pvVar7,pvVar8);
          }
          if (pvVar5 != 0) {
            pvVar7 = (void *)get_system_heap();
            mempool_release_block(pvVar7,pvVar5);
          }
          check_kernel_call_success_10459d88(puVar2);
          uStack_c = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
          (((vtbl_entry*)(iVar3))[2].fn)
                    (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[2].adj,pvVar7);
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
          (((vtbl_entry*)(iVar3))[4].fn)
                    (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[4].adj,pvVar8);
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
          (((vtbl_entry*)(iVar3))[3].fn)
                    (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[3].adj,pvVar5);
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
          (((vtbl_entry*)(iVar3))[6].fn)
                    (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[6].adj,
                     *(uint32_t *)(param_1 + 0x156c));
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
          (((vtbl_entry*)(iVar3))[10].fn)
                    (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[10].adj,
                     *(uint32_t *)(param_1 + 0x1568));
          iVar3 = *(int *)(*(int *)(param_1 + 0x84) + 0x8d4);
          (((vtbl_entry*)(iVar3))[11].fn)
                    (*(int *)(param_1 + 0x84) + (int)((vtbl_entry*)(iVar3))[11].adj,
                     *(uint32_t *)(param_1 + 0x98));
          uStack_c = 1;
        }
      }
      else {
        uStack_c = 1;
      }
    }
  }
  return uStack_c;
}
