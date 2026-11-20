/* @k10d build_mode_settings_snapshot_104b99b0 @ 0x104b99b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 222_sr_companion_dispatch (unit names are model-proposed)
 * purpose:
 *   Populates a per-mode settings descriptor buffer from the working settings copy,
 *   selecting fields by mode index and exposure mode.
 * summary:
 *   Reads many setting_get values from param_2 (the settings working copy) and writes them
 *   into the byte buffer param_4 at fixed offsets. It branches on param_3 (mode index) to
 *   choose between a base block and a per-mode sub-block (offset (param_3-1)*0x80), and on
 *   settings 0xb2/0xb3 to select which exposure-mode fields (Tv/Av/Sv) to include. It calls
 *   helper functions (read_byte_from_rodata_table, map_mode_index_to_code_1045b3aa,
 *   map_index_to_code_value, read_byte_from_table_1045b3a0, clamp_byte_plus_one,
 *   decode_mode_index_to_flags, map_mode_flags_to_code, check_mode_setting_conflict) to
 *   derive or transform specific fields. Finally, it sets a flag at param_1+0x4c+param_3*2
 *   and copies the first derived field to param_1+0x4c+param_3*2+1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104b99de) overlaps instruction at (ram,0x104b99dc)
    */

void build_mode_settings_snapshot_104b99b0(int param_1,void *param_2,int param_3,uint8_t *param_4)

{
  uint8_t *puVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uint8_t uVar8;
  uint32_t uVar6;
  uint uVar7;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  uint32_t *puVar11;
  uint8_t auStack_4c [4];
  
  puVar11 = (uint32_t *)auStack_4c;
  uVar2 = get_or_init_heap_block();
  if (param_3 < 1) {
    *param_4 = (char)param_3;
    iVar3 = setting_get((int)param_2,0xb2);
    iVar4 = setting_get((int)param_2,0xb3);
    param_4[0xf] = (char)iVar3;
    if (iVar4 == 0) {
      uVar5 = setting_get((int)param_2,4);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      param_4[2] = uVar8;
      uVar5 = setting_get((int)param_2,5);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      iVar10 = 6;
    }
    else if (iVar3 == 0) {
      uVar5 = setting_get((int)param_2,10);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      param_4[2] = uVar8;
      uVar5 = setting_get((int)param_2,0xb);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      iVar10 = 0xc;
    }
    else {
      uVar5 = setting_get((int)param_2,7);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      param_4[2] = uVar8;
      uVar5 = setting_get((int)param_2,8);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      iVar10 = 9;
    }
    param_4[0x10] = uVar8;
    uVar5 = setting_get((int)param_2,iVar10);
    uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
    param_4[0x11] = uVar8;
    uVar5 = setting_get((int)param_2,1);
    uVar6 = setting_get((int)param_2,0xc1);
    uVar8 = map_mode_index_to_code_1045b3aa(uVar2,uVar5,uVar6);
    param_4[3] = uVar8;
    if (iVar3 == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = 3;
    }
    uVar5 = setting_get((int)param_2,iVar3);
    uVar8 = map_index_to_code_value(uVar2,uVar5);
    param_4[4] = uVar8;
    uVar5 = setting_get((int)param_2,0xd);
    param_4[5] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x50);
    param_4[6] = (char)uVar5;
    uVar5 = setting_get((int)param_2,99);
    uVar8 = read_byte_from_table_1045b3a0(uVar2,uVar5);
    param_4[7] = uVar8;
    uVar5 = setting_get((int)param_2,0x62);
    param_4[8] = (char)uVar5;
    iVar3 = setting_get((int)param_2,0x90);
    if (iVar3 == 0) {
      uVar5 = setting_get((int)param_2,0x91);
      param_4[9] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x92);
      param_4[10] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x93);
      param_4[0xb] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x94);
      param_4[0xc] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x95);
      param_4[0xd] = (char)uVar5;
    }
    else {
      param_4[9] = 1;
      param_4[10] = 1;
      param_4[0xb] = 1;
      param_4[0xc] = 1;
      param_4[0xd] = 1;
    }
    uVar5 = setting_get((int)param_2,0x9d);
    param_4[0xe] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xcd);
    param_4[0x12] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb4);
    param_4[0x13] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb7);
    param_4[0x14] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb6);
    param_4[0x15] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbc);
    param_4[0x16] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbf);
    param_4[0x17] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xd2);
    param_4[0x18] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xcb);
    param_4[0x19] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb5);
    param_4[0x1a] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbe);
    param_4[0x1b] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x32);
    param_4[0x1c] = (char)uVar5;
    uVar5 = setting_get((int)param_2,200);
    param_4[0x1d] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xcc);
    param_4[0x1e] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb1);
    param_4[0x1f] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xc4);
    param_4[0x20] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xc5);
    param_4[0x21] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xc6);
    param_4[0x22] = (char)uVar5;
    uVar5 = setting_get((int)param_2,199);
    param_4[0x23] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb9);
    param_4[0x24] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbd);
    param_4[0x25] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xca);
    param_4[0x26] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb8);
    param_4[0x27] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x5b);
    param_4[0x28] = (char)uVar5;
    iVar3 = check_mode_setting_conflict(param_1,param_2,param_3);
    param_4[0x29] = iVar3 != 0;
    uVar5 = setting_get((int)param_2,0);
    *puVar11 = (uintptr_t)(param_4 + 0x2c);
    decode_mode_index_to_flags(param_1,uVar5,param_4 + 0x2a,param_4 + 0x2b,(uint8_t *)*puVar11);
    uVar5 = setting_get((int)param_2,0x51);
    uVar6 = setting_get((int)param_2,0x54);
    uVar8 = map_mode_flags_to_code(param_1,uVar5,uVar6);
    param_4[0x32] = uVar8;
    uVar5 = setting_get((int)param_2,0x51);
    uVar6 = setting_get((int)param_2,0x54);
    uVar8 = map_mode_flags_to_code(param_1,uVar5,uVar6);
    param_4[0x33] = uVar8;
    uVar5 = setting_get((int)param_2,0x52);
    param_4[0x34] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x52);
    param_4[0x35] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x53);
    param_4[0x36] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x53);
    param_4[0x37] = (char)uVar5;
    param_4[1] = 0xff;
    uVar5 = setting_get((int)param_2,0x6a);
    param_4[0x2d] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x6b);
    param_4[0x2e] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x6c);
    param_4[0x2f] = (char)uVar5;
    iVar3 = setting_get((int)param_2,0x60);
    param_4[0x30] = iVar3 != 0;
    uVar7 = clamp_byte_plus_one(uVar2,iVar3);
    param_4[0x31] = (char)uVar7;
    uVar2 = setting_get((int)param_2,0x68);
    param_4[0x39] = (char)uVar2;
    uVar2 = setting_get((int)param_2,0x69);
    param_4[0x38] = (char)uVar2;
    uVar2 = setting_get((int)param_2,0xab);
    param_4[0x3a] = (char)uVar2;
    uVar2 = setting_get((int)param_2,0xc1);
    param_4[0x3b] = (char)uVar2;
    uVar8 = (uint8_t)iVar4;
  }
  else {
    *param_4 = (char)param_3;
    iVar10 = (param_3 + -1) * 0x80;
    iVar3 = setting_get((int)param_2,0xb2);
    iVar4 = setting_get((int)param_2,0xb3);
    param_4[0xf] = (char)iVar3;
    if (iVar4 == 0) {
      uVar5 = setting_get((int)param_2,iVar10 + 300);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      param_4[2] = uVar8;
      uVar5 = setting_get((int)param_2,iVar10 + 0x12d);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      iVar9 = 0x12e;
    }
    else if (iVar3 == 0) {
      uVar5 = setting_get((int)param_2,iVar10 + 0x132);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      param_4[2] = uVar8;
      uVar5 = setting_get((int)param_2,iVar10 + 0x133);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      iVar9 = 0x134;
    }
    else {
      uVar5 = setting_get((int)param_2,iVar10 + 0x12f);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      param_4[2] = uVar8;
      uVar5 = setting_get((int)param_2,iVar10 + 0x130);
      uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
      iVar9 = 0x131;
    }
    param_4[0x10] = uVar8;
    uVar5 = setting_get((int)param_2,iVar9 + iVar10);
    uVar8 = read_byte_from_rodata_table(uVar2,uVar5);
    param_4[0x11] = uVar8;
    uVar5 = setting_get((int)param_2,iVar10 + 0x129);
    uVar6 = setting_get((int)param_2,0xc1);
    uVar8 = map_mode_index_to_code_1045b3aa(uVar2,uVar5,uVar6);
    param_4[3] = uVar8;
    if (iVar3 == 0) {
      iVar3 = iVar10 + 0x12a;
    }
    else {
      iVar3 = iVar10 + 299;
    }
    uVar5 = setting_get((int)param_2,iVar3);
    uVar8 = map_index_to_code_value(uVar2,uVar5);
    param_4[4] = uVar8;
    uVar5 = setting_get((int)param_2,iVar10 + 0x135);
    param_4[5] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x160);
    param_4[6] = (char)uVar5;
    uVar5 = setting_get((int)param_2,99);
    uVar8 = read_byte_from_table_1045b3a0(uVar2,uVar5);
    param_4[7] = uVar8;
    uVar5 = setting_get((int)param_2,0x62);
    param_4[8] = (char)uVar5;
    iVar3 = setting_get((int)param_2,0x90);
    if (iVar3 == 0) {
      uVar5 = setting_get((int)param_2,0x91);
      param_4[9] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x92);
      param_4[10] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x93);
      param_4[0xb] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x94);
      param_4[0xc] = (char)uVar5;
      uVar5 = setting_get((int)param_2,0x95);
      param_4[0xd] = (char)uVar5;
    }
    else {
      param_4[9] = 1;
      param_4[10] = 1;
      param_4[0xb] = 1;
      param_4[0xc] = 1;
      param_4[0xd] = 1;
    }
    uVar5 = setting_get((int)param_2,0x9d);
    param_4[0xe] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xcd);
    param_4[0x12] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb4);
    param_4[0x13] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb7);
    param_4[0x14] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb6);
    param_4[0x15] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbc);
    param_4[0x16] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbf);
    param_4[0x17] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xd2);
    param_4[0x18] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xcb);
    param_4[0x19] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb5);
    param_4[0x1a] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbe);
    param_4[0x1b] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0x32);
    param_4[0x1c] = (char)uVar5;
    uVar5 = setting_get((int)param_2,200);
    param_4[0x1d] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xcc);
    param_4[0x1e] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb1);
    param_4[0x1f] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xc4);
    param_4[0x20] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xc5);
    param_4[0x21] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xc6);
    param_4[0x22] = (char)uVar5;
    uVar5 = setting_get((int)param_2,199);
    param_4[0x23] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb9);
    param_4[0x24] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xbd);
    param_4[0x25] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xca);
    param_4[0x26] = (char)uVar5;
    uVar5 = setting_get((int)param_2,0xb8);
    param_4[0x27] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x16b);
    param_4[0x28] = (char)uVar5;
    iVar3 = check_mode_setting_conflict(param_1,param_2,param_3);
    param_4[0x29] = iVar3 != 0;
    uVar5 = setting_get((int)param_2,iVar10 + 0x128);
    *puVar11 = (uintptr_t)(param_4 + 0x2c);
    decode_mode_index_to_flags(param_1,uVar5,param_4 + 0x2a,param_4 + 0x2b,(uint8_t *)*puVar11);
    uVar5 = setting_get((int)param_2,iVar10 + 0x161);
    uVar6 = setting_get((int)param_2,0x164);
    uVar8 = map_mode_flags_to_code(param_1,uVar5,uVar6);
    param_4[0x32] = uVar8;
    uVar5 = setting_get((int)param_2,iVar10 + 0x161);
    uVar6 = setting_get((int)param_2,0x164);
    uVar8 = map_mode_flags_to_code(param_1,uVar5,uVar6);
    param_4[0x33] = uVar8;
    uVar5 = setting_get((int)param_2,iVar10 + 0x162);
    param_4[0x34] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x162);
    param_4[0x35] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x163);
    param_4[0x36] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x163);
    param_4[0x37] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x174);
    param_4[1] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x17a);
    param_4[0x2d] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x17b);
    param_4[0x2e] = (char)uVar5;
    uVar5 = setting_get((int)param_2,iVar10 + 0x17c);
    param_4[0x2f] = (char)uVar5;
    iVar3 = setting_get((int)param_2,0x60);
    param_4[0x30] = iVar3 != 0;
    uVar7 = clamp_byte_plus_one(uVar2,iVar3);
    param_4[0x31] = (char)uVar7;
    uVar2 = setting_get((int)param_2,iVar10 + 0x178);
    param_4[0x39] = (char)uVar2;
    uVar2 = setting_get((int)param_2,iVar10 + 0x179);
    param_4[0x38] = (char)uVar2;
    uVar2 = setting_get((int)param_2,0xab);
    param_4[0x3a] = (char)uVar2;
    uVar2 = setting_get((int)param_2,0xc1);
    param_4[0x3b] = (char)uVar2;
    uVar8 = (uint8_t)iVar4;
  }
  param_4[0x3c] = uVar8;
  puVar1 = (uint8_t *)(param_1 + 0x4c + param_3 * 2);
  *puVar1 = 1;
  puVar1[1] = param_4[2];
  return;
}
