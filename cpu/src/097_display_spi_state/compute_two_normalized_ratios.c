/* @k10d compute_two_normalized_ratios @ 0x1041d59a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041d5b0) overlaps instruction at (ram,0x1041d5ae)
    */

void compute_two_normalized_ratios(cls_1059d1d8 *param_1,int param_2,uint param_3)

{
  struct {
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
  } _cfg_a8;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  if ((param_3 & 0x10) != 0) {
    iVar4 = *(int *)param_1->field_0x30;
    iVar4 = (((vtbl_entry*)(iVar4))[64].fn)((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar4))[64].adj);
    iVar5 = *(int *)param_1->field_0x30;
    iVar5 = (((vtbl_entry*)(iVar5))[65].fn)((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar5))[65].adj);
    uVar1 = iVar4 * iVar5;
    if (param_2 == -0x7ffffff5) {
      param_1->field_0xa8 = 1;
    }
    else if (param_2 == -0x7ffffff4) {
      param_1->field_0xa9 = 1;
    }
    if (param_1->field_0xaa == '\0') {
      if ((param_1->field_0xa8 != '\0') && (param_1->field_0xa9 != '\0')) {
        param_1->field_0xaa = 1;
        param_1->field_0xa8 = 0;
        param_1->field_0xa9 = 0;
        _cfg_a8.iStack_a8 = 0;
        _cfg_a8.iStack_a4 = 0;
        _cfg_a8.uStack_a0 = 0;
        _cfg_a8.uStack_9c = 0;
        _cfg_a8.iStack_98 = 0;
        _cfg_a8.iStack_94 = 0;
        _cfg_a8.uStack_90 = 0;
        _cfg_a8.uStack_8c = 0;
        _cfg_a8.uStack_88 = 0;
        _cfg_a8.uStack_86 = 0;
        _cfg_a8.uStack_84 = 0;
        _cfg_a8.uStack_82 = 0;
        _cfg_a8.iStack_80 = 0;
        _cfg_a8.iStack_7c = 0;
        _cfg_a8.uStack_78 = 0;
        _cfg_a8.uStack_74 = 0;
        _cfg_a8.iStack_70 = 0;
        _cfg_a8.iStack_6c = 0;
        _cfg_a8.uStack_68 = 0;
        _cfg_a8.uStack_64 = 0;
        _cfg_a8.uStack_60 = 0;
        _cfg_a8.uStack_5e = 0;
        _cfg_a8.uStack_5c = 0;
        _cfg_a8.uStack_5a = 0;
        read_structured_fields_via_getters(param_1->field_0x28,*(uint32_t *)&param_1->field_0xec,&_cfg_a8.iStack_a8);
        read_structured_fields_via_getters(param_1->field_0x28,param_1->field_0xf0,&_cfg_a8.iStack_80);
        uVar2 = (uVar1 - _cfg_a8.iStack_98) - _cfg_a8.iStack_94;
        if (uVar2 == 0) {
          uVar2 = uVar1;
        }
        uVar3 = (uVar1 - _cfg_a8.iStack_70) - _cfg_a8.iStack_6c;
        if (uVar3 == 0) {
          uVar3 = uVar1;
        }
        param_1->field_0xac = (short)((uint)(_cfg_a8.iStack_a8 + _cfg_a8.iStack_a4) / uVar2);
        param_1->field_0xae = (short)((uint)(_cfg_a8.iStack_80 + _cfg_a8.iStack_7c) / uVar3);
        if (*(char *)(param_1->field_0xf4 + 0x40) != '\0') {
          append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3dc/*ROM*/,0);
          copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(param_1->field_0xac),1,0);
          append_newline_to_buffer(param_1->field_0xf4,0);
          append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3e4/*ROM*/,0);
          copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(param_1->field_0xae),1,0);
          append_newline_to_buffer(param_1->field_0xf4,0);
        }
      }
    }
    else if (((param_1->field_0xa8 != '\0') && (param_1->field_0xa9 != '\0')) &&
            (param_1->field_0xaa != '\0')) {
      param_1->field_0xab = 1;
      param_1->field_0xa8 = 0;
      param_1->field_0xa9 = 0;
      _cfg_a8.uStack_58 = 0;
      _cfg_a8.uStack_54 = 0;
      _cfg_a8.iStack_50 = 0;
      _cfg_a8.iStack_4c = 0;
      _cfg_a8.uStack_48 = 0;
      _cfg_a8.uStack_44 = 0;
      _cfg_a8.iStack_40 = 0;
      _cfg_a8.iStack_3c = 0;
      _cfg_a8.uStack_38 = 0;
      _cfg_a8.uStack_36 = 0;
      _cfg_a8.uStack_34 = 0;
      _cfg_a8.uStack_32 = 0;
      _cfg_a8.uStack_30 = 0;
      _cfg_a8.uStack_2c = 0;
      _cfg_a8.iStack_28 = 0;
      _cfg_a8.iStack_24 = 0;
      _cfg_a8.uStack_20 = 0;
      _cfg_a8.uStack_1c = 0;
      _cfg_a8.iStack_18 = 0;
      _cfg_a8.iStack_14 = 0;
      _cfg_a8.uStack_10 = 0;
      _cfg_a8.uStack_e = 0;
      _cfg_a8.uStack_c = 0;
      _cfg_a8.uStack_a = 0;
      read_structured_fields_via_getters(param_1->field_0x28,*(uint32_t *)&param_1->field_0xec,&_cfg_a8.uStack_58);
      read_structured_fields_via_getters(param_1->field_0x28,param_1->field_0xf0,&_cfg_a8.uStack_30);
      uVar2 = (uVar1 - _cfg_a8.iStack_3c) - _cfg_a8.iStack_40;
      if (uVar2 == 0) {
        uVar2 = uVar1;
      }
      uVar3 = (uVar1 - _cfg_a8.iStack_14) - _cfg_a8.iStack_18;
      if (uVar3 == 0) {
        uVar3 = uVar1;
      }
      param_1->field_0xb2 = (short)((uint)(_cfg_a8.iStack_4c + _cfg_a8.iStack_50) / uVar2);
      param_1->field_0xb0 = (short)((uint)(_cfg_a8.iStack_24 + _cfg_a8.iStack_28) / uVar3);
      if (*(char *)(param_1->field_0xf4 + 0x40) != '\0') {
        append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3f0/*ROM*/,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(param_1->field_0xb2),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
        append_bytes_to_ring_buffer(param_1->field_0xf4,0x1059d3f8/*ROM*/,0);
        copy_stream_bytes_into_struct(param_1->field_0xf4,(void*)(param_1->field_0xb0),1,0);
        append_newline_to_buffer(param_1->field_0xf4,0);
      }
    }
    if ((param_1->field_0xaa != '\0') && (param_1->field_0xab != '\0')) {
      param_1->field_0xaa = 0;
      param_1->field_0xab = 0;
    }
  }
  return;
}
