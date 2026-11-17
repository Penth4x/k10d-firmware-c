/* @k10d render_dot_matrix_pattern @ 0x10485a7e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x10485c7c) */
/* WARNING: Removing unreachable block (ram,0x10485c8e) */
/* WARNING: Removing unreachable block (ram,0x10485c84) */
/* WARNING: Removing unreachable block (ram,0x10485c96) */
/* WARNING: Removing unreachable block (ram,0x10485c88) */
/* WARNING: Removing unreachable block (ram,0x10485c9a) */
/* WARNING: Removing unreachable block (ram,0x10485c20) */
/* WARNING: Removing unreachable block (ram,0x10485c32) */
/* WARNING: Removing unreachable block (ram,0x10485c28) */
/* WARNING: Removing unreachable block (ram,0x10485c3a) */
/* WARNING: Removing unreachable block (ram,0x10485c2c) */
/* WARNING: Removing unreachable block (ram,0x10485c3e) */
/* WARNING: Removing unreachable block (ram,0x10485c72) */
/* WARNING: Removing unreachable block (ram,0x10485ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void render_dot_matrix_pattern(int param_1,ushort param_2,uint param_3)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t *puVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  uint8_t *puVar13;
  uint8_t uVar15;
  byte *pbVar14;
  char *pcVar16;
  int iVar17;
  uint8_t uVar18;
  uint8_t uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uStack_30;
  uint8_t *puStack_2c;
  uint8_t *puStack_28;
  uint8_t *puStack_24;
  
  if ((0x1f < param_1) && (param_1 < 0x85)) {
    iVar20 = (uint)param_2 * 3;
    uRam800102d6 = (uint16_t)param_3;
    uVar1 = *(uint8_t *)(iVar20 + 0x105ab968/*ROM*/);
    uVar2 = *(uint8_t *)(iVar20 + 0x105ab96a/*ROM*/);
    uVar3 = *(uint8_t *)(iVar20 + 0x105ab969/*ROM*/);
    if (param_3 == 0xffff) {
      uVar15 = 0;
      uVar19 = 0x80;
      uVar18 = 0x80;
    }
    else {
      iVar20 = (param_3 & 0xffff) * 3;
      uVar15 = *(uint8_t *)(iVar20 + 0x105ab968/*ROM*/);
      uVar19 = *(uint8_t *)(iVar20 + 0x105ab96a/*ROM*/);
      uVar18 = *(uint8_t *)(iVar20 + 0x105ab969/*ROM*/);
    }
    uVar4 = (uint)uRam800102d2;
    pcVar16 = (char *)((param_1 + -0x20) * 0x120 + 0x105ab980/*ROM*/);
    uVar21 = (uint)uRam800102cc;
    uVar22 = (uint)uRam800102d0;
    puStack_24 = (uint8_t *)(uVar21 * uVar4 * 0x18 + _DAT_800102a0/*SDRAM*/ + uVar22 * 0xc);
    iVar20 = 0;
    pcVar12 = pcVar16;
    uRam800102d8 = param_2;
    do {
      iVar17 = 2;
      puVar8 = puStack_24;
      do {
        if (*pcVar12 == '\x06') {
          *puVar8 = 0;
        }
        else if (*pcVar12 == '\0') {
          *puVar8 = uVar15;
        }
        else {
          *puVar8 = uVar1;
        }
        puVar7 = puVar8 + 1;
        if (pcVar12[1] == '\x06') {
          *puVar7 = 0;
        }
        else if (pcVar12[1] == '\0') {
          *puVar7 = uVar15;
        }
        else {
          *puVar7 = uVar1;
        }
        puVar7 = puVar8 + 2;
        pcVar11 = pcVar12 + 3;
        if (pcVar12[2] == '\x06') {
          *puVar7 = 0;
        }
        else if (pcVar12[2] == '\0') {
          *puVar7 = uVar15;
        }
        else {
          *puVar7 = uVar1;
        }
        puVar7 = puVar8 + 3;
        pcVar12 = pcVar12 + 4;
        if (*pcVar11 == '\x06') {
          *puVar7 = 0;
        }
        else if (*pcVar11 == '\0') {
          *puVar7 = uVar15;
        }
        else {
          *puVar7 = uVar1;
        }
        iVar17 = iVar17 + -1;
        puVar8 = puVar8 + 4;
      } while (-1 < iVar17);
      iVar20 = iVar20 + 1;
      puStack_24 = puStack_24 + uVar21;
    } while (iVar20 < 0x18);
    iVar5 = (int)uVar21 >> 1;
    iVar20 = uVar4 * 0xc * iVar5;
    iVar17 = uVar22 * 6;
    puStack_28 = (uint8_t *)(iRam800102a4 + iVar20 + iVar17);
    puStack_2c = (uint8_t *)(iVar20 + _DAT_800102a8/*SDRAM*/ + iVar17);
    uStack_30 = 0;
    pcVar12 = pcVar16;
    do {
      if ((uStack_30 & 1) == 0) {
        pcVar12 = pcVar12 + 0xc;
      }
      else {
        iVar20 = 2;
        puVar8 = puStack_28;
        puVar7 = puStack_2c;
        do {
          if (pcVar12[1] == '\x06') {
            *puVar8 = 0x80;
            *puVar7 = 0x80;
          }
          else if (pcVar12[1] == '\0') {
            *puVar8 = uVar19;
            *puVar7 = uVar18;
          }
          else {
            *puVar8 = uVar2;
            *puVar7 = uVar3;
          }
          puVar9 = puVar8 + 1;
          puVar13 = puVar7 + 1;
          if (pcVar12[3] == '\x06') {
            *puVar9 = 0x80;
            *puVar13 = 0x80;
          }
          else if (pcVar12[3] == '\0') {
            *puVar9 = uVar19;
            *puVar13 = uVar18;
          }
          else {
            *puVar9 = uVar2;
            *puVar13 = uVar3;
          }
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
          pcVar12 = pcVar12 + 4;
          iVar20 = iVar20 + -1;
        } while (-1 < iVar20);
        puStack_28 = puStack_28 + iVar5;
        puStack_2c = puStack_2c + iVar5;
      }
      uStack_30 = uStack_30 + 1;
    } while ((int)uStack_30 < 0x18);
    pbVar14 = (byte *)(uVar4 * 0x18 * iVar5 + _DAT_800102ac/*SDRAM*/ + iVar17);
    iVar20 = 0;
    do {
      iVar17 = 1;
      pbVar10 = pbVar14;
      do {
        if (param_3 == 0xffff) {
          pcVar12 = pcVar16 + 1;
          if (*pcVar16 == '\0') {
            bVar6 = 0;
          }
          else {
            bVar6 = 0xe0;
          }
          pcVar16 = pcVar16 + 2;
          if (*pcVar12 != '\0') {
            bVar6 = bVar6 | 0xe;
          }
        }
        else {
          bVar6 = 0xee;
        }
        *pbVar10 = bVar6;
        if (param_3 == 0xffff) {
          pcVar12 = pcVar16 + 1;
          if (*pcVar16 == '\0') {
            bVar6 = 0;
          }
          else {
            bVar6 = 0xe0;
          }
          pcVar16 = pcVar16 + 2;
          if (*pcVar12 != '\0') {
            bVar6 = bVar6 | 0xe;
          }
        }
        else {
          bVar6 = 0xee;
        }
        pbVar10[1] = bVar6;
        if (param_3 == 0xffff) {
          pcVar12 = pcVar16 + 1;
          if (*pcVar16 == '\0') {
            bVar6 = 0;
          }
          else {
            bVar6 = 0xe0;
          }
          pcVar16 = pcVar16 + 2;
          if (*pcVar12 != '\0') {
            bVar6 = bVar6 | 0xe;
          }
        }
        else {
          bVar6 = 0xee;
        }
        pbVar10[2] = bVar6;
        iVar17 = iVar17 + -1;
        pbVar10 = pbVar10 + 3;
      } while (-1 < iVar17);
      iVar20 = iVar20 + 1;
      pbVar14 = pbVar14 + iVar5;
    } while (iVar20 < 0x18);
    if (uVar22 < 0x36) {
      uRam800102d0 = uRam800102d0 + 1;
    }
    else {
      uRam800102d0 = 1;
    }
  }
  return;
}
