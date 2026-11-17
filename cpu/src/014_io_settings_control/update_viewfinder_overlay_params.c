/* @k10d update_viewfinder_overlay_params @ 0x10369b8c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 014_io_settings_control (unit names are model-proposed)
 * purpose:
 *   Updates viewfinder overlay parameters based on a status code and current camera state.
 * summary:
 *   The function reads a status code from 0x800158d4 and maps it to a value (1, 5, 10, 13,
 *   or 16) stored at param_1+0x2b0. It then initializes a local structure and, depending on
 *   flags at 0x80015b08 and 0x80015d00, either calculates and writes overlay coordinates
 *   and a type via dispatch_six_param_object_ops/transform_and_store_value, or updates
 *   fields at param_1+0x74 and param_1+0x78. The use of a lookup table at 0x10557b14 and
 *   the specific parameter offsets suggest this is related to OSD (On-Screen Display) or
 *   viewfinder information rendering.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_viewfinder_overlay_params(void *param_1)

{
  uint16_t uVar1;
  uint8_t uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint32_t uVar7;
  uint32_t *puVar8;
  int iVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  uint8_t auStack_44 [8];
  uint32_t auStack_24 [3];
  uint8_t auStack_18 [16];
  
  puVar10 = auStack_44;
  iVar3 = get_setting_0xce_with_refresh((int *)0x800158d4/*SDRAM*/);
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  else if (iVar3 == 1) {
    uVar2 = 5;
  }
  else if (iVar3 == 2) {
    uVar2 = 10;
  }
  else if (iVar3 == 3) {
    uVar2 = 0xd;
  }
  else if (iVar3 == 4) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 1;
  }
  *(uint8_t *)((int)param_1 + 0x2b0) = uVar2;
  puVar8 = auStack_24 + 1;
  alloc_two_word_pair_1045c3dc(puVar8,0,0);
  if ((iRam80015b08 == 2) && (cRam80015d00 != '\0')) {
    copy_two_words_from_param2((int)auStack_18,-0x7ffea510);
    iVar3 = 8;
    do {
      iVar9 = iVar3 + -4;
      *(uint32_t *)((int)auStack_24 + iVar3) = *(uint32_t *)((int)auStack_24 + iVar3 + 8);
      iVar3 = iVar9;
    } while (iVar9 != 0);
    free_heap_if_flagged_1045c402(auStack_18,2);
    if (DAT_800043a0/*SDRAM*/ == '\0') {
      auStack_24[0] = 5;
    }
    else {
      auStack_24[0] = read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
    }
    uVar4 = return_first_word_1045c514((uint32_t *)0x80018058/*SDRAM*/);
    uVar5 = read_struct_field_at_offset_4((void *)0x80018058/*SDRAM*/);
    uVar6 = return_first_word_1045c514(puVar8);
    uVar7 = read_struct_field_at_offset_4(puVar8);
    uVar1 = *(uint16_t *)((uint)*(byte *)((int)param_1 + 0x2b0) * 2 + 0x10557b14/*ROM*/);
    *(short *)(puVar10 + 2) = (short)uVar7;
    *(uint16_t *)(puVar10 + 6) = uVar1;
    dispatch_six_param_object_ops((void *)((int)param_1 + 0x3c),uVar4 & 0xffff,uVar5 & 0xffff,uVar6 & 0xffff,
                 *(uint16_t *)(puVar10 + 2),*(uint16_t *)(puVar10 + 6));
    transform_and_store_value((void *)((int)param_1 + 0x3c),auStack_24[0]);
  }
  else {
    iVar3 = 8;
    do {
      iVar9 = iVar3 + -4;
      *(uint32_t *)((int)auStack_24 + iVar3) = *(uint32_t *)(iVar3 + -0x7ffe7fac);
      iVar3 = iVar9;
    } while (iVar9 != 0);
    uVar4 = return_first_word_1045c514(puVar8);
    *(uint *)((int)param_1 + 0x74) = uVar4 >> 1;
    uVar4 = read_struct_field_at_offset_4(puVar8);
    *(uint *)((int)param_1 + 0x78) = uVar4 >> 1;
  }
  free_heap_if_flagged_1045c402(puVar8,2);
  return;
}
