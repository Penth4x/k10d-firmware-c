/* @k10d copy_sensor_line_buffer @ 0x103fe9ec
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Copies a line of sensor data from a source buffer to a destination buffer with stride
 *   and offset adjustments.
 * summary:
 *   The function reads width, height, and stride parameters from a structure pointed to by
 *   param_1. It calculates source and destination pointers based on a mode field at offset
 *   0x2e, which selects different stride values (0x18 or 0x30) and offset tables. It then
 *   iterates 0x30 times to copy 16-bit or 8-bit data chunks, adjusting the destination
 *   offset by a value derived from the mode. Finally, it updates the offset field at 0x4
 *   and clears a flag at 0x5a, potentially setting it again if the mode is 0xd and the line
 *   index matches specific values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_sensor_line_buffer(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uStack_14;
  uint uStack_c;
  
  uVar1 = (uint)*(ushort *)((int)param_1 + 0xc);
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x2c);
  uStack_14 = 0;
  uStack_c = 0;
  switch(*(uint8_t *)((int)param_1 + 0x2e)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    uStack_c = (uint)(byte)(DAT_105980b8/*ROM*/)[uVar2];
    if (uStack_c != (uStack_c & 0xfffffffe)) {
      uStack_c = uStack_c + 1;
    }
    uStack_14 = 0x18;
    break;
  case 8:
  case 9:
    uStack_14 = 0x18;
    uStack_c = 0x18;
    break;
  case 10:
  case 0xb:
  case 0xc:
    uStack_14 = 0x30;
    uStack_c = 0x30;
    break;
  case 0xd:
    uStack_c = (uint)(byte)(DAT_1059814c/*ROM*/)[uVar2];
    if (uStack_c != (uStack_c & 0xfffffffe)) {
      uStack_c = uStack_c + 1;
    }
    uStack_14 = 0x30;
  }
  iVar9 = ((int)uVar1 >> 1) * ((int)(uint)*(ushort *)((int)param_1 + 0xe) >> 1);
  iVar3 = *(ushort *)((int)param_1 + 6) * uVar1 + *(int *)((int)param_1 + 8) +
          (uint)*(ushort *)((int)param_1 + 4);
  iVar10 = uVar1 * *(ushort *)((int)param_1 + 0xe) + iVar9 + iVar9 + *(int *)((int)param_1 + 8) +
           (uint)*(ushort *)((int)param_1 + 6) * ((int)uVar1 >> 1) +
           ((int)(uint)*(ushort *)((int)param_1 + 4) >> 1);
  iVar9 = *(int *)((int)param_1 + 0x28) + ((uVar2 * uStack_14) / 2) * 0x30;
  iVar6 = *(int *)((int)param_1 + 0x1c) + uVar2 * uStack_14 * 0x30;
  uVar5 = 2;
  if (*(char *)((int)param_1 + 0x5a) == '\0') {
    uVar5 = 0;
  }
  uVar4 = (uStack_c - uVar5 & 0xffff) / 2;
  iVar8 = 0;
  do {
    if (uVar4 != 0) {
      iVar7 = 0;
      do {
        *(uint16_t *)(iVar3 + iVar7) = *(uint16_t *)(iVar6 + iVar7 + (uVar5 / 2) * 2);
        iVar7 = iVar7 + 2;
      } while (iVar7 < (int)(uVar4 * 2));
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + uStack_14;
    iVar3 = iVar3 + uVar1;
  } while (iVar8 < 0x30);
  if (*(char *)((int)param_1 + 0x10) != '\0') {
    iVar3 = 0;
    do {
      iVar6 = 0;
      if (uVar4 != 0) {
        do {
          *(uint8_t *)(iVar10 + iVar6) = *(uint8_t *)(iVar9 + iVar6 + uVar5 / 2);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar4);
      }
      iVar3 = iVar3 + 1;
      iVar9 = iVar9 + uStack_14 / 2;
      iVar10 = iVar10 + uVar1 / 2;
    } while (iVar3 < 0x30);
  }
  *(short *)((int)param_1 + 4) = *(short *)((int)param_1 + 4) + (short)(uStack_c - uVar5);
  *(uint8_t *)((int)param_1 + 0x5a) = 0;
  if (*(char *)((int)param_1 + 0x2e) == '\r') {
    iVar3 = 1;
    iVar9 = 0;
    do {
      if (uVar2 == *(ushort *)(&DAT_10598326/*ROM*/ + iVar9)) {
        *(uint8_t *)((int)param_1 + 0x5a) = 1;
      }
      if (uVar2 == *(ushort *)(&DAT_10598328/*ROM*/ + iVar9)) {
        *(uint8_t *)((int)param_1 + 0x5a) = 1;
      }
      if (uVar2 == *(ushort *)(&DAT_1059832a/*ROM*/ + iVar9)) {
        *(uint8_t *)((int)param_1 + 0x5a) = 1;
      }
      if (uVar2 == *(ushort *)(&DAT_1059832c/*ROM*/ + iVar9)) {
        *(uint8_t *)((int)param_1 + 0x5a) = 1;
      }
      if (uVar2 == *(ushort *)(&DAT_1059832e/*ROM*/ + iVar9)) {
        *(uint8_t *)((int)param_1 + 0x5a) = 1;
      }
      iVar3 = iVar3 + -1;
      iVar9 = iVar9 + 10;
    } while (-1 < iVar3);
  }
  return;
}
