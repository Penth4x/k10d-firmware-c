/* @k10d init_object_with_five_members @ 0x10481720
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_five_members(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  char cVar8;
  uintptr_t sp;
  char acStack_1a [2];
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  piVar1 = (int *)cls_105ab5a8_new(0,1);
  *(int **)((int)param_1 + 4) = piVar1;
  (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  if (0 < iRam105ab504) {
    cVar8 = 'C';
    iVar5 = 0;
    do {
      pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
      iVar3 = read_table_entry_field(pvVar2,*(int *)(iVar5 + 0x105ab504/*ROM*/));
      acStack_1a[1] = 0;
      acStack_1a[0] = cVar8;
      append_entry_to_list(*(void **)((int)param_1 + 4),iVar3,acStack_1a);
      if (*(int *)((int)param_1 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)param_1 + 4) + 4;
      }
      cVar8 = cVar8 + '\x01';
      (((vtbl_entry*)(*(int *)(iVar3 + 8)))[3].fn)
                (iVar3 + 8 + (int)((vtbl_entry*)(*(int *)(iVar3 + 8)))[3].adj,iVar6,0);
      piVar1 = (int *)(iVar5 + 0x105ab508/*ROM*/);
      iVar5 = iVar5 + 4;
    } while (0 < *piVar1);
  }
  uVar4 = (uint32_t)(cls_105aafd8_new(0));
  *(uint32_t *)((int)param_1 + 8) = uVar4;
  iVar5 = get_or_create_singleton_object_1046d20c();
  uVar7 = *(uint32_t *)(iVar5 + 4);
  pvVar2 = (void *)get_or_init_sram_buffer_104277bc();
  uVar4 = read_table_entry_field(pvVar2,0xcd);
  alloc_and_zero_small_struct_10480920(&uStack_18);
  uStack_18 = *(uint32_t *)((int)param_1 + 4);
  iVar5 = **(int **)((int)param_1 + 8);
  uStack_14 = uVar7;
  uStack_10 = uVar4;
  (((vtbl_entry*)(iVar5))[2].fn)
            ((int)*(int **)((int)param_1 + 8) + (int)((vtbl_entry*)(iVar5))[2].adj,&uStack_18);
  iVar5 = (uint32_t)(cls_105ab47c_new(0));
  *(int *)((int)param_1 + 0xc) = iVar5;
  *(uint32_t *)(iVar5 + 8) = *(uint32_t *)((int)param_1 + 8);
  iVar5 = **(int **)((int)param_1 + 0xc);
  (((vtbl_entry*)(iVar5))[2].fn)((int)*(int **)((int)param_1 + 0xc) + (int)((vtbl_entry*)(iVar5))[2].adj,0);
  uVar4 = (uint32_t)(cls_105ab560_new(0));
  *(uint32_t *)((int)param_1 + 0x10) = uVar4;
  uStack_c = *(uint32_t *)((int)param_1 + 4);
  iVar5 = **(int **)((int)param_1 + 0x10);
  (((vtbl_entry*)(iVar5))[2].fn)
            ((int)*(int **)((int)param_1 + 0x10) + (int)((vtbl_entry*)(iVar5))[2].adj,&uStack_c);
  piVar1 = (int *)cls_105ab720_new(0);
  *(int **)((int)param_1 + 0x14) = piVar1;
  uVar4 = (((vtbl_entry*)(*piVar1))[2].fn)((int)piVar1 + (int)((vtbl_entry*)(*piVar1))[2].adj,0);
  free_heap_block_if_flagged_10480944(&uStack_18,2);
  return uVar4;
}
