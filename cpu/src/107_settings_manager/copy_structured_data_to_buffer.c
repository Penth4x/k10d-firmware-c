/* @k10d copy_structured_data_to_buffer @ 0x10429266
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies byte sequences from param_2 into param_1+0x98 based on the value of *param_2.
 * summary:
 *   The function reads the first integer of param_2 and uses it as a selector (0, 1, 3, 4,
 *   or 5) to determine the layout and destination offsets for copying data. It performs
 *   byte-wise copies from param_2 into the memory region starting at param_1 + 0x98, with
 *   specific loop counts and stride patterns for each case. No other functions are called,
 *   and no global state is modified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_structured_data_to_buffer(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    iVar3 = 0;
    iVar1 = 1;
    iVar5 = 0xd;
    iVar2 = 4;
    do {
      iVar4 = param_1 + 0x98;
      *(char *)(iVar4 + iVar3) = (char)*(uint32_t *)((int)param_2 + iVar2);
      *(char *)(iVar4 + iVar3 + 1) = (char)*(uint32_t *)((int)param_2 + iVar2 + 4);
      *(char *)(iVar4 + iVar3 + 2) = (char)*(uint32_t *)((int)param_2 + iVar2 + 8);
      *(char *)(iVar4 + iVar3 + 3) = (char)*(uint32_t *)((int)param_2 + iVar2 + 0xc);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 + 0x10;
    } while (-1 < iVar5);
    iVar3 = 0x50;
    iVar5 = 7;
    iVar2 = iVar1 * 4;
    do {
      iVar4 = param_1 + 0x98;
      *(char *)(iVar4 + iVar3) = (char)*(uint32_t *)((int)param_2 + iVar2);
      *(char *)(iVar4 + iVar3 + 1) = (char)*(uint32_t *)((int)param_2 + iVar2 + 4);
      *(char *)(iVar4 + iVar3 + 2) = (char)*(uint32_t *)((int)param_2 + iVar2 + 8);
      *(char *)(iVar4 + iVar3 + 3) = (char)*(uint32_t *)((int)param_2 + iVar2 + 0xc);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 + 0x10;
    } while (-1 < iVar5);
    iVar2 = 0xb0;
    iVar3 = 7;
    iVar1 = iVar1 * 4;
    do {
      iVar5 = param_1 + 0x98;
      *(char *)(iVar5 + iVar2) = (char)*(uint32_t *)((int)param_2 + iVar1);
      *(char *)(iVar5 + iVar2 + 1) = (char)*(uint32_t *)((int)param_2 + iVar1 + 4);
      *(char *)(iVar5 + iVar2 + 2) = (char)*(uint32_t *)((int)param_2 + iVar1 + 8);
      *(char *)(iVar5 + iVar2 + 3) = (char)*(uint32_t *)((int)param_2 + iVar1 + 0xc);
      *(char *)(iVar5 + iVar2 + 4) = (char)*(uint32_t *)((int)param_2 + iVar1 + 0x10);
      iVar2 = iVar2 + 5;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x14;
    } while (-1 < iVar3);
  }
  else if (iVar1 == 1) {
    iVar3 = 0x38;
    iVar1 = 1;
    iVar5 = 5;
    iVar2 = 4;
    do {
      iVar4 = param_1 + 0x98;
      *(char *)(iVar4 + iVar3) = (char)*(uint32_t *)((int)param_2 + iVar2);
      *(char *)(iVar4 + iVar3 + 1) = (char)*(uint32_t *)((int)param_2 + iVar2 + 4);
      *(char *)(iVar4 + iVar3 + 2) = (char)*(uint32_t *)((int)param_2 + iVar2 + 8);
      *(char *)(iVar4 + iVar3 + 3) = (char)*(uint32_t *)((int)param_2 + iVar2 + 0xc);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 + 0x10;
    } while (-1 < iVar5);
    iVar3 = 0x70;
    iVar5 = 7;
    iVar2 = iVar1 * 4;
    do {
      iVar4 = param_1 + 0x98;
      *(char *)(iVar4 + iVar3) = (char)*(uint32_t *)((int)param_2 + iVar2);
      *(char *)(iVar4 + iVar3 + 1) = (char)*(uint32_t *)((int)param_2 + iVar2 + 4);
      *(char *)(iVar4 + iVar3 + 2) = (char)*(uint32_t *)((int)param_2 + iVar2 + 8);
      *(char *)(iVar4 + iVar3 + 3) = (char)*(uint32_t *)((int)param_2 + iVar2 + 0xc);
      iVar3 = iVar3 + 4;
      iVar1 = iVar1 + 4;
      iVar5 = iVar5 + -1;
      iVar2 = iVar2 + 0x10;
    } while (-1 < iVar5);
    iVar2 = 0x90;
    iVar3 = 7;
    iVar1 = iVar1 * 4;
    do {
      iVar5 = param_1 + 0x98;
      *(char *)(iVar5 + iVar2) = (char)*(uint32_t *)((int)param_2 + iVar1);
      *(char *)(iVar5 + iVar2 + 1) = (char)*(uint32_t *)((int)param_2 + iVar1 + 4);
      *(char *)(iVar5 + iVar2 + 2) = (char)*(uint32_t *)((int)param_2 + iVar1 + 8);
      *(char *)(iVar5 + iVar2 + 3) = (char)*(uint32_t *)((int)param_2 + iVar1 + 0xc);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 0x10;
    } while (-1 < iVar3);
  }
  else if (iVar1 == 3) {
    iVar2 = 0x128;
    iVar3 = 0x1f;
    iVar1 = 4;
    do {
      iVar5 = param_1 + 0x98;
      *(char *)(iVar5 + iVar2) = (char)*(uint32_t *)((int)param_2 + iVar1);
      *(char *)(iVar5 + iVar2 + 1) = (char)*(uint32_t *)((int)param_2 + iVar1 + 4);
      *(char *)(iVar5 + iVar2 + 2) = (char)*(uint32_t *)((int)param_2 + iVar1 + 8);
      *(char *)(iVar5 + iVar2 + 3) = (char)*(uint32_t *)((int)param_2 + iVar1 + 0xc);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
  }
  else if (iVar1 == 4) {
    iVar2 = 0x1a8;
    iVar3 = 0x1f;
    iVar1 = 4;
    do {
      iVar5 = param_1 + 0x98;
      *(char *)(iVar5 + iVar2) = (char)*(uint32_t *)((int)param_2 + iVar1);
      *(char *)(iVar5 + iVar2 + 1) = (char)*(uint32_t *)((int)param_2 + iVar1 + 4);
      *(char *)(iVar5 + iVar2 + 2) = (char)*(uint32_t *)((int)param_2 + iVar1 + 8);
      *(char *)(iVar5 + iVar2 + 3) = (char)*(uint32_t *)((int)param_2 + iVar1 + 0xc);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
  }
  else if (iVar1 == 5) {
    iVar2 = 0x228;
    iVar3 = 0x1f;
    iVar1 = 4;
    do {
      iVar5 = param_1 + 0x98;
      *(char *)(iVar5 + iVar2) = (char)*(uint32_t *)((int)param_2 + iVar1);
      *(char *)(iVar5 + iVar2 + 1) = (char)*(uint32_t *)((int)param_2 + iVar1 + 4);
      *(char *)(iVar5 + iVar2 + 2) = (char)*(uint32_t *)((int)param_2 + iVar1 + 8);
      *(char *)(iVar5 + iVar2 + 3) = (char)*(uint32_t *)((int)param_2 + iVar1 + 0xc);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
  }
  return;
}
