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

void apply_wb_gain_matrix(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint32_t uVar7;
  int iVar8;
  uint32_t uVar9;
  uintptr_t sp;
  uint32_t *puVar10;
  uint8_t auStack_50 [8];
  short asStack_2c [9];
  short asStack_1a [9];
  
  puVar10 = (uint32_t *)auStack_50;
  param_2 = param_2 * 4;
  (*(code *)0x1044ec74/*ROM*/)(*(uint32_t *)(param_1 + 8),*(uint32_t *)(param_3[1] + param_2));
  (*(code *)0x1044e668/*ROM*/)(*(uint32_t *)(param_1 + 8),0x100);
  iVar6 = *(int *)(*param_3 + param_2);
  if (*(char *)(param_3 + 4) == '\0') {
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1 & 0xff;
      asStack_2c[uVar5] = *(short *)(uVar5 * 2 + iVar6);
      uVar5 = uVar1;
    } while (uVar1 < 9);
  }
  else {
    piVar3 = (int *)get_or_init_sram_buffer_1052c5b8();
    iVar8 = *piVar3;
    uVar5 = 0;
    do {
      uVar1 = uVar5 + 1 & 0xff;
      asStack_1a[uVar5] = *(short *)(uVar5 * 2 + iVar6);
      uVar5 = uVar1;
    } while (uVar1 < 9);
    uVar1 = 0;
    uVar5 = 0;
    do {
      uVar4 = 0;
      do {
        iVar6 = 0;
        uVar2 = 0;
        do {
          iVar6 = (int)*(short *)(iVar8 + uVar1 * 6 + uVar2 * 2) *
                  (int)asStack_1a[uVar4 + uVar2 * 3] + iVar6;
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < 3);
        asStack_2c[uVar5] =
             (short)((int)(((uint)(iVar6 + -0x1000 >> 0xc) >> 0x13) + iVar6 + -0x1000) >> 0xd);
        uVar4 = uVar4 + 1 & 0xff;
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar4 < 3);
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 3);
    asStack_2c[0] = (-asStack_2c[1] - asStack_2c[2]) + 0x100;
    asStack_2c[4] = (-asStack_2c[3] - asStack_2c[5]) + 0x100;
    asStack_2c[8] = 0x100 - (asStack_2c[7] + asStack_2c[6]);
    (*(code *)0x1044e67c/*ROM*/)(*(uint32_t *)(param_1 + 8),asStack_2c);
  }
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1 & 0xff;
    asStack_2c[uVar5] =
         (short)((int)asStack_2c[uVar5] * (uint)*(ushort *)((int)param_3 + 0x12) >> 0xd);
    uVar5 = uVar1;
  } while (uVar1 < 9);
  (*(code *)0x1044e67c/*ROM*/)(*(uint32_t *)(param_1 + 8),asStack_2c);
  (*(code *)0x1044f238/*ROM*/)(*(int *)(param_1 + 8) + 0x11,*(uint32_t *)(param_2 + param_3[1]));
  iVar6 = *(int *)(param_1 + 8);
  *(uint16_t *)((int)puVar10 + 2) = 0;
  (*(code *)0x1044f32e/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *(uint16_t *)((int)puVar10 + 2) = 0;
  (*(code *)0x1044f35c/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *(uint16_t *)((int)puVar10 + 2) = 0;
  (*(code *)0x1044f38a/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *(uint16_t *)((int)puVar10 + 2) = 0;
  (*(code *)0x1044f3b8/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *puVar10 = 0;
  puVar10[1] = 0;
  (*(code *)0x1044f4be/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *puVar10 = 0;
  puVar10[1] = 0;
  (*(code *)0x1044f4e0/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *puVar10 = 0;
  puVar10[1] = 0;
  (*(code *)0x1044f502/*ROM*/)(iVar6 + 0x11,0,0,0);
  iVar6 = *(int *)(param_1 + 8);
  *puVar10 = 0;
  puVar10[1] = 0;
  (*(code *)0x1044f524/*ROM*/)(iVar6 + 0x11,0,0,0);
  uVar9 = *(uint32_t *)(*(int *)param_3[2] + param_2);
  uVar7 = *(uint32_t *)(param_2 + *(int *)param_3[3]);
  (*(code *)0x1044f626/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044f700/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044f7da/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044f8b4/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044f98e/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044fa68/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044fb42/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044fc1c/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044fcf6/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044fdd0/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044feaa/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  (*(code *)0x1044ff84/*ROM*/)(*(int *)(param_1 + 8) + 0x11,uVar9,uVar7);
  return;
}
