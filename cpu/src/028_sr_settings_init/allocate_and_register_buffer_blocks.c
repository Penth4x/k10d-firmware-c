/* @k10d allocate_and_register_buffer_blocks @ 0x1036ff94
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 028_sr_settings_init (unit names are model-proposed)
 * purpose:
 *   Allocates one to four heap blocks based on object state and registers them via
 *   dispatch_seven_param_call.
 * summary:
 *   Checks a flag at offset 0xb4 in param_1. If zero, allocates a single block and calls
 *   dispatch_seven_param_call with count 1. If non-zero, reads four sub-objects from
 *   param_1+0x58, allocates four blocks, and calls dispatch_seven_param_call with count
 *   0xf. Finally, releases the local descriptors via free_heap_if_flagged_1045c402.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void allocate_and_register_buffer_blocks(int param_1,uint32_t *param_2,uint32_t *param_3,uint32_t *param_4,
                 uint32_t *param_5)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  uint32_t *puVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint32_t *puVar9;
  uint8_t auStack_6c [12];
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint8_t auStack_30 [4];
  uint32_t auStack_2c [7];
  uint32_t auStack_10 [2];
  
  puVar9 = (uint32_t *)auStack_6c;
  puVar8 = (uint32_t *)auStack_6c;
  if (*(int *)(param_1 + 0xb4) == 0) {
    (*(code *)0x1038e1cc/*ROM*/)(&uStack_38,param_1 + 0x30);
    puVar4 = &uStack_38;
    iVar2 = return_first_word_1045c514(puVar4);
    uVar3 = heap_alloc_2(iVar2);
    *param_2 = uVar3;
    uVar3 = return_first_word_1045c514(puVar4);
    *(short *)((int)param_2 + 6) = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar4);
    *(short *)(param_2 + 1) = (short)uVar3;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    dispatch_seven_param_call((void *)param_1,0x80015af0/*SDRAM*/,1,param_2,*puVar8,puVar8[1],puVar8[2]);
  }
  else {
    iVar5 = param_1 + 0x58;
    (*(code *)0x10408cc8/*ROM*/)(auStack_30,iVar5,0);
    iVar2 = 8;
    do {
      iVar7 = iVar2 + -4;
      *(uint32_t *)((int)auStack_2c + iVar2) = *(uint32_t *)((int)&uStack_34 + iVar2);
      iVar2 = iVar7;
    } while (iVar7 != 0);
    (*(code *)0x10408cc8/*ROM*/)(auStack_30,iVar5,1);
    iVar2 = 8;
    do {
      iVar7 = iVar2 + -4;
      *(uint32_t *)((int)auStack_2c + iVar2 + 8) = *(uint32_t *)((int)&uStack_34 + iVar2);
      iVar2 = iVar7;
    } while (iVar7 != 0);
    (*(code *)0x10408cc8/*ROM*/)(auStack_2c + 5,iVar5,2);
    (*(code *)0x10408cc8/*ROM*/)(auStack_10,iVar5,3);
    puVar4 = auStack_2c + 1;
    iVar2 = return_first_word_1045c514(puVar4);
    uVar3 = heap_alloc_2(iVar2);
    *param_2 = uVar3;
    uVar3 = return_first_word_1045c514(puVar4);
    *(short *)((int)param_2 + 6) = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar4);
    *(short *)(param_2 + 1) = (short)uVar3;
    puVar6 = auStack_2c + 3;
    iVar2 = return_first_word_1045c514(puVar6);
    uVar3 = heap_alloc_2(iVar2);
    *param_3 = uVar3;
    uVar3 = return_first_word_1045c514(puVar6);
    *(short *)((int)param_3 + 6) = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar6);
    *(short *)(param_3 + 1) = (short)uVar3;
    puVar1 = auStack_2c + 5;
    iVar2 = return_first_word_1045c514(puVar1);
    uVar3 = heap_alloc_2(iVar2);
    *param_4 = uVar3;
    uVar3 = return_first_word_1045c514(puVar1);
    *(short *)((int)param_4 + 6) = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(puVar1);
    *(short *)(param_4 + 1) = (short)uVar3;
    iVar2 = return_first_word_1045c514(auStack_10);
    uVar3 = heap_alloc_2(iVar2);
    *param_5 = uVar3;
    uVar3 = return_first_word_1045c514(auStack_10);
    *(short *)((int)param_5 + 6) = (short)uVar3;
    uVar3 = read_struct_field_at_offset_4(auStack_10);
    *(short *)(param_5 + 1) = (short)uVar3;
    *puVar9 = (uint32_t)(uintptr_t)param_3;
    puVar9[2] = (uint32_t)(uintptr_t)param_5;
    puVar9[1] = (uint32_t)(uintptr_t)param_4;
    dispatch_seven_param_call((void *)param_1,0x80015af0/*SDRAM*/,0xf,param_2,*puVar9,puVar9[1],puVar9[2]);
    free_heap_if_flagged_1045c402(auStack_10,2);
    free_heap_if_flagged_1045c402(puVar1,2);
    free_heap_if_flagged_1045c402(puVar6,2);
  }
  free_heap_if_flagged_1045c402(puVar4,2);
  return;
}
