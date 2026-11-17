/* @k10d screen_mgr_render @ 0x1046b82a
 * name: verified (structural evidence: d313: decompile; injected 'A' payload bytes appear at obj+0x1c in an SDRAM snapshot)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Status-LCD render: copy the 9/0x17/0x45-byte status blocks from the settings manager,
 *   build per-byte segment masks (current/on/off/toggle at obj+0x1c/+0x2b/+0x3a/+0x49) and
 *   hand them to the registered sinks.
 * summary:
 *   VERIFIED: d313: decompile; injected 'A' payload bytes appear at obj+0x1c in an SDRAM
 *   snapshot
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1046b92e) overlaps instruction at (ram,0x1046b92c)
    */

void screen_mgr_render(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint8_t *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint8_t uVar10;
  int iVar9;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uintptr_t sp;
  int *piVar17;
  uint8_t auStack_74 [4];
  byte abStack_20 [9];
  byte abStack_17 [9];
  byte bStack_e;
  byte bStack_d;
  byte bStack_c;
  byte bStack_b;
  byte bStack_a;
  byte bStack_9;
  
  puVar5 = &stack0xfffffff8;
  piVar17 = (int *)auStack_74;
  piVar14 = (int *)(param_1 + 0xbc);
  iVar16 = 9;
  do {
    iVar16 = iVar16 + -1;
    *(uint8_t *)(iVar16 + param_1 + 0xd0) = *(uint8_t *)(iVar16 + param_1 + 0xc0);
  } while (iVar16 != 0);
  copy_nine_bytes_to_buffer(*(int *)(param_1 + 0xb8),piVar14);
  iVar16 = 0x17;
  do {
    iVar16 = iVar16 + -1;
    *(uint8_t *)(iVar16 + param_1 + 0xfc) = *(uint8_t *)(iVar16 + param_1 + 0xe0);
  } while (iVar16 != 0);
  copy_status_block_bytes(*(int *)(param_1 + 0xb8),(void *)(param_1 + 0xdc));
  iVar16 = 0x45;
  do {
    iVar16 = iVar16 + -1;
    *(uint8_t *)(iVar16 + param_1 + 0x164) = *(uint8_t *)(iVar16 + param_1 + 0x118);
  } while (iVar16 != 0);
  copy_0x45_byte_block(*(int *)(param_1 + 0xb8),(void *)(param_1 + 0x114));
  (**(code **)(*piVar14 + 0x24))((int)*(short *)(*piVar14 + 0x20) + (int)piVar14,abStack_20);
  (**(code **)(*(int *)(param_1 + 0xcc) + 0x24))
            ((int)piVar14 + *(short *)(*(int *)(param_1 + 0xcc) + 0x20) + 0x10,abStack_17);
  iVar2 = 0;
  iVar16 = 9;
  do {
    if ((((iVar2 == iRam105a69b4) || (iVar2 == iRam105a69bc)) || (iVar2 == iRam105a68a4)) ||
       (iVar2 == iRam105a68ac)) {
      *(uint8_t *)(iVar2 + param_1 + 0x1c) = puVar5[-0x18];
      *(uint8_t *)(iVar2 + param_1 + 0x2b) = 0;
      *(uint8_t *)(iVar2 + param_1 + 0x3a) = 0;
      *(uint8_t *)(param_1 + 0x49 + iVar2) = puVar5[-0x18] ^ puVar5[-0xf];
    }
    else {
      *(uint8_t *)(param_1 + 0x1c + iVar2) = puVar5[-0x18];
      *(byte *)(param_1 + 0x2b + iVar2) = (puVar5[-0x18] ^ 0xff) & puVar5[-0xf];
      *(byte *)(param_1 + 0x3a + iVar2) = (puVar5[-0xf] ^ 0xff) & puVar5[-0x18];
      *(uint8_t *)(param_1 + 0x49 + iVar2) = puVar5[-0x18] ^ puVar5[-0xf];
    }
    iVar2 = iVar2 + 1;
    iVar11 = iVar16 + -1;
    bVar1 = 0 < iVar16;
    puVar5 = puVar5 + 1;
    iVar16 = iVar11;
  } while (bVar1 && iVar11 != 0);
  uVar8 = resolve_status_segment_mask(param_1,*(uint8_t *)(param_1 + 0x1c + iRam105a6934));
  piVar14 = (int *)status_item_location(0x2b);
  iVar2 = *piVar14;
  iVar16 = gpio_input_item_2b(param_1);
  if (iVar16 == 0) {
    bVar3 = 0xff;
  }
  else {
    iVar16 = status_item_location(0x2b);
    bVar3 = *(byte *)(iVar16 + 4) ^ 0xff;
  }
  iVar16 = gpio_input_item_2c(param_1);
  if (iVar16 != 0) {
    iVar16 = status_item_location(0x2c);
    bVar3 = (*(byte *)(iVar16 + 4) ^ 0xff) & bVar3;
  }
  iVar16 = gpio_input_item_2d(param_1);
  if (iVar16 != 0) {
    iVar16 = status_item_location(0x2d);
    bVar3 = (*(byte *)(iVar16 + 4) ^ 0xff) & bVar3;
  }
  iVar16 = param_1 + 0x2b;
  iVar15 = param_1 + 0x1c;
  *(byte *)(iVar16 + iVar2) = (bVar3 ^ 0xff) & *(byte *)(iVar2 + iVar15);
  iVar12 = param_1 + 0x3a;
  *(byte *)(iVar2 + iVar12) = (*(byte *)(iVar2 + iVar15) ^ 0xff) & bVar3;
  iVar11 = param_1 + 0x49;
  *(byte *)(iVar2 + iVar11) = *(byte *)(iVar2 + iVar15) ^ bVar3;
  *(byte *)(iVar15 + iVar2) = bVar3;
  piVar14 = (int *)status_item_location(0x2e);
  iVar13 = *piVar14;
  piVar14 = (int *)status_item_location(0x2f);
  iVar2 = *piVar14;
  if (*(byte *)(iVar15 + iVar13) == uVar8) {
    *(uint8_t *)(iVar11 + iVar13) = 0;
    *(uint8_t *)(iVar11 + iVar2) = 0;
  }
  else {
    *(uint8_t *)(iVar11 + iVar13) = uRam105a6938;
    *(uint8_t *)(iVar11 + iVar2) = 0xff;
  }
  *(char *)(iVar13 + iVar15) = (char)uVar8;
  *(uint8_t *)(iVar13 + iVar16) = 0;
  *(uint8_t *)(iVar13 + iVar12) = 0;
  uVar10 = map_segment_index_to_code(param_1,uVar8);
  *(uint8_t *)(iVar2 + iVar15) = uVar10;
  *(uint8_t *)(iVar2 + iVar16) = 0;
  *(uint8_t *)(iVar2 + iVar12) = 0;
  iVar2 = *(int *)(param_1 + 0xdc);
  bStack_e = (**(code **)(iVar2 + 0x14))((int)*(short *)(iVar2 + 0x10) + param_1 + 0xdc,0);
  piVar14 = (int *)(param_1 + 0x114);
  bStack_c = (**(code **)(*piVar14 + 0x14))((int)*(short *)(*piVar14 + 0x10) + (int)piVar14,1);
  bStack_a = (**(code **)(*piVar14 + 0x14))((int)*(short *)(*piVar14 + 0x10) + (int)piVar14,5);
  iVar2 = *(int *)(param_1 + 0xf8);
  bStack_d = (**(code **)(iVar2 + 0x14))(param_1 + 0xf8 + (int)*(short *)(iVar2 + 0x10),0);
  piVar14 = (int *)(param_1 + 0x160);
  bStack_b = (**(code **)(*piVar14 + 0x14))((int)*(short *)(*piVar14 + 0x10) + (int)piVar14,1);
  bStack_9 = (**(code **)(*piVar14 + 0x14))((int)piVar14 + (int)*(short *)(*piVar14 + 0x10),5);
  piVar14 = (int *)status_item_location(0x30);
  iVar2 = *piVar14;
  *(byte *)(iVar2 + iVar15) = bStack_e;
  *(uint8_t *)(iVar2 + iVar16) = 0;
  *(uint8_t *)(iVar2 + iVar12) = 0;
  *(byte *)(iVar2 + iVar11) = bStack_e ^ bStack_d;
  piVar14 = (int *)status_item_location(0x31);
  iVar2 = *piVar14;
  *(byte *)(iVar2 + iVar15) = bStack_c;
  *(uint8_t *)(iVar2 + iVar16) = 0;
  *(uint8_t *)(iVar2 + iVar12) = 0;
  *(byte *)(iVar2 + iVar11) = bStack_c ^ bStack_b;
  piVar14 = (int *)status_item_location(0x32);
  iVar13 = *piVar14;
  iVar2 = status_item_location(0x32);
  bVar3 = *(byte *)(iVar2 + 4);
  *(byte *)(iVar13 + iVar15) = bStack_a;
  *(byte *)(iVar13 + iVar16) = (bStack_a ^ bVar3) & bStack_9;
  *(byte *)(iVar13 + iVar12) = (bVar3 ^ bStack_9) & bStack_a;
  *(byte *)(iVar13 + iVar11) = bStack_a ^ bStack_9;
  if (*(char *)(param_1 + 0x74) != '\0') {
    iVar2 = 0;
    iVar13 = 2;
    do {
      iVar9 = param_1 + 0x2b;
      *(uint8_t *)(iVar2 + iVar9) = 0;
      iVar6 = param_1 + 0x3a;
      *(uint8_t *)(iVar2 + iVar6) = 0;
      iVar7 = param_1 + 0x49;
      *(uint8_t *)(iVar2 + iVar7) = 0;
      iVar4 = iVar2 + 1;
      *(uint8_t *)(iVar4 + iVar9) = 0;
      *(uint8_t *)(iVar4 + iVar6) = 0;
      *(uint8_t *)(iVar4 + iVar7) = 0;
      iVar4 = iVar2 + 2;
      *(uint8_t *)(iVar4 + iVar9) = 0;
      *(uint8_t *)(iVar4 + iVar6) = 0;
      *(uint8_t *)(iVar4 + iVar7) = 0;
      iVar4 = iVar2 + 3;
      *(uint8_t *)(iVar4 + iVar9) = 0;
      *(uint8_t *)(iVar4 + iVar6) = 0;
      *(uint8_t *)(iVar4 + iVar7) = 0;
      iVar4 = iVar2 + 4;
      *(uint8_t *)(iVar4 + iVar9) = 0;
      *(uint8_t *)(iVar4 + iVar6) = 0;
      *(uint8_t *)(iVar4 + iVar7) = 0;
      iVar13 = iVar13 + -1;
      iVar2 = iVar2 + 5;
    } while (-1 < iVar13);
    *(uint8_t *)(param_1 + 0x74) = 0;
  }
  *piVar17 = iVar11;
  call_render_callback_with_lock(param_1,iVar15,iVar16,iVar12,*piVar17);
  return;
}
