/* @k10d copy_two_region_blocks @ 0x104c8616
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * purpose:
 *   Copies two rectangular byte regions from source buffers to destination buffers using
 *   unrolled loops.
 * summary:
 *   The function performs a series of MMIO-like or buffer operations via
 *   forward_event_with_payload and compute_six_fixed_point_values, then falls back to
 *   manual byte-copy loops for two 2D regions. It reads dimensions from
 *   return_first_word_1045c514/read_struct_field_at_offset_4, computes offsets, and copies
 *   bytes in chunks of 3 with remainder handling. It sets a flag at param_1+0x219 on
 *   success and cleans up temporary objects via cls_105b9458_delete.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int copy_two_region_blocks(int param_1,int param_2,void *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint32_t *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  void **ppuVar17;
  uint32_t uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uintptr_t sp;
  uint8_t *puVar24;
  uint8_t auStack_324 [40];
  cls_105b9458 cStack_27c;
  uint32_t auStack_68 [2];
  uint32_t uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t uStack_48;
  uint32_t uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint16_t uStack_2e;
  uint16_t uStack_2c;
  uint32_t auStack_28 [2];
  int iStack_20;
  int aiStack_1c [5];
  
  puVar24 = auStack_324;
  *(uint8_t *)(param_1 + 0x219) = 0;
  cls_105b9458_new(&cStack_27c);
  puVar13 = (uint32_t *)(param_2 + 0x2c);
  uVar14 = return_first_word_1045c514(puVar13);
  uVar15 = read_struct_field_at_offset_4(puVar13);
  alloc_two_word_pair_1045c3dc(auStack_68,uVar14 & 0xffff,(int)(uVar15 & 0xffff) >> 1);
  iVar16 = compute_buffer_size_and_init(&cStack_27c,auStack_68,2);
  if (iVar16 == 0) {
    if (cStack_27c.field_0x10 == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
  }
  else {
    uStack_50 = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    uStack_48 = 0;
    iStack_5c = cStack_27c.field_0x20;
    iStack_58 = cStack_27c.field_0x24;
    iStack_54 = cStack_27c.field_0x28;
    uStack_60 = cStack_27c.field_0x1c;
    ppuVar17 = &cStack_27c.field_0x2c;
    uVar18 = return_first_word_1045c514(ppuVar17);
    uStack_4c = (uint16_t)uVar18;
    uVar18 = return_first_word_1045c514(ppuVar17);
    uStack_50 = (uint16_t)uVar18;
    uVar18 = read_struct_field_at_offset_4(ppuVar17);
    uStack_4e = (uint16_t)uVar18;
    uStack_4a = 0;
    param_4 = param_4 * 3;
    uVar18 = *(uint32_t *)(param_1 + 0x4c);
    pbVar7 = &DAT_105b94e0/*ROM*/ + param_4;
    bVar3 = (&DAT_105b94e1/*ROM*/)[param_4];
    bVar1 = *pbVar7;
    uStack_48 = uStack_4a;
    *(ushort *)(puVar24 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[param_4];
    forward_event_with_payload(uVar18,&uStack_60,(ushort)bVar1,(ushort)bVar3,*(uint16_t *)(puVar24 + 2));
    uStack_34 = 0;
    iStack_40 = *(int *)(param_2 + 0x20);
    iStack_3c = *(int *)(param_2 + 0x24);
    iStack_38 = *(int *)(param_2 + 0x28);
    uStack_44 = *(uint32_t *)(param_2 + 0x1c);
    uStack_32 = uStack_34;
    uStack_30 = uStack_34;
    uStack_2e = uStack_34;
    uStack_2c = uStack_34;
    uVar18 = return_first_word_1045c514(puVar13);
    uStack_30 = (uint16_t)uVar18;
    uVar18 = return_first_word_1045c514(puVar13);
    uStack_34 = (uint16_t)uVar18;
    uVar18 = read_struct_field_at_offset_4(puVar13);
    uStack_32 = (uint16_t)uVar18;
    uStack_2e = 0;
    uStack_2c = uStack_2e;
    uVar14 = return_first_word_1045c514(puVar13);
    iStack_20 = (int)(uVar14 & 0xffff) >> 1;
    uVar14 = read_struct_field_at_offset_4(puVar13);
    aiStack_1c[0] = (int)(uVar14 & 0xffff) >> 1;
    aiStack_1c[1] = 0;
    aiStack_1c[2] = 0;
    aiStack_1c[3] = 0;
    aiStack_1c[4] = 0;
    bVar1 = *pbVar7;
    bVar3 = (&DAT_105b94e1/*ROM*/)[param_4];
    bVar4 = (&DAT_105b94e2/*ROM*/)[param_4];
    uVar18 = *(uint32_t *)(param_1 + 0x4c);
    *(uint16_t *)(puVar24 + 2) = 0x200;
    *(int **)(puVar24 + 4) = &iStack_20;
    *(int **)(puVar24 + 8) = aiStack_1c;
    *(int **)(puVar24 + 0xc) = aiStack_1c + 1;
    *(int **)(puVar24 + 0x10) = aiStack_1c + 2;
    *(int **)(puVar24 + 0x14) = aiStack_1c + 3;
    *(int **)(puVar24 + 0x18) = aiStack_1c + 4;
    *(ushort *)(puVar24 + 0x1e) = (ushort)bVar1;
    *(ushort *)(puVar24 + 0x22) = (ushort)bVar3;
    *(ushort *)(puVar24 + 0x26) = (ushort)bVar4;
    iVar16 = compute_six_fixed_point_values(uVar18,&uStack_44,&uStack_60,0x100,*(uint16_t *)(puVar24 + 2),
                          *(int **)(puVar24 + 4),*(int **)(puVar24 + 8),*(int **)(puVar24 + 0xc),
                          *(int **)(puVar24 + 0x10),*(int **)(puVar24 + 0x14),
                          *(int **)(puVar24 + 0x18),*(uint16_t *)(puVar24 + 0x1e),
                          *(uint16_t *)(puVar24 + 0x22),*(uint16_t *)(puVar24 + 0x26));
    if (iVar16 != 0) {
      uVar14 = return_first_word_1045c514(puVar13);
      uVar15 = read_struct_field_at_offset_4(puVar13);
      alloc_two_word_pair_1045c3dc(auStack_28,uVar14 & 0xffff,uVar15 & 0xffff);
      iVar16 = compute_buffer_size_and_init(param_3,auStack_28,2);
      if (iVar16 == 0) {
        if (*(int *)((int)param_3 + 0x10) == 2) {
          *(uint8_t *)(param_1 + 0x219) = 1;
        }
      }
      else {
        iStack_5c = *(int *)((int)param_3 + 0x20);
        iStack_58 = *(int *)((int)param_3 + 0x24);
        iStack_54 = *(int *)((int)param_3 + 0x28);
        uStack_60 = *(uint32_t *)((int)param_3 + 0x1c);
        puVar13 = (uint32_t *)((int)param_3 + 0x2c);
        uVar18 = return_first_word_1045c514(puVar13);
        uStack_4c = (uint16_t)uVar18;
        uVar18 = return_first_word_1045c514(puVar13);
        uStack_50 = (uint16_t)uVar18;
        uVar18 = read_struct_field_at_offset_4(puVar13);
        uStack_4e = (uint16_t)uVar18;
        uStack_4a = 0;
        uVar18 = *(uint32_t *)(param_1 + 0x4c);
        bVar5 = (&DAT_105b94e1/*ROM*/)[param_4];
        bVar2 = *pbVar7;
        uStack_48 = uStack_4a;
        *(ushort *)(puVar24 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[param_4];
        forward_event_with_payload(uVar18,&uStack_60,(ushort)bVar2,(ushort)bVar5,*(uint16_t *)(puVar24 + 2));
        iStack_40 = cStack_27c.field_0x20;
        iStack_3c = cStack_27c.field_0x24;
        iStack_38 = cStack_27c.field_0x28;
        uStack_44 = cStack_27c.field_0x1c;
        uVar18 = return_first_word_1045c514(ppuVar17);
        uStack_30 = (uint16_t)uVar18;
        uVar18 = return_first_word_1045c514(ppuVar17);
        uStack_34 = (uint16_t)uVar18;
        uVar18 = read_struct_field_at_offset_4(ppuVar17);
        uStack_32 = (uint16_t)uVar18;
        uStack_2e = 0;
        uStack_2c = uStack_2e;
        uVar14 = return_first_word_1045c514(ppuVar17);
        iStack_20 = (int)(uVar14 & 0xffff) >> 1;
        uVar14 = read_struct_field_at_offset_4(ppuVar17);
        aiStack_1c[0] = (int)(uVar14 & 0xffff) >> 1;
        aiStack_1c[1] = 0;
        aiStack_1c[2] = 0;
        aiStack_1c[3] = 0;
        aiStack_1c[4] = 0;
        uVar18 = *(uint32_t *)(param_1 + 0x4c);
        *(uint16_t *)(puVar24 + 2) = 0x80;
        *(int **)(puVar24 + 8) = aiStack_1c;
        *(int **)(puVar24 + 4) = &iStack_20;
        *(int **)(puVar24 + 0xc) = aiStack_1c + 1;
        *(int **)(puVar24 + 0x10) = aiStack_1c + 2;
        *(int **)(puVar24 + 0x14) = aiStack_1c + 3;
        *(int **)(puVar24 + 0x18) = aiStack_1c + 4;
        *(ushort *)(puVar24 + 0x1e) = (ushort)bVar1;
        *(ushort *)(puVar24 + 0x22) = (ushort)bVar3;
        *(ushort *)(puVar24 + 0x26) = (ushort)bVar4;
        iVar16 = compute_six_fixed_point_values(uVar18,&uStack_44,&uStack_60,0x100,*(uint16_t *)(puVar24 + 2),
                              *(int **)(puVar24 + 4),*(int **)(puVar24 + 8),*(int **)(puVar24 + 0xc)
                              ,*(int **)(puVar24 + 0x10),*(int **)(puVar24 + 0x14),
                              *(int **)(puVar24 + 0x18),*(uint16_t *)(puVar24 + 0x1e),
                              *(uint16_t *)(puVar24 + 0x22),*(uint16_t *)(puVar24 + 0x26));
        if (iVar16 != 0) {
          uVar14 = return_first_word_1045c514(ppuVar17);
          uVar15 = read_struct_field_at_offset_4(ppuVar17);
          uVar14 = (uVar14 & 0xffff) * ((uVar15 & 0xffff) - 1);
          uVar15 = uVar14 >> 2;
          iVar8 = cStack_27c.field_0x28 + uVar15;
          iVar20 = cStack_27c.field_0x20 + uVar14;
          iVar22 = cStack_27c.field_0x24 + uVar15;
          uVar14 = return_first_word_1045c514(puVar13);
          uVar15 = read_struct_field_at_offset_4(puVar13);
          uVar14 = (uVar14 & 0xffff) * ((uVar15 & 0xffff) - 2);
          uVar15 = uVar14 >> 2;
          iVar9 = *(int *)((int)param_3 + 0x28) + uVar15;
          iVar21 = *(int *)((int)param_3 + 0x20) + uVar14;
          iVar23 = *(int *)((int)param_3 + 0x24) + uVar15;
          uVar14 = return_first_word_1045c514(ppuVar17);
          uVar15 = uVar14 & 0xffff;
          uVar14 = (uVar14 & 0xffff) >> 2;
          iVar10 = 0;
          if (uVar15 != 0) {
            iVar19 = uVar15 - 3;
            if (2 < iVar19) {
              do {
                iVar11 = iVar10 + 1;
                *(uint8_t *)(iVar10 + iVar21) = *(uint8_t *)(iVar10 + iVar20);
                iVar6 = iVar21 + uVar15;
                *(uint8_t *)(iVar10 + iVar6) = *(uint8_t *)(iVar10 + iVar20);
                iVar12 = iVar10 + 2;
                *(uint8_t *)(iVar11 + iVar21) = *(uint8_t *)(iVar11 + iVar20);
                *(uint8_t *)(iVar11 + iVar6) = *(uint8_t *)(iVar11 + iVar20);
                iVar10 = iVar10 + 3;
                *(uint8_t *)(iVar12 + iVar21) = *(uint8_t *)(iVar12 + iVar20);
                iVar19 = iVar19 + -3;
                *(uint8_t *)(iVar12 + iVar6) = *(uint8_t *)(iVar12 + iVar20);
              } while (-1 < iVar19);
            }
            for (iVar19 = iVar19 + 2; -1 < iVar19; iVar19 = iVar19 + -1) {
              *(uint8_t *)(iVar21 + iVar10) = *(uint8_t *)(iVar20 + iVar10);
              *(uint8_t *)(iVar21 + uVar15 + iVar10) = *(uint8_t *)(iVar20 + iVar10);
              iVar10 = iVar10 + 1;
            }
          }
          iVar10 = 0;
          if (uVar14 != 0) {
            iVar20 = uVar14 - 3;
            if (2 < iVar20) {
              do {
                *(uint8_t *)(iVar10 + iVar23) = *(uint8_t *)(iVar22 + iVar10);
                iVar19 = iVar23 + uVar14;
                *(uint8_t *)(iVar10 + iVar19) = *(uint8_t *)(iVar10 + iVar22);
                iVar21 = iVar10 + 1;
                *(uint8_t *)(iVar21 + iVar23) = *(uint8_t *)(iVar22 + iVar21);
                *(uint8_t *)(iVar21 + iVar19) = *(uint8_t *)(iVar21 + iVar22);
                iVar21 = iVar10 + 2;
                *(uint8_t *)(iVar21 + iVar23) = *(uint8_t *)(iVar21 + iVar22);
                *(uint8_t *)(iVar21 + iVar19) = *(uint8_t *)(iVar21 + iVar22);
                iVar10 = iVar10 + 3;
                iVar20 = iVar20 + -3;
              } while (-1 < iVar20);
            }
            for (iVar20 = iVar20 + 2; -1 < iVar20; iVar20 = iVar20 + -1) {
              *(uint8_t *)(iVar23 + iVar10) = *(uint8_t *)(iVar22 + iVar10);
              *(uint8_t *)(iVar23 + uVar14 + iVar10) = *(uint8_t *)(iVar22 + iVar10);
              iVar10 = iVar10 + 1;
            }
          }
          iVar10 = 0;
          if (uVar14 != 0) {
            iVar20 = uVar14 - 3;
            if (2 < iVar20) {
              do {
                iVar20 = iVar20 + -3;
                *(uint8_t *)(iVar9 + iVar10) = *(uint8_t *)(iVar8 + iVar10);
                iVar22 = iVar9 + uVar14;
                *(uint8_t *)(iVar10 + iVar22) = *(uint8_t *)(iVar8 + iVar10);
                iVar21 = iVar10 + 1;
                *(uint8_t *)(iVar9 + iVar21) = *(uint8_t *)(iVar8 + iVar21);
                *(uint8_t *)(iVar21 + iVar22) = *(uint8_t *)(iVar8 + iVar21);
                iVar21 = iVar10 + 2;
                *(uint8_t *)(iVar21 + iVar9) = *(uint8_t *)(iVar8 + iVar21);
                *(uint8_t *)(iVar21 + iVar22) = *(uint8_t *)(iVar21 + iVar8);
                iVar10 = iVar10 + 3;
              } while (-1 < iVar20);
            }
            for (iVar20 = iVar20 + 2; -1 < iVar20; iVar20 = iVar20 + -1) {
              *(uint8_t *)(iVar9 + iVar10) = *(uint8_t *)(iVar8 + iVar10);
              *(uint8_t *)(iVar10 + iVar9 + uVar14) = *(uint8_t *)(iVar10 + iVar8);
              iVar10 = iVar10 + 1;
            }
          }
          free_heap_if_flagged_1045c402(auStack_28,2);
          free_heap_if_flagged_1045c402(auStack_68,2);
          cls_105b9458_delete(&cStack_27c,2);
          return iVar16;
        }
      }
      free_heap_if_flagged_1045c402(auStack_28,2);
    }
  }
  free_heap_if_flagged_1045c402(auStack_68,2);
  cls_105b9458_delete(&cStack_27c,2);
  return 0;
}
