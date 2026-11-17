/* @k10d compute_two_normalized_ratios @ 0x1041d59a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041d5b0) overlaps instruction at (ram,0x1041d5ae)
    */

void compute_two_normalized_ratios(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int iStack_a8;
  int iStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int iStack_98;
  int iStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  uint16_t uStack_88;
  uint16_t uStack_86;
  uint16_t uStack_84;
  uint16_t uStack_82;
  int iStack_80;
  int iStack_7c;
  uint32_t uStack_78;
  uint32_t uStack_74;
  int iStack_70;
  int iStack_6c;
  uint32_t uStack_68;
  uint32_t uStack_64;
  uint16_t uStack_60;
  uint16_t uStack_5e;
  uint16_t uStack_5c;
  uint16_t uStack_5a;
  uint32_t uStack_58;
  uint32_t uStack_54;
  int iStack_50;
  int iStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  int iStack_40;
  int iStack_3c;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  int iStack_28;
  int iStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  int iStack_18;
  int iStack_14;
  uint16_t uStack_10;
  uint16_t uStack_e;
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  if ((param_3 & 0x10) != 0) {
    iVar4 = **(int **)(param_1 + 0x30);
    iVar4 = (**(code **)(iVar4 + 0x204))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar4 + 0x200));
    iVar5 = **(int **)(param_1 + 0x30);
    iVar5 = (**(code **)(iVar5 + 0x20c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar5 + 0x208));
    uVar1 = iVar4 * iVar5;
    if (param_2 == -0x7ffffff5) {
      *(uint8_t *)(param_1 + 0xa8) = 1;
    }
    else if (param_2 == -0x7ffffff4) {
      *(uint8_t *)(param_1 + 0xa9) = 1;
    }
    if (*(char *)(param_1 + 0xaa) == '\0') {
      if ((*(char *)(param_1 + 0xa8) != '\0') && (*(char *)(param_1 + 0xa9) != '\0')) {
        *(uint8_t *)(param_1 + 0xaa) = 1;
        *(uint8_t *)(param_1 + 0xa8) = 0;
        *(uint8_t *)(param_1 + 0xa9) = 0;
        iStack_a8 = 0;
        iStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        iStack_98 = 0;
        iStack_94 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_86 = 0;
        uStack_84 = 0;
        uStack_82 = 0;
        iStack_80 = 0;
        iStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        iStack_70 = 0;
        iStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5e = 0;
        uStack_5c = 0;
        uStack_5a = 0;
        read_structured_fields_via_getters(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xec),&iStack_a8);
        read_structured_fields_via_getters(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xf0),&iStack_80);
        uVar2 = (uVar1 - iStack_98) - iStack_94;
        if (uVar2 == 0) {
          uVar2 = uVar1;
        }
        uVar3 = (uVar1 - iStack_70) - iStack_6c;
        if (uVar3 == 0) {
          uVar3 = uVar1;
        }
        *(short *)(param_1 + 0xac) = (short)((uint)(iStack_a8 + iStack_a4) / uVar2);
        *(short *)(param_1 + 0xae) = (short)((uint)(iStack_80 + iStack_7c) / uVar3);
        if (*(char *)(*(int *)(param_1 + 0xf4) + 0x40) != '\0') {
          append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d3dc/*ROM*/,0);
          copy_stream_bytes_into_struct(*(uint32_t *)(param_1 + 0xf4),(void *)(*(uint16_t *)(param_1 + 0xac)),1,0);
          append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
          append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d3e4/*ROM*/,0);
          copy_stream_bytes_into_struct(*(uint32_t *)(param_1 + 0xf4),(void *)(*(uint16_t *)(param_1 + 0xae)),1,0);
          append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
        }
      }
    }
    else if (((*(char *)(param_1 + 0xa8) != '\0') && (*(char *)(param_1 + 0xa9) != '\0')) &&
            (*(char *)(param_1 + 0xaa) != '\0')) {
      *(uint8_t *)(param_1 + 0xab) = 1;
      *(uint8_t *)(param_1 + 0xa8) = 0;
      *(uint8_t *)(param_1 + 0xa9) = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      iStack_50 = 0;
      iStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      iStack_40 = 0;
      iStack_3c = 0;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_34 = 0;
      uStack_32 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      iStack_28 = 0;
      iStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      iStack_18 = 0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_e = 0;
      uStack_c = 0;
      uStack_a = 0;
      read_structured_fields_via_getters(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xec),&uStack_58);
      read_structured_fields_via_getters(*(uint32_t *)(param_1 + 0x28),*(uint32_t *)(param_1 + 0xf0),&uStack_30);
      uVar2 = (uVar1 - iStack_3c) - iStack_40;
      if (uVar2 == 0) {
        uVar2 = uVar1;
      }
      uVar3 = (uVar1 - iStack_14) - iStack_18;
      if (uVar3 == 0) {
        uVar3 = uVar1;
      }
      *(short *)(param_1 + 0xb2) = (short)((uint)(iStack_4c + iStack_50) / uVar2);
      *(short *)(param_1 + 0xb0) = (short)((uint)(iStack_24 + iStack_28) / uVar3);
      if (*(char *)(*(int *)(param_1 + 0xf4) + 0x40) != '\0') {
        append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d3f0/*ROM*/,0);
        copy_stream_bytes_into_struct(*(uint32_t *)(param_1 + 0xf4),(void *)(*(uint16_t *)(param_1 + 0xb2)),1,0);
        append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
        append_bytes_to_ring_buffer(*(int *)(param_1 + 0xf4),0x1059d3f8/*ROM*/,0);
        copy_stream_bytes_into_struct(*(uint32_t *)(param_1 + 0xf4),(void *)(*(uint16_t *)(param_1 + 0xb0)),1,0);
        append_newline_to_buffer(*(int *)(param_1 + 0xf4),0);
      }
    }
    if ((*(char *)(param_1 + 0xaa) != '\0') && (*(char *)(param_1 + 0xab) != '\0')) {
      *(uint8_t *)(param_1 + 0xaa) = 0;
      *(uint8_t *)(param_1 + 0xab) = 0;
    }
  }
  return;
}
