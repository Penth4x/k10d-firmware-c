/* @k10d app_obj_factory @ 0x104957de
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_object_constructor)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Selects and invokes a type-specific constructor based on a descriptor field to build an
 *   object.
 * summary:
 *   The function iterates through a list to find a matching entry, then uses a large switch
 *   statement on a type identifier (aiStack_60[6]) to call one of many per-type
 *   initialization routines (chain_two_helper_calls_10495b9c through
 *   alloc_and_init_0x14_object). It initializes a local object structure, calls a virtual
 *   method on the resulting object, and returns the pointer to the newly constructed
 *   instance.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1049588a) overlaps instruction at (ram,0x10495888)
    */
/* WARNING: Type propagation algorithm not settling */

void * app_obj_factory(int *param_1,void *param_2,void *param_3,void *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  void *extraout_r5;
  uint uVar5;
  uint32_t uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  uintptr_t sp;
  int *piVar12;
  uint64_t uVar13;
  ulonglong uVar14;
  uint8_t local_94 [8];
  int aiStack_60 [7];
  byte *pbStack_44;
  int iStack_40;
  ushort uStack_3c;
  ushort uStack_3a;
  uint8_t auStack_38 [8];
  uint32_t auStack_30 [2];
  uint32_t uStack_28;
  uint32_t auStack_24 [5];
  int iStack_10;
  int iStack_c;
  
  piVar12 = (int *)local_94;
  iStack_10 = param_1[2];
  aiStack_60[0] = iStack_10;
  iStack_c = param_1[1];
  pvVar7 = param_2;
  pvVar9 = param_3;
  pvVar8 = param_4;
  puVar1 = (uint *)0x0;
  if (iStack_10 != iStack_c) {
    piVar12 = (int *)local_94;
    do {
      uVar13 = subtract_four_from_pointer(aiStack_60);
      pvVar7 = (void *)uVar13;
      puVar1 = (uint *)*(int *)((ulonglong)uVar13 >> 0x20);
      if ((*puVar1 & 0xffff0000) == ((uint)param_2 & 0xffff0000)) break;
      pvVar9 = (void *)0x0;
      swap_first_word_and_call(auStack_38,aiStack_60);
      iStack_c = param_1[1];
      pvVar7 = extraout_r5;
      puVar1 = (uint *)0x0;
    } while (aiStack_60[0] != iStack_c);
  }
  iVar3 = 0;
  if (*puVar1 != 0) {
    iVar2 = 0;
    do {
      if (param_2 == *(void **)((int)puVar1 + iVar2)) break;
      iVar2 = iVar2 + 0x14;
      iVar3 = iVar3 + 1;
    } while (*(int *)((int)puVar1 + iVar2) != 0);
  }
  if (puVar1[iVar3 * 5] == 0) {
    console_printf(&DAT_105b511c/*ROM*/,pvVar7,pvVar9,pvVar8);
  }
  piVar10 = aiStack_60 + 1;
  *piVar12 = 0;
  uVar5 = 0;
  pvVar7 = (void *)0x0;
  pvVar9 = (void *)0x0;
  allocate_and_init_object_1045bd94(piVar10,0,0,0,*piVar12);
  uVar14 = (ulonglong)uVar5;
  iVar2 = 0x14;
  do {
    iVar11 = iVar2 + -4;
    *(uint32_t *)((int)aiStack_60 + iVar2 + 0x10) =
         *(uint32_t *)(iVar11 + (int)(puVar1 + iVar3 * 5));
    iVar2 = iVar11;
  } while (iVar11 != 0);
  switch(aiStack_60[6]) {
  case 1:
    uVar5 = (uint)pbStack_44 & 0xffff;
    uVar4 = chain_two_helper_calls_10495bd8(param_1);
    uVar14 = CONCAT44(uVar4,uVar5);
    break;
  case 2:
    uVar5 = (uint)pbStack_44 & 0xffff;
    uVar4 = chain_two_helper_calls_10495bc4(param_1);
    uVar14 = CONCAT44(uVar4,uVar5);
    break;
  case 3:
    *(ushort *)((int)piVar12 + 2) = uStack_3c;
    *(ushort *)((int)piVar12 + 6) = uStack_3a;
    uVar5 = (uint)pbStack_44 & 0xffff;
    uVar4 = chain_two_helper_calls_10495c06(param_1);
    uVar14 = CONCAT44(uVar4,uVar5);
    break;
  case 4:
    *(ushort *)((int)piVar12 + 2) = uStack_3c;
    *(ushort *)((int)piVar12 + 6) = uStack_3a;
    uVar5 = (uint)pbStack_44 & 0xffff;
    uVar4 = chain_two_helper_calls_10495c2e(param_1);
    uVar14 = CONCAT44(uVar4,uVar5);
    break;
  case 5:
    pvVar7 = (void *)(uint)uStack_3c;
    *(ushort *)((int)piVar12 + 2) = uStack_3a;
    iVar3 = allocate_and_initialize_object(param_1,param_3,param_4,pvVar7,*(ushort *)((int)piVar12 + 2));
    uVar14 = CONCAT44(iVar3,param_3);
    param_3 = param_4;
    param_4 = pvVar7;
    break;
  case 6:
    uVar4 = chain_two_helper_calls_10495bb0(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    break;
  case 7:
    uVar4 = chain_two_helper_calls_10495b9c(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    break;
  case 8:
    *(ushort *)((int)piVar12 + 2) = uStack_3c;
    *(ushort *)((int)piVar12 + 6) = uStack_3a;
    uVar5 = (uint)pbStack_44 & 0xffff;
    uVar4 = chain_two_helper_calls_10495d1a(param_1);
    uVar14 = CONCAT44(uVar4,uVar5);
    break;
  case 9:
    *(uint8_t *)((int)piVar12 + 3) = 5;
    *(uint8_t *)((int)piVar12 + 7) = 1;
    uVar4 = chain_two_helper_calls_10495cf2(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    break;
  case 10:
    uVar4 = chain_two_helper_calls_10495d48(param_1);
    uVar14 = CONCAT44(uVar4,param_3);
    param_3 = param_4;
    param_4 = pvVar9;
    break;
  case 0xb:
    *(short *)((int)piVar12 + 2) = (short)param_4;
    pvVar7 = (void *)0x7;
    param_4 = param_3;
    uVar4 = chain_two_helper_calls_10495d62(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    param_3 = pvVar7;
    break;
  case 0xc:
    *(short *)((int)piVar12 + 2) = (short)param_4;
    pvVar7 = (void *)0x7;
    param_4 = param_3;
    uVar4 = chain_two_helper_calls_10495d8a(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    param_3 = pvVar7;
    break;
  case 0xd:
    uVar4 = chain_two_helper_calls_10495bec(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    break;
  case 0xe:
    pvVar7 = (void *)alloc_two_word_pair_1045bc2e((uint32_t *)(auStack_30),(uint32_t)(param_3),(uint32_t)(param_4));
    copy_eight_bytes_1045bf68(piVar10,pvVar7);
    free_heap_block_if_flagged_1045bc54(auStack_30,2);
    param_3 = (void *)(uint)uStack_3a;
    pvVar7 = (void *)alloc_two_word_pair_1045c3dc((uint32_t *)(&uStack_28),(uint32_t)((uint)uStack_3c),(uint32_t)(param_3));
    copy_and_dispatch_two_params(piVar10,pvVar7);
    free_heap_if_flagged_1045c402(&uStack_28,2);
    iVar3 = 0x10;
    do {
      iVar2 = iVar3 + -4;
      *(uint32_t *)((int)auStack_24 + iVar3) = *(uint32_t *)((int)aiStack_60 + iVar3);
      iVar3 = iVar2;
    } while (iVar2 != 0);
    uVar4 = copy_and_dispatch_buffer(param_1,auStack_24 + 1);
    uVar6 = 2;
    destroy_text_widget(auStack_24 + 1,2);
    uVar14 = CONCAT44(uVar4,uVar6);
    param_4 = pvVar9;
    break;
  case 0xf:
    iVar3 = create_object_with_init_call_10495f06(param_1,(int)pbStack_44,param_3,param_4);
    uVar14 = CONCAT44(iVar3,pbStack_44);
    break;
  case 0x10:
    uVar5 = (uint)pbStack_44 & 0xffff;
    iVar3 = create_object_with_heap_alloc(param_1,uVar5,param_3,param_4);
    uVar14 = CONCAT44(iVar3,uVar5);
    break;
  case 0x11:
    uVar14 = (uintptr_t)(alloc_and_construct_object((uint32_t)(param_1)));
    param_3 = pvVar7;
    param_4 = pvVar9;
    break;
  case 0x12:
    iVar3 = draw_string_at(param_1,pbStack_44,param_3,param_4);
    uVar14 = CONCAT44(iVar3,pbStack_44);
    break;
  case 0x13:
    uVar14 = (uintptr_t)(allocate_and_construct_object((uint32_t)(param_1)));
    param_3 = pvVar7;
    param_4 = pvVar9;
    break;
  case 0x14:
    uVar14 = (uintptr_t)(alloc_and_init_object_1049609e((uint32_t)(param_1)));
    param_3 = pvVar7;
    param_4 = pvVar9;
    break;
  case 0x15:
    uVar14 = (uintptr_t)(alloc_and_init_0x14_object((uint32_t)(param_1)));
    param_3 = pvVar7;
    param_4 = pvVar9;
    break;
  case 0x16:
    uVar4 = chain_two_helper_calls_10495db2(param_1);
    uVar14 = CONCAT44(uVar4,pbStack_44);
    break;
  case 0x17:
    uVar5 = (uint)pbStack_44 & 0xffff;
    iVar3 = allocate_and_init_object_1049600e(param_1,uVar5,param_3,param_4);
    uVar14 = CONCAT44(iVar3,uVar5);
    break;
  default:
    param_3 = pvVar7;
    param_4 = pvVar9;
  }
  pvVar7 = (void *)(uVar14 >> 0x20);
  if (pvVar7 == 0) {
    console_printf(&DAT_105b5158/*ROM*/,(void *)uVar14,param_3,param_4);
  }
  write_field_at_offset_four_10493da0(pvVar7,aiStack_60[5]);
  if ((iStack_40 == 2) || (aiStack_60[6] == 5)) {
    (((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[27].fn)
              ((int)((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[27].adj + (int)pvVar7,
               *(uint32_t *)(*param_1 + 4));
  }
  else {
    (((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[27].fn)
              ((int)((vtbl_entry*)(*(int *)((int)pvVar7 + 0xc)))[27].adj + (int)pvVar7,
               *(uint32_t *)*param_1);
  }
  destroy_text_widget(piVar10,2);
  return pvVar7;
}
