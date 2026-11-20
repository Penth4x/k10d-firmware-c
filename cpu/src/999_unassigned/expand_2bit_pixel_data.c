/* @k10d expand_2bit_pixel_data @ 0x1049099e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Decodes 2-bit packed pixel data into 8-bit values using a lookup table and writes them
 *   to a destination buffer.
 * summary:
 *   The function iterates through a source buffer of packed 2-bit values, unpacking them
 *   into 8-bit pixels. It uses a lookup table (DAT_105984dc) to map the 2-bit codes to
 *   specific byte values, handling different cases for zero, one, and other values. The
 *   output is written to a destination buffer with specific stride and offset calculations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10490bb6) overlaps instruction at (ram,0x10490bb4)
    */

void expand_2bit_pixel_data(void *dest,void *src,int block_size,int total_size)

{
  byte bVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  int iVar5;
  int iVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t *puVar9;
  int iVar10;
  uint8_t uVar11;
  uint8_t uVar12;
  uint8_t uVar13;
  byte bVar14;
  int iVar15;
  uint8_t *puVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint8_t uVar22;
  ushort in_stack_00000002;
  ushort in_stack_00000006;
  int in_stack_00000008;
  ushort in_stack_0000000e;
  ushort in_stack_00000012;
  ushort in_stack_00000016;
  ushort in_stack_0000001a;
  char in_stack_0000001f;
  char in_stack_00000023;
  char in_stack_00000027;
  uint uStack_2c;
  uint8_t *puStack_20;
  int iStack_1c;
  byte *pbStack_18;
  uint8_t *puStack_14;
  uint8_t *puStack_10;
  
  uVar18 = (uint)in_stack_0000000e;
  iVar10 = (int)uVar18 >> 1;
  iVar6 = iVar10 * ((int)(uint)in_stack_00000012 >> 1);
  uVar20 = (uint)in_stack_00000006;
  iVar17 = uVar18 * in_stack_00000012 + in_stack_00000008;
  puStack_20 = (uint8_t *)(in_stack_00000008 + (uint)in_stack_00000002 + uVar20 * uVar18);
  iVar21 = ((int)uVar20 >> 1) * iVar10;
  iVar5 = (int)(uint)in_stack_00000002 >> 1;
  iVar15 = iVar17 + iVar6;
  puStack_10 = (uint8_t *)(iVar17 + iVar21 + iVar5);
  puStack_14 = (uint8_t *)(iVar15 + iVar21 + iVar5);
  pbStack_18 = (byte *)(iVar6 + iVar15 + uVar20 * iVar10 + iVar5);
  iVar6 = (uint)in_stack_00000016 * 3;
  uVar13 = (&DAT_105984dc/*ROM*/)[iVar6];
  uVar2 = (&DAT_105984de/*ROM*/)[iVar6];
  uVar3 = (&DAT_105984dd/*ROM*/)[iVar6];
  if (in_stack_0000001a == 0xff) {
    uVar22 = 0;
    uVar11 = 0x80;
    uVar4 = 0x80;
  }
  else {
    iVar6 = (uint)in_stack_0000001a * 3;
    uVar4 = (&DAT_105984de/*ROM*/)[iVar6];
    uVar22 = (&DAT_105984dc/*ROM*/)[iVar6];
    uVar11 = (&DAT_105984dd/*ROM*/)[iVar6];
  }
  iStack_1c = 0;
  iVar6 = block_size >> 2;
  pbVar19 = src;
  if (0 < total_size) {
    do {
      iVar21 = 0;
      puVar8 = puStack_20;
      if (0 < iVar6) {
        do {
          uVar12 = uVar22;
          if (in_stack_0000001f == '\0') {
            uVar12 = *puVar8;
          }
          bVar14 = *pbVar19;
          uVar18 = (uint)bVar14;
          pbVar19 = pbVar19 + 1;
          if ((int)uVar18 >> 6 == 1) {
            *puVar8 = 0;
          }
          else if ((int)uVar18 >> 6 == 0) {
            *puVar8 = uVar12;
          }
          else {
            *puVar8 = uVar13;
          }
          uVar20 = (int)uVar18 >> 4 & 3;
          puVar7 = puVar8 + 1;
          if (uVar20 == 1) {
            *puVar7 = 0;
          }
          else if (uVar20 == 0) {
            *puVar7 = uVar12;
          }
          else {
            *puVar7 = uVar13;
          }
          uVar20 = (int)uVar18 >> 2 & 3;
          puVar7 = puVar8 + 2;
          if (uVar20 == 1) {
            *puVar7 = 0;
          }
          else if (uVar20 == 0) {
            *puVar7 = uVar12;
          }
          else {
            *puVar7 = uVar13;
          }
          puVar7 = puVar8 + 3;
          if ((uVar18 & 3) == 1) {
            *puVar7 = 0;
          }
          else if ((bVar14 & 3) == 0) {
            *puVar7 = uVar12;
          }
          else {
            *puVar7 = uVar13;
          }
          iVar21 = iVar21 + 1;
          puVar8 = puVar8 + 4;
        } while (iVar21 < iVar6);
      }
      puStack_20 = puStack_20 + in_stack_0000000e;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < total_size);
  }
  uStack_2c = 0;
  pbVar19 = src;
  if (0 < total_size) {
    do {
      if ((uStack_2c & 1) == 0) {
        pbVar19 = pbVar19 + iVar6;
      }
      else {
        iVar21 = 0;
        puVar8 = puStack_10;
        puVar7 = puStack_14;
        if (0 < iVar6) {
          do {
            bVar14 = *pbVar19;
            pbVar19 = pbVar19 + 1;
            uVar13 = uVar4;
            uVar22 = uVar11;
            if (in_stack_0000001f == '\0') {
              uVar13 = *puVar8;
              uVar22 = *puVar7;
            }
            uVar18 = (int)(uint)bVar14 >> 4 & 3;
            if (uVar18 == 1) {
              *puVar8 = 0x80;
              *puVar7 = 0x80;
            }
            else if (uVar18 == 0) {
              *puVar8 = uVar13;
              *puVar7 = uVar22;
            }
            else {
              *puVar8 = uVar2;
              *puVar7 = uVar3;
            }
            puVar9 = puVar8 + 1;
            puVar16 = puVar7 + 1;
            if ((bVar14 & 3) == 1) {
              *puVar9 = 0x80;
              *puVar16 = 0x80;
            }
            else if ((bVar14 & 3) == 0) {
              *puVar9 = uVar13;
              *puVar16 = uVar22;
            }
            else {
              *puVar9 = uVar2;
              *puVar16 = uVar3;
            }
            puVar8 = puVar8 + 2;
            iVar21 = iVar21 + 1;
            puVar7 = puVar7 + 2;
          } while (iVar21 < iVar6);
        }
        puStack_10 = puStack_10 + iVar10;
        puStack_14 = puStack_14 + iVar10;
      }
      uStack_2c = uStack_2c + 1;
    } while ((int)uStack_2c < total_size);
  }
  if ((in_stack_0000001f != '\0') && (iVar21 = 0, 0 < total_size)) {
    do {
      if (0 < iVar6) {
        iVar5 = 0;
        pbVar19 = pbStack_18;
        do {
          bVar1 = *(byte *)src;
          uVar18 = (uint)bVar1;
          src = (void *)((int)src + 1);
          bVar14 = 0;
          if ((((int)uVar18 >> 6 != 0) || (in_stack_0000001a != 0xff)) &&
             (bVar14 = 0xf0, in_stack_00000023 == '\0')) {
            bVar14 = 0xe0;
          }
          if ((((int)uVar18 >> 4 & 3U) != 0) || (in_stack_0000001a != 0xff)) {
            if (in_stack_00000023 == '\0') {
              bVar14 = bVar14 | 0xe;
            }
            else {
              bVar14 = bVar14 | 0xf;
            }
          }
          if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
            if (in_stack_00000023 != '\0') {
              bVar14 = 0xd0;
              goto code_r0x10490c34;
            }
            bVar14 = 0xc0;
code_r0x10490c38:
            if (bVar14 == 0xf) goto code_r0x10490c3c;
          }
          else {
code_r0x10490c34:
            if (bVar14 != 0xe) goto code_r0x10490c38;
code_r0x10490c3c:
            bVar14 = 0xd;
            if (in_stack_00000023 == '\0') {
              bVar14 = 0xc;
            }
          }
          if (in_stack_00000027 != '\0') {
            bVar14 = bVar14 & 0x77;
          }
          *pbVar19 = bVar14;
          bVar14 = 0;
          if (((((int)uVar18 >> 2 & 3U) != 0) || (in_stack_0000001a != 0xff)) &&
             (bVar14 = 0xf0, in_stack_00000023 == '\0')) {
            bVar14 = 0xe0;
          }
          if (((bVar1 & 3) != 0) || (in_stack_0000001a != 0xff)) {
            if (in_stack_00000023 == '\0') {
              bVar14 = bVar14 | 0xe;
            }
            else {
              bVar14 = bVar14 | 0xf;
            }
          }
          if ((bVar14 == 0xe0) || (bVar14 == 0xf0)) {
            if (in_stack_00000023 != '\0') {
              bVar14 = 0xd0;
              goto code_r0x10490cb0;
            }
            bVar14 = 0xc0;
code_r0x10490cb4:
            if (bVar14 == 0xf) goto code_r0x10490cb8;
          }
          else {
code_r0x10490cb0:
            if (bVar14 != 0xe) goto code_r0x10490cb4;
code_r0x10490cb8:
            bVar14 = 0xd;
            if (in_stack_00000023 == '\0') {
              bVar14 = 0xc;
            }
          }
          if (in_stack_00000027 != '\0') {
            bVar14 = bVar14 & 0x77;
          }
          pbVar19[1] = bVar14;
          iVar5 = iVar5 + 1;
          if (iVar6 <= iVar5) break;
          pbVar19 = pbVar19 + 2;
        } while( true );
      }
      iVar21 = iVar21 + 1;
      pbStack_18 = pbStack_18 + iVar10;
    } while (iVar21 < total_size);
  }
  return;
}
