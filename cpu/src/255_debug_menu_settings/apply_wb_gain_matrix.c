/* @k10d apply_wb_gain_matrix @ 0x104ebfb8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Computes and applies 3x3 white balance gain coefficients to a sensor readout context.
 * summary:
 *   The function reads a 3x3 matrix of short integers from a pointer returned by
 *   get_or_init_sram_buffer_1052c5b8 and multiplies it against a 3-element input vector to
 *   produce 9 output values. It then applies a scaling factor from param_3 and writes the
 *   results to a context object via a series of calls to functions at 0x1044e67c and
 *   0x1044f626-0x1044ff84. The structure of the 3x3 matrix multiplication and the
 *   subsequent gain application strongly suggests white balance correction in the image
 *   pipeline.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void apply_wb_gain_matrix(cls_105c29f8 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  uint32_t uVar10;
  uintptr_t sp;
  uint32_t *puVar11;
  uint8_t auStack_50 [8];
  short asStack_2c [9];
  short asStack_1a [9];
  
  puVar11 = (uint32_t *)auStack_50;
  iVar4 = param_2 * 4;
  (*(code *)0x1044ec74/*ROM*/)(param_1->field_0x8,*(uint32_t *)(param_3[1] + iVar4));
  (*(code *)0x1044e668/*ROM*/)(param_1->field_0x8,0x100);
  iVar7 = *(int *)(*param_3 + iVar4);
  if (*(char *)(param_3 + 4) == '\0') {
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1 & 0xff;
      asStack_2c[uVar6] = *(short *)(uVar6 * 2 + iVar7);
      uVar6 = uVar1;
    } while (uVar1 < 9);
  }
  else {
    piVar3 = (int *)get_or_init_sram_buffer_1052c5b8();
    iVar9 = *piVar3;
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1 & 0xff;
      asStack_1a[uVar6] = *(short *)(uVar6 * 2 + iVar7);
      uVar6 = uVar1;
    } while (uVar1 < 9);
    uVar1 = 0;
    uVar6 = 0;
    do {
      uVar5 = 0;
      do {
        iVar7 = 0;
        uVar2 = 0;
        do {
          iVar7 = (int)*(short *)(iVar9 + uVar1 * 6 + uVar2 * 2) *
                  (int)asStack_1a[uVar5 + uVar2 * 3] + iVar7;
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 3);
        asStack_2c[uVar6] =
             (short)((int)(((uint)(iVar7 + -0x1000 >> 0xc) >> 0x13) + iVar7 + -0x1000) >> 0xd);
        uVar5 = uVar5 + 1 & 0xff;
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar5 < 3);
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 3);
    asStack_2c[0] = (-asStack_2c[1] - asStack_2c[2]) + 0x100;
    asStack_2c[4] = (-asStack_2c[3] - asStack_2c[5]) + 0x100;
    asStack_2c[8] = 0x100 - (asStack_2c[7] + asStack_2c[6]);
    (*(code *)0x1044e67c/*ROM*/)(param_1->field_0x8,asStack_2c);
  }
  uVar6 = 0;
  do {
    uVar1 = uVar6 + 1 & 0xff;
    asStack_2c[uVar6] =
         (short)((int)asStack_2c[uVar6] * (uint)*(ushort *)((int)param_3 + 0x12) >> 0xd);
    uVar6 = uVar1;
  } while (uVar1 < 9);
  (*(code *)0x1044e67c/*ROM*/)(param_1->field_0x8,asStack_2c);
  (*(code *)0x1044f238/*ROM*/)(param_1->field_0x8 + 0x11,*(uint32_t *)(iVar4 + param_3[1]));
  iVar7 = param_1->field_0x8;
  *(uint16_t *)((int)puVar11 + 2) = 0;
  (*(code *)0x1044f32e/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *(uint16_t *)((int)puVar11 + 2) = 0;
  (*(code *)0x1044f35c/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *(uint16_t *)((int)puVar11 + 2) = 0;
  (*(code *)0x1044f38a/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *(uint16_t *)((int)puVar11 + 2) = 0;
  (*(code *)0x1044f3b8/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *puVar11 = 0;
  puVar11[1] = 0;
  (*(code *)0x1044f4be/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *puVar11 = 0;
  puVar11[1] = 0;
  (*(code *)0x1044f4e0/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *puVar11 = 0;
  puVar11[1] = 0;
  (*(code *)0x1044f502/*ROM*/)(iVar7 + 0x11,0,0,0);
  iVar7 = param_1->field_0x8;
  *puVar11 = 0;
  puVar11[1] = 0;
  (*(code *)0x1044f524/*ROM*/)(iVar7 + 0x11,0,0,0);
  uVar10 = *(uint32_t *)(*(int *)param_3[2] + iVar4);
  uVar8 = *(uint32_t *)(iVar4 + *(int *)param_3[3]);
  (*(code *)0x1044f626/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044f700/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044f7da/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044f8b4/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044f98e/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044fa68/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044fb42/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044fc1c/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044fcf6/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044fdd0/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044feaa/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  (*(code *)0x1044ff84/*ROM*/)(param_1->field_0x8 + 0x11,uVar10,uVar8);
  return;
}
