/* @k10d init_three_buffer_pools @ 0x10514ecc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 273_ae_register_writer (unit names are model-proposed)
 * purpose:
 *   Initializes three buffer pool structures by allocating and assigning memory blocks to
 *   their sub-objects.
 * summary:
 *   The function waits for a condition, allocates a temporary array of 7 object pointers,
 *   and iterates through them to call virtual methods (likely 'init' or 'attach') on 5 sub-
 *   objects per entry. It then copies configuration data from the first entry to the main
 *   structure, releases any existing memory blocks, allocates new blocks from a system heap
 *   pool, and assigns them to the sub-objects via virtual calls. Finally, it initializes
 *   three specific pool structures (at offsets 0x78, 0xf8, 0x178) and sets a flag if all
 *   succeed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051516e) overlaps instruction at (ram,0x1051516c)
    */

uint32_t init_three_buffer_pools(int param_1,uint8_t *param_2,void *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  uint32_t uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_24;
  uint32_t uStack_14;
  int iStack_10;
  
  iVar4 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
  while (iVar4 != 0) {
    check_kernel_call_success_10459fea();
    iVar4 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
  }
  piVar5 = (int *)heap_alloc_2(0xa4);
  (*(code *)0x10513608/*ROM*/)(*(uint32_t *)(param_1 + 0x58),piVar5);
  iStack_24 = 7;
  iVar4 = 0;
  do {
    iVar8 = *(int *)(*(int *)((int)piVar5 + iVar4) + 0x8d4);
    (((vtbl_entry*)(iVar8))[13].fn)
              (*(int *)((int)piVar5 + iVar4) + (int)((vtbl_entry*)(iVar8))[13].adj,param_3);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 4);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[13].fn)(iVar8 + ((vtbl_entry*)(iVar9))[13].adj,param_3);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 8);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[13].fn)(iVar8 + ((vtbl_entry*)(iVar9))[13].adj,param_3);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 0xc);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[13].fn)(iVar8 + ((vtbl_entry*)(iVar9))[13].adj,param_3);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 0x10);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[13].fn)(iVar8 + ((vtbl_entry*)(iVar9))[13].adj,param_3);
    iVar4 = iVar4 + 0x14;
    iStack_24 = iStack_24 + -1;
  } while (-1 < iStack_24);
  *(uint32_t *)(param_1 + 0x2a0) = *(uint32_t *)(*piVar5 + 0x60);
  *(uint32_t *)(param_1 + 0x2a4) = *(uint32_t *)(*piVar5 + 100);
  *(uint32_t *)(param_1 + 0x2a8) = *(uint32_t *)(*piVar5 + 0x68);
  *(uint32_t *)(param_1 + 0x2ac) = *(uint32_t *)(*piVar5 + 0x6c);
  *(uint32_t *)(param_1 + 0x2b0) = *(uint32_t *)(*piVar5 + 0x74);
  *(uint32_t *)(param_1 + 0x2b4) = *(uint32_t *)(*piVar5 + 0x78);
  iVar8 = 7;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)((int)piVar5 + iVar4) + 0x4c) != 0) {
      pvVar6 = (void *)get_system_heap();
      mempool_release_block(pvVar6,*(void **)(*(int *)((int)piVar5 + iVar4) + 0x4c));
      iVar9 = *(int *)(*(int *)((int)piVar5 + iVar4) + 0x8d4);
      (((vtbl_entry*)(iVar9))[8].fn)(*(int *)((int)piVar5 + iVar4) + (int)((vtbl_entry*)(iVar9))[8].adj,0);
    }
    iVar9 = iVar4 + 4;
    if (*(int *)(*(int *)((int)piVar5 + iVar9) + 0x4c) != 0) {
      pvVar6 = (void *)get_system_heap();
      mempool_release_block(pvVar6,*(void **)(*(int *)((int)piVar5 + iVar9) + 0x4c));
      iVar10 = *(int *)(*(int *)((int)piVar5 + iVar9) + 0x8d4);
      (((vtbl_entry*)(iVar10))[8].fn)(*(int *)((int)piVar5 + iVar9) + (int)((vtbl_entry*)(iVar10))[8].adj,0)
      ;
    }
    iVar9 = iVar4 + 8;
    if (*(int *)(*(int *)((int)piVar5 + iVar9) + 0x4c) != 0) {
      pvVar6 = (void *)get_system_heap();
      mempool_release_block(pvVar6,*(void **)(*(int *)((int)piVar5 + iVar9) + 0x4c));
      iVar10 = *(int *)(*(int *)((int)piVar5 + iVar9) + 0x8d4);
      (((vtbl_entry*)(iVar10))[8].fn)(*(int *)((int)piVar5 + iVar9) + (int)((vtbl_entry*)(iVar10))[8].adj,0)
      ;
    }
    iVar9 = iVar4 + 0xc;
    if (*(int *)(*(int *)((int)piVar5 + iVar9) + 0x4c) != 0) {
      pvVar6 = (void *)get_system_heap();
      mempool_release_block(pvVar6,*(void **)(*(int *)((int)piVar5 + iVar9) + 0x4c));
      iVar10 = *(int *)(*(int *)((int)piVar5 + iVar9) + 0x8d4);
      (((vtbl_entry*)(iVar10))[8].fn)(*(int *)((int)piVar5 + iVar9) + (int)((vtbl_entry*)(iVar10))[8].adj,0)
      ;
    }
    iVar9 = iVar4 + 0x10;
    if (*(int *)(*(int *)((int)piVar5 + iVar9) + 0x4c) != 0) {
      pvVar6 = (void *)get_system_heap();
      mempool_release_block(pvVar6,*(void **)(*(int *)((int)piVar5 + iVar9) + 0x4c));
      iVar10 = *(int *)(*(int *)((int)piVar5 + iVar9) + 0x8d4);
      (((vtbl_entry*)(iVar10))[8].fn)(*(int *)((int)piVar5 + iVar9) + (int)((vtbl_entry*)(iVar10))[8].adj,0)
      ;
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) break;
    iVar4 = iVar4 + 0x14;
  }
  iStack_10 = 7;
  iVar4 = 0;
  do {
    pvVar6 = (void *)get_system_heap();
    uVar7 = mempool_get_block(pvVar6,*(void **)(param_1 + 0x2a8),0);
    iVar8 = *(int *)(*(int *)((int)piVar5 + iVar4) + 0x8d4);
    (((vtbl_entry*)(iVar8))[8].fn)(*(int *)((int)piVar5 + iVar4) + (int)((vtbl_entry*)(iVar8))[8].adj,uVar7)
    ;
    pvVar6 = (void *)get_system_heap();
    uVar7 = mempool_get_block(pvVar6,*(void **)(param_1 + 0x2a8),0);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 4);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[8].fn)(iVar8 + ((vtbl_entry*)(iVar9))[8].adj,uVar7);
    pvVar6 = (void *)get_system_heap();
    uVar7 = mempool_get_block(pvVar6,*(void **)(param_1 + 0x2a8),0);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 8);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[8].fn)(iVar8 + ((vtbl_entry*)(iVar9))[8].adj,uVar7);
    pvVar6 = (void *)get_system_heap();
    uVar7 = mempool_get_block(pvVar6,*(void **)(param_1 + 0x2a8),0);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 0xc);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[8].fn)(iVar8 + ((vtbl_entry*)(iVar9))[8].adj,uVar7);
    pvVar6 = (void *)get_system_heap();
    uVar7 = mempool_get_block(pvVar6,*(void **)(param_1 + 0x2a8),0);
    iVar8 = *(int *)((int)piVar5 + iVar4 + 0x10);
    iVar9 = *(int *)(iVar8 + 0x8d4);
    (((vtbl_entry*)(iVar9))[8].fn)(iVar8 + ((vtbl_entry*)(iVar9))[8].adj,uVar7);
    iVar4 = iVar4 + 0x14;
    iStack_10 = iStack_10 + -1;
  } while (-1 < iStack_10);
  heap_free_2((int)piVar5);
  iVar10 = param_1 + 0x78;
  call_helper_on_five_slots(iVar10);
  iVar4 = param_1 + 0xf8;
  call_helper_on_five_slots(__frv_reg_unset(4));
  iVar8 = param_1 + 0x178;
  call_helper_on_five_slots(__frv_reg_unset(4));
  bVar1 = true;
  *(uint8_t *)(param_1 + 0x70) = *param_2;
  *(uint32_t *)(param_1 + 0xf4) = *(uint32_t *)(param_2 + 4);
  *(uint32_t *)(param_1 + 0x174) = *(uint32_t *)(param_2 + 8);
  *(uint32_t *)(param_1 + 500) = *(uint32_t *)(param_2 + 0xc);
  *(uint32_t *)(param_1 + 0xf0) = *(uint32_t *)(param_1 + 0x2a4);
  *(uint32_t *)(param_1 + 0x170) = *(uint32_t *)(param_1 + 0x2ac);
  *(uint32_t *)(param_1 + 0x1f0) = *(uint32_t *)(param_1 + 0x2b0);
  *(uint32_t *)(param_1 + 0x74) = 0;
  uStack_14 = 1;
  bVar2 = true;
  bVar3 = true;
  iVar9 = (*(code *)0x10516a20/*ROM*/)(iVar10);
  if ((iVar9 != 0) && (iVar9 = fill_array_with_source_value(iVar10), iVar9 == 0)) {
    bVar1 = false;
  }
  iVar9 = (*(code *)0x10516a20/*ROM*/)(iVar4);
  if ((iVar9 != 0) && (iVar9 = fill_array_with_source_value(iVar4), iVar9 == 0)) {
    bVar2 = false;
  }
  iVar9 = (*(code *)0x10516a20/*ROM*/)(iVar8);
  if ((iVar9 != 0) && (iVar9 = fill_array_with_source_value(iVar8), iVar9 == 0)) {
    bVar3 = false;
  }
  if (((bVar1) && (bVar2)) && (bVar3)) {
    set_flg_obj((uint32_t *)(param_1 + 0x34c));
  }
  else {
    call_helper_on_five_slots(iVar10);
    call_helper_on_five_slots(iVar4);
    call_helper_on_five_slots(iVar8);
    uStack_14 = 0;
  }
  return uStack_14;
}
