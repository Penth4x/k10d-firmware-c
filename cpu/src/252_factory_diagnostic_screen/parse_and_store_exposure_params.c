/* @k10d parse_and_store_exposure_params @ 0x104e33ec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e345c) overlaps instruction at (ram,0x104e345a)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t parse_and_store_exposure_params(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  uint16_t uVar3;
  byte bVar4;
  uint32_t uVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t *puVar7;
  uint8_t auStack_16c [16];
  uint8_t auStack_140 [255];
  char acStack_41 [20];
  uint8_t auStack_2d [13];
  uint16_t auStack_20 [3];
  uint8_t auStack_19 [17];
  
  puVar7 = auStack_16c;
  fill_byte_array(auStack_140,0,0x100);
  (**(code **)(*(int *)(param_1 + 0x18) + 0x5c))
            (*(short *)(*(int *)(param_1 + 0x18) + 0x58) + param_1,auStack_140);
  pcVar1 = acStack_41 + 1;
  cls_105ab468_new((uint8_t *)__frv_reg_unset(4));
  iVar2 = call_with_offset_lock_1048101c(*(void **)(param_1 + 8),auStack_140,pcVar1);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar7[3] = 0;
    puVar7[7] = 0;
    puVar7[0xb] = 0;
    puVar7[0xf] = 0;
    alloc_and_init_small_struct_1045c524(auStack_20,(uint)_DAT_105a5c18/*ROM*/,1,1,puVar7[3],puVar7[7],puVar7[0xb],puVar7[0xf]);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -1;
      auStack_19[iVar2 + 8] = auStack_2d[iVar2];
      iVar2 = iVar6;
    } while (iVar6 != 0);
    iVar2 = 8;
    do {
      iVar6 = iVar2 + -1;
      auStack_19[iVar2] = auStack_19[iVar2 + 8];
      iVar2 = iVar6;
    } while (iVar6 != 0);
    copy_eight_bytes_1045c584(auStack_20,(uint16_t *)((int)auStack_19 + 1U));
    free_heap_if_flag_set_1045c56c((void *)((int)auStack_19 + 1U),2);
    uVar3 = read_first_word_1045c66c(auStack_20);
    *(uint16_t *)(param_2 + 0x2aa) = uVar3;
    bVar4 = read_byte_at_offset_two(auStack_20);
    *(ushort *)(param_2 + 0x2ac) = (ushort)bVar4;
    bVar4 = read_byte_at_offset_three(auStack_20);
    *(ushort *)(param_2 + 0x2ae) = (ushort)bVar4;
    bVar4 = read_byte_at_offset_5(auStack_20);
    *(ushort *)(param_2 + 0x2b0) = (ushort)bVar4;
    bVar4 = read_byte_at_offset_six(auStack_20);
    *(ushort *)(param_2 + 0x2b2) = (ushort)bVar4;
    bVar4 = read_byte_at_offset_seven(auStack_20);
    *(ushort *)(param_2 + 0x2b4) = (ushort)bVar4;
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x18);
    iVar2 = (**(code **)(iVar2 + 0x54))(*(int *)(param_1 + 0x10) + (int)*(short *)(iVar2 + 0x50));
    if (iVar2 == 100) {
      *(uint32_t *)(param_2 + 0x2e0) = 0;
    }
    else {
      *(int *)(param_2 + 0x2e0) = iVar2;
    }
    iVar2 = count_string_bytes(acStack_41 + 1);
    iVar2 = iVar2 + 1;
    iVar6 = *(int *)(param_2 + 0x224);
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(char *)(iVar2 + iVar6) = (acStack_41 + 1)[iVar2];
    }
    uVar5 = (**(code **)(*(int *)(param_1 + 0x18) + 100))
                      (*(short *)(*(int *)(param_1 + 0x18) + 0x60) + param_1,auStack_140,pcVar1,
                       param_2);
    free_heap_if_flag_set_1045c56c(auStack_20,2);
  }
  cls_105ab468_delete(pcVar1,2);
  return uVar5;
}
