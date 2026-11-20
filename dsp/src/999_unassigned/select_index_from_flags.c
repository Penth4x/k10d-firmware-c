/* @k10d select_index_from_flags @ 0x000ed4d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Selects a 1-4 index by comparing a flag-selected constant against three thresholds.
 * summary:
 *   The function uses bit flags in DAT_0003c02b, DAT_0003c066, DAT_0003c086, and
 *   DAT_0003c05d along with a mode byte DAT_0003c25b to pick a base value from constants
 *   DAT_0003c240 through DAT_0003c247. It compares this value against thresholds
 *   DAT_0003c228, DAT_0003c229, and DAT_0003c22a to derive an initial index (1-4), then
 *   adjusts it based on additional flag conditions. The final index and a secondary value
 *   are stored in DAT_0003c24c/DAT_0003c24e and DAT_0003c256/DAT_0003c257 respectively, and
 *   the index is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int select_index_from_flags(void)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  uint8_t uVar4;
  
  iVar3 = 4;
  uVar4 = 4;
  if ((DAT_0003c02b & 0x80) == 0) {
    if ((DAT_0003c066 & 1) == 0) {
      DAT_0003c02d = DAT_0003c244;
      if (DAT_0003c25b == '\x02') {
        DAT_0003c02d = DAT_0003c245;
      }
    }
    else if (DAT_0003c25b == '\x02') {
      DAT_0003c02d = DAT_0003c247;
    }
    else {
      DAT_0003c02d = DAT_0003c246;
    }
  }
  else if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c02d = DAT_0003c240;
    if (DAT_0003c25b == '\x02') {
      DAT_0003c02d = DAT_0003c241;
    }
  }
  else if (DAT_0003c25b == '\x02') {
    DAT_0003c02d = DAT_0003c243;
  }
  else {
    DAT_0003c02d = DAT_0003c242;
  }
  cVar1 = DAT_0003c24d;
  if (DAT_0003c25b != '\x01') {
    cVar1 = '\x04';
  }
  if (DAT_0003c25b == '\x02') {
    cVar1 = DAT_0003c24f;
  }
  uVar2 = DAT_0003c02d < DAT_0003c228;
  if ((bool)uVar2) {
    uVar4 = 3;
    iVar3 = 3;
  }
  if (DAT_0003c02d < DAT_0003c229) {
    uVar4 = 2;
    iVar3 = 2;
    uVar2 = 2;
  }
  if (DAT_0003c02d < DAT_0003c22a) {
    uVar4 = 1;
    iVar3 = 1;
    uVar2 = 3;
  }
  if ((DAT_0003c086 & 4) == 0) {
    if ((DAT_0003c066 & 1) != 0) {
      if (cVar1 == '\x04') {
        if (iVar3 == 2) {
          uVar4 = 3;
          iVar3 = 3;
        }
        if (iVar3 == 1) {
          uVar4 = 2;
          iVar3 = 2;
        }
      }
      if ((cVar1 == '\x01') && (iVar3 == 4)) {
        uVar4 = 3;
        iVar3 = 3;
      }
    }
    if ((DAT_0003c05d & 4) == 0) {
      if ((cVar1 == '\x02') && ((iVar3 == 4 || (iVar3 == 3)))) {
        uVar4 = 2;
        iVar3 = 2;
      }
      if ((cVar1 == '\x03') && (iVar3 == 4)) {
        uVar4 = 3;
        iVar3 = 3;
      }
    }
  }
  if (DAT_0003c25b == '\x01') {
    DAT_0003c24c = uVar4;
    DAT_0003c256 = uVar2;
  }
  if (DAT_0003c25b == '\x02') {
    DAT_0003c24e = uVar4;
    DAT_0003c257 = uVar2;
  }
  return iVar3;
}
