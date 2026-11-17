/* @k10d configure_sensor_readout_channels @ 0x10420934
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Configures four sensor readout channels with calculated offsets, gains, and timing
 *   parameters based on capture mode.
 * summary:
 *   The function calculates memory offsets using virtual calls for width/height and
 *   configures four channel handles (stored at param_1+0xd4..0xe0). It sets specific
 *   control values (0x8000/0x400 or 0xc000/0x600) via helper functions, applies gain/offset
 *   adjustments based on a mode flag, and writes final parameters from param_3 and param_4
 *   to the channels. Called during the capture sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void configure_sensor_readout_channels(int param_1,int param_2,int *param_3,uint8_t *param_4,char param_5)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int *piVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = **(int **)(param_1 + 0x30);
  iVar8 = (**(code **)(iVar8 + 0x9c))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x98));
  iVar9 = **(int **)(param_1 + 0x30);
  iVar9 = (**(code **)(iVar9 + 0xd4))
                    ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar9 + 0xd0));
  if (param_5 == '\0') {
    iVar7 = *param_3;
  }
  else {
    iVar7 = param_3[1];
  }
  iVar8 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar8 * iVar9 * 4 + iVar7);
  if (param_2 == 0) {
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)(param_1 + 0xec),0x8000);
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)(param_1 + 0xf0),0x8000);
    (*(code *)0x10454692/*ROM*/)(*(uint32_t *)(param_1 + 0xec),0);
    (*(code *)0x10454692/*ROM*/)(*(uint32_t *)(param_1 + 0xf0),0x400);
    iVar8 = **(int **)(param_1 + 0x30);
    iVar8 = (**(code **)(iVar8 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x98));
    uVar1 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar8 + iVar7);
    iVar8 = **(int **)(param_1 + 0x30);
    iVar8 = (**(code **)(iVar8 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x98));
    iVar9 = **(int **)(param_1 + 0x30);
    iVar9 = (**(code **)(iVar9 + 0xd4))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar9 + 0xd0));
    uVar2 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar8 * (iVar9 * 4 + -3) + iVar7);
    iVar8 = **(int **)(param_1 + 0x30);
    iVar8 = (**(code **)(iVar8 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x98));
    iVar9 = **(int **)(param_1 + 0x30);
    iVar9 = (**(code **)(iVar9 + 0xd4))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar9 + 0xd0));
    uVar3 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar8 * (iVar9 * 4 + -4) + iVar7);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xd4),iVar7);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xdc),uVar1);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xd8),uVar2);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xe0),uVar3);
    uVar2 = *(uint32_t *)(param_1 + 0xd4);
    iVar8 = **(int **)(param_1 + 0x30);
    uVar1 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar2,uVar1);
    uVar2 = *(uint32_t *)(param_1 + 0xdc);
    iVar8 = **(int **)(param_1 + 0x30);
    uVar1 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar2,uVar1);
    uVar2 = *(uint32_t *)(param_1 + 0xd8);
    iVar8 = **(int **)(param_1 + 0x30);
    uVar1 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar2,uVar1);
    uVar2 = *(uint32_t *)(param_1 + 0xe0);
    iVar8 = **(int **)(param_1 + 0x30);
    uVar1 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar2,uVar1);
    iVar8 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
    iVar8 = (**(code **)(iVar8 + 0x134))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar8 + 0x130));
    uVar1 = *(uint32_t *)(param_1 + 0xd4);
    piVar4 = *(int **)(param_1 + 0x30);
    if (iVar8 == 0) {
      sVar5 = (**(code **)(*piVar4 + 0x74))((int)piVar4 + (int)*(short *)(*piVar4 + 0x70));
      (*(code *)0x10456a52/*ROM*/)(uVar1,sVar5 + 2);
      uVar1 = *(uint32_t *)(param_1 + 0xdc);
      iVar8 = **(int **)(param_1 + 0x30);
      sVar5 = (**(code **)(iVar8 + 0x74))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x70));
      (*(code *)0x10456a52/*ROM*/)(uVar1,sVar5 + 2);
      uVar2 = *(uint32_t *)(param_1 + 0xd8);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar1 = (**(code **)(iVar8 + 0x74))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x70));
      (*(code *)0x10456a52/*ROM*/)(uVar2,uVar1);
      uVar1 = *(uint32_t *)(param_1 + 0xe0);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar6 = (**(code **)(iVar8 + 0x74))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x70));
    }
    else {
      uVar2 = (**(code **)(*piVar4 + 0x74))((int)piVar4 + (int)*(short *)(*piVar4 + 0x70));
      (*(code *)0x10456a52/*ROM*/)(uVar1,uVar2);
      uVar2 = *(uint32_t *)(param_1 + 0xdc);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar1 = (**(code **)(iVar8 + 0x74))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x70));
      (*(code *)0x10456a52/*ROM*/)(uVar2,uVar1);
      uVar1 = *(uint32_t *)(param_1 + 0xd8);
      iVar8 = **(int **)(param_1 + 0x30);
      sVar5 = (**(code **)(iVar8 + 0x74))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x70));
      (*(code *)0x10456a52/*ROM*/)(uVar1,sVar5 + 2);
      uVar1 = *(uint32_t *)(param_1 + 0xe0);
      iVar8 = **(int **)(param_1 + 0x30);
      iVar8 = (**(code **)(iVar8 + 0x74))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x70));
      uVar6 = iVar8 + 2U & 0xffff;
    }
  }
  else {
    if (param_2 != 1) {
      return;
    }
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)(param_1 + 0xec),0xc000);
    (*(code *)0x10454796/*ROM*/)(*(uint32_t *)(param_1 + 0xf0),0xc000);
    (*(code *)0x10454692/*ROM*/)(*(uint32_t *)(param_1 + 0xec),0x200);
    (*(code *)0x10454692/*ROM*/)(*(uint32_t *)(param_1 + 0xf0),0x600);
    iVar9 = **(int **)(param_1 + 0x30);
    iVar9 = (**(code **)(iVar9 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar9 + 0x98));
    uVar1 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar9 + iVar8);
    iVar9 = **(int **)(param_1 + 0x30);
    iVar9 = (**(code **)(iVar9 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar9 + 0x98));
    iVar7 = **(int **)(param_1 + 0x30);
    iVar7 = (**(code **)(iVar7 + 0xd4))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar7 + 0xd0));
    uVar2 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar9 * (iVar7 * 4 + -3) + iVar8);
    iVar9 = **(int **)(param_1 + 0x30);
    iVar9 = (**(code **)(iVar9 + 0x9c))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar9 + 0x98));
    iVar7 = **(int **)(param_1 + 0x30);
    iVar7 = (**(code **)(iVar7 + 0xd4))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar7 + 0xd0));
    uVar3 = (*(code *)0x1041b790/*ROM*/)(param_1,iVar9 * (iVar7 * 4 + -4) + iVar8);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xd4),iVar8);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xdc),uVar1);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xd8),uVar2);
    (*(code *)0x10456a8e/*ROM*/)(*(uint32_t *)(param_1 + 0xe0),uVar3);
    uVar2 = *(uint32_t *)(param_1 + 0xd4);
    iVar8 = **(int **)(param_1 + 0x30);
    uVar1 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar2,uVar1);
    uVar2 = *(uint32_t *)(param_1 + 0xdc);
    iVar8 = **(int **)(param_1 + 0x30);
    uVar1 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar2,uVar1);
    uVar1 = *(uint32_t *)(param_1 + 0xd8);
    iVar8 = **(int **)(param_1 + 0x30);
    sVar5 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar1,sVar5 + 2);
    uVar1 = *(uint32_t *)(param_1 + 0xe0);
    iVar8 = **(int **)(param_1 + 0x30);
    sVar5 = (**(code **)(iVar8 + 100))
                      ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x60));
    (*(code *)0x10456a70/*ROM*/)(uVar1,sVar5 + 2);
    iVar8 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
    iVar8 = (**(code **)(iVar8 + 0x134))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar8 + 0x130));
    if (iVar8 == 0) {
      uVar1 = *(uint32_t *)(param_1 + 0xd4);
      iVar8 = **(int **)(param_1 + 0x30);
      sVar5 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      (*(code *)0x10456a52/*ROM*/)(uVar1,sVar5 + 2);
      uVar1 = *(uint32_t *)(param_1 + 0xdc);
      iVar8 = **(int **)(param_1 + 0x30);
      sVar5 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      (*(code *)0x10456a52/*ROM*/)(uVar1,sVar5 + 2);
      uVar2 = *(uint32_t *)(param_1 + 0xd8);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar1 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      (*(code *)0x10456a52/*ROM*/)(uVar2,uVar1);
      uVar1 = *(uint32_t *)(param_1 + 0xe0);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar6 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
    }
    else {
      uVar2 = *(uint32_t *)(param_1 + 0xd4);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar1 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      (*(code *)0x10456a52/*ROM*/)(uVar2,uVar1);
      uVar2 = *(uint32_t *)(param_1 + 0xdc);
      iVar8 = **(int **)(param_1 + 0x30);
      uVar1 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      (*(code *)0x10456a52/*ROM*/)(uVar2,uVar1);
      uVar1 = *(uint32_t *)(param_1 + 0xd8);
      iVar8 = **(int **)(param_1 + 0x30);
      sVar5 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      (*(code *)0x10456a52/*ROM*/)(uVar1,sVar5 + 2);
      uVar1 = *(uint32_t *)(param_1 + 0xe0);
      iVar8 = **(int **)(param_1 + 0x30);
      iVar8 = (**(code **)(iVar8 + 0x7c))
                        ((int)*(int **)(param_1 + 0x30) + (int)*(short *)(iVar8 + 0x78));
      uVar6 = iVar8 + 2U & 0xffff;
    }
  }
  (*(code *)0x10456a52/*ROM*/)(uVar1,uVar6);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)(param_1 + 0xd4),*param_4);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)(param_1 + 0xd8),*param_4);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)(param_1 + 0xdc),*param_4);
  (*(code *)0x1045695c/*ROM*/)(*(uint32_t *)(param_1 + 0xe0),*param_4);
  (*(code *)0x10456c10/*ROM*/)(*(uint32_t *)(param_1 + 0xd4),param_3[2]);
  (*(code *)0x10456c30/*ROM*/)(*(uint32_t *)(param_1 + 0xd4),param_3[3]);
  (*(code *)0x10456c10/*ROM*/)(*(uint32_t *)(param_1 + 0xd8),param_3[2]);
  (*(code *)0x10456c30/*ROM*/)(*(uint32_t *)(param_1 + 0xd8),param_3[3]);
  (*(code *)0x10456c10/*ROM*/)(*(uint32_t *)(param_1 + 0xdc),param_3[2]);
  (*(code *)0x10456c30/*ROM*/)(*(uint32_t *)(param_1 + 0xdc),param_3[3]);
  return;
}
