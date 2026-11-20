/* @k10d populate_exposure_params_and_log @ 0x1050f332
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void populate_exposure_params_and_log(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  ushort uVar5;
  uint8_t uVar6;
  void *pvVar7;
  uint uVar8;
  uint *puVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  char cVar16;
  uint16_t uVar14;
  uint uVar13;
  ushort uVar15;
  uint8_t uVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  uint8_t uVar20;
  uint8_t uVar21;
  uint8_t uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uintptr_t sp;
  uint *puVar26;
  uint8_t local_6c [32];
  uint32_t uStack_10;
  uint32_t uStack_c;
  
  puVar26 = (uint *)local_6c;
  iVar25 = *(int *)(param_1 + 0x148);
  cVar16 = (((vtbl_entry*)(iVar25))[2].fn)((int)((vtbl_entry*)(iVar25))[2].adj + param_1 + 0x148,0);
  if ((cVar16 == '\t') || (cVar16 == '\f')) {
    uVar17 = 1;
  }
  else {
    uVar17 = 0;
  }
  **(uint32_t **)(param_1 + 0x7e4) = *(uint32_t *)(param_1 + 0x34);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 4) = *(uint32_t *)(param_1 + 0x38);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 8) = *(uint32_t *)(param_1 + 0x34);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 0xc) = *(uint32_t *)(param_1 + 0x34);
  *(uint8_t *)(*(int *)(param_1 + 0x7e4) + 0x5c) = uVar17;
  *(uint8_t *)(*(int *)(param_1 + 0x7e4) + 0x5d) = *(uint8_t *)(param_1 + 0x29);
  iVar25 = *(int *)(param_1 + 0x7e4);
  iVar24 = param_1 + 0x164;
  uVar14 = get_TVD((void*)(iVar24));
  *(uint16_t *)(iVar25 + 0x10) = uVar14;
  iVar25 = *(int *)(param_1 + 0x7e4);
  uVar14 = get_SVD((void*)(iVar24));
  *(uint16_t *)(iVar25 + 0x12) = uVar14;
  iVar25 = *(int *)(param_1 + 0x7e4);
  uVar14 = get_TVD((void*)(iVar24));
  *(uint16_t *)(iVar25 + 0x14) = uVar14;
  iVar25 = *(int *)(param_1 + 0x7e4);
  uVar14 = get_SVD((void*)(iVar24));
  *(uint16_t *)(iVar25 + 0x16) = uVar14;
  iVar25 = *(int *)(param_1 + 0x7e4);
  uVar15 = *(ushort *)(param_1 + 0x116);
  uVar1 = *(ushort *)(param_1 + 0x118);
  uVar2 = *(ushort *)(param_1 + 0x11a);
  *(uint *)(iVar25 + 0x28) = (uint)*(ushort *)(param_1 + 0x114);
  *(uint *)(iVar25 + 0x2c) = (uint)uVar15;
  *(uint *)(iVar25 + 0x30) = (uint)uVar1;
  *(uint *)(iVar25 + 0x34) = (uint)uVar2;
  iVar25 = *(int *)(param_1 + 0x7e4);
  uVar14 = *(uint16_t *)(param_1 + 0x842);
  uVar3 = *(uint16_t *)(param_1 + 0x844);
  uVar4 = *(uint16_t *)(param_1 + 0x846);
  *(uint16_t *)(iVar25 + 0x38) = *(uint16_t *)(param_1 + 0x840);
  *(uint16_t *)(iVar25 + 0x3a) = uVar14;
  *(uint16_t *)(iVar25 + 0x3c) = uVar3;
  *(uint16_t *)(iVar25 + 0x3e) = uVar4;
  iVar23 = param_1 + 0x880;
  *(int *)(*(int *)(param_1 + 0x7e4) + 0xf4) = iVar23;
  uVar14 = get_SVD((void*)(iVar24));
  *(uint16_t *)(*(int *)(param_1 + 0x7e4) + 0x12) = uVar14;
  *(uint16_t *)(*(int *)(param_1 + 0x7e4) + 0x16) = uVar14;
  uStack_10 = 0x20002000;
  uStack_c = 0x20002000;
  iVar25 = sr_driver_singleton();
  pvVar7 = *(void **)(iVar25 + 4);
  module_array_getter(pvVar7,9);
  module_array_getter(pvVar7,8);
  iVar25 = return_sram_address_0x8001e320();
  uVar13 = get_field_at_offset_four_10435b56(iVar25);
  iVar25 = return_sram_address_104357ec();
  uVar15 = read_offset_four_10435660(iVar25);
  uStack_10 = (uStack_10 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)(uVar15)) & ((uint64_t)0xffff)) << 0);
  iVar25 = return_sram_address_104357ec();
  uVar14 = read_offset_six_word_10435666(iVar25);
  uStack_10 = CONCAT22(((uint16_t)((uint64_t)(uStack_10) >> 0)),uVar14);
  iVar25 = return_sram_address_104357ec();
  uVar14 = read_offset_eight_word(iVar25);
  uStack_c = (uStack_c & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)(uVar14)) & ((uint64_t)0xffff)) << 0);
  iVar25 = return_sram_address_104357ec();
  uVar14 = read_offset_10_field(iVar25);
  uStack_c = CONCAT22(((uint16_t)((uint64_t)(uStack_c) >> 0)),uVar14);
  iVar25 = get_SVD((void*)(iVar24));
  uVar8 = *(uint *)(&DAT_105d5698/*ROM*/ + iVar25 * 4);
  iVar25 = param_1 + 0x2ac;
  uVar17 = settings_getter(iVar25,0x51);
  cVar16 = settings_getter(iVar25,0xba);
  if (cVar16 == '\x01') {
    uVar17 = 2;
  }
  puVar9 = *(uint **)(param_1 + 0x838);
  uVar18 = get_AVD((void*)(iVar24));
  uVar19 = settings_getter(iVar25,0xd);
  uVar20 = settings_getter(iVar25,0x2b);
  uVar21 = settings_getter(iVar25,0x2e);
  uVar22 = settings_getter(iVar25,0x31);
  uVar6 = *(uint8_t *)(param_1 + 0x8c4);
  *puVar26 = 0x1bc000;
  *(uint8_t *)((int)puVar26 + 7) = uVar18;
  *(uint8_t *)((int)puVar26 + 0xb) = uVar19;
  *(uint8_t *)((int)puVar26 + 0xf) = uVar20;
  *(uint8_t *)((int)puVar26 + 0x13) = uVar21;
  *(uint8_t *)((int)puVar26 + 0x17) = uVar22;
  *(uint8_t *)((int)puVar26 + 0x1b) = uVar17;
  *(uint8_t *)((int)puVar26 + 0x1f) = uVar6;
  compute_exposure_apex_values(puVar9,uVar13 & 0xffff,(ushort *)&uStack_10,uVar8,*puVar26,
               *(byte *)((int)puVar26 + 7),*(uint8_t *)((int)puVar26 + 0xb),
               *(byte *)((int)puVar26 + 0xf),*(byte *)((int)puVar26 + 0x13),
               *(byte *)((int)puVar26 + 0x17),*(char *)((int)puVar26 + 0x1b),
               *(char *)((int)puVar26 + 0x1f));
  uVar15 = *(ushort *)(*(int *)(param_1 + 0x838) + 0x44);
  *(ushort *)(param_1 + 0x114) = uVar15;
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x838) + 0x46);
  *(ushort *)(param_1 + 0x116) = uVar1;
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x838) + 0x48);
  *(ushort *)(param_1 + 0x118) = uVar2;
  uVar5 = *(ushort *)(*(int *)(param_1 + 0x838) + 0x4a);
  *(ushort *)(param_1 + 0x11a) = uVar5;
  iVar25 = *(int *)(param_1 + 0x7e4);
  *(uint *)(iVar25 + 0x28) = (uint)uVar15;
  *(uint *)(iVar25 + 0x2c) = (uint)uVar1;
  *(uint *)(iVar25 + 0x30) = (uint)uVar2;
  *(uint *)(iVar25 + 0x34) = (uint)uVar5;
  iVar25 = *(int *)(param_1 + 0x7e4);
  uVar12 = *(uint32_t *)(*(int *)(param_1 + 0x838) + 0x1c);
  uVar11 = *(uint32_t *)(*(int *)(param_1 + 0x838) + 0x20);
  uVar10 = *(uint32_t *)(*(int *)(param_1 + 0x838) + 0x24);
  *(uint32_t *)(iVar25 + 0x18) = *(uint32_t *)(*(int *)(param_1 + 0x838) + 0x18);
  *(uint32_t *)(iVar25 + 0x1c) = uVar12;
  *(uint32_t *)(iVar25 + 0x20) = uVar11;
  *(uint32_t *)(iVar25 + 0x24) = uVar10;
  uVar10 = get_sysparam_store_instance();
  iVar25 = get_sysparam_store_byte((void*)(uVar10),4);
  if (iVar25 != 0) {
    append_bytes_to_ring_buffer(iVar23,0x105d5eec/*ROM*/,0);
    parse_and_store_buffered_records(iVar23,(void *)(uint)*(ushort *)(param_1 + 0x114),1,0);
    parse_and_store_buffered_records(iVar23,(void *)(uint)*(ushort *)(param_1 + 0x116),1,0);
    parse_and_store_buffered_records(iVar23,(void *)(uint)*(ushort *)(param_1 + 0x118),1,0);
    parse_and_store_buffered_records(iVar23,(void *)(uint)*(ushort *)(param_1 + 0x11a),1,0);
    append_newline_to_buffer(iVar23,0);
    append_bytes_to_ring_buffer(iVar23,0x105d5ef8/*ROM*/,0);
    parse_and_store_buffered_records(iVar23,*(void **)(*(int *)(param_1 + 0x838) + 0x18),1,0);
    parse_and_store_buffered_records(iVar23,*(void **)(*(int *)(param_1 + 0x838) + 0x1c),1,0);
    parse_and_store_buffered_records(iVar23,*(void **)(*(int *)(param_1 + 0x838) + 0x20),1,0);
    parse_and_store_buffered_records(iVar23,*(void **)(*(int *)(param_1 + 0x838) + 0x24),1,0);
    append_newline_to_buffer(iVar23,0);
  }
  *(uint8_t *)(*(int *)(param_1 + 0x7e4) + 0x5e) = *(uint8_t *)(param_1 + 0x6b9);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 0x4c) = *(uint32_t *)(param_1 + 0x6bc);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 0x50) = *(uint32_t *)(param_1 + 0x6c0);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 0x54) = *(uint32_t *)(param_1 + 0x6c4);
  *(uint32_t *)(*(int *)(param_1 + 0x7e4) + 0x58) = *(uint32_t *)(param_1 + 0x6c8);
  *(uint *)(param_1 + 0x668) = uVar13;
  *(uint32_t *)(param_1 + 0x66c) = uStack_10;
  *(uint32_t *)(param_1 + 0x670) = uStack_c;
  return;
}
