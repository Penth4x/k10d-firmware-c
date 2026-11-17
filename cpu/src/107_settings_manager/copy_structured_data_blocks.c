/* @k10d copy_structured_data_blocks @ 0x10429506
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies byte data from fixed offsets in param_1 into param_2 based on a mode value.
 * summary:
 *   The function reads a mode integer from *param_2 and branches on its value (0, 1, 3, 4,
 *   5). For each mode, it copies specific sequences of bytes from param_1 + 0x98 into
 *   param_2, using different source offsets and destination strides. The function always
 *   returns 0x80. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_structured_data_blocks(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar3 = 0;
    iVar4 = 0xd;
    iVar2 = 0;
    do {
      iVar5 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar2) = (uint)*(byte *)(iVar5 + iVar3);
      *(uint *)((int)param_2 + iVar2 + 4) = (uint)*(byte *)(iVar5 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar2 + 8) = (uint)*(byte *)(iVar5 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar2 + 0xc) = (uint)*(byte *)(iVar5 + iVar3 + 3);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 4;
    } while (-1 < iVar4);
    iVar3 = 0x50;
    iVar4 = 7;
    iVar2 = iVar1 * 4;
    do {
      iVar5 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar2) = (uint)*(byte *)(iVar5 + iVar3);
      *(uint *)((int)param_2 + iVar2 + 4) = (uint)*(byte *)(iVar5 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar2 + 8) = (uint)*(byte *)(iVar5 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar2 + 0xc) = (uint)*(byte *)(iVar5 + iVar3 + 3);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 4;
    } while (-1 < iVar4);
    iVar3 = 0xb0;
    iVar2 = 7;
    iVar1 = iVar1 * 4;
    do {
      iVar4 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar1) = (uint)*(byte *)(iVar4 + iVar3);
      *(uint *)((int)param_2 + iVar1 + 4) = (uint)*(byte *)(iVar4 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar1 + 8) = (uint)*(byte *)(iVar4 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar1 + 0xc) = (uint)*(byte *)(iVar4 + iVar3 + 3);
      *(uint *)((int)param_2 + iVar1 + 0x10) = (uint)*(byte *)(iVar4 + iVar3 + 4);
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 5;
    } while (-1 < iVar2);
  }
  else if (iVar1 == 1) {
    iVar1 = 0;
    iVar3 = 0x38;
    iVar4 = 5;
    iVar2 = 0;
    do {
      iVar5 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar2) = (uint)*(byte *)(iVar5 + iVar3);
      *(uint *)((int)param_2 + iVar2 + 4) = (uint)*(byte *)(iVar5 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar2 + 8) = (uint)*(byte *)(iVar5 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar2 + 0xc) = (uint)*(byte *)(iVar5 + iVar3 + 3);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 4;
    } while (-1 < iVar4);
    iVar3 = 0x70;
    iVar4 = 7;
    iVar2 = iVar1 * 4;
    do {
      iVar5 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar2) = (uint)*(byte *)(iVar5 + iVar3);
      *(uint *)((int)param_2 + iVar2 + 4) = (uint)*(byte *)(iVar5 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar2 + 8) = (uint)*(byte *)(iVar5 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar2 + 0xc) = (uint)*(byte *)(iVar5 + iVar3 + 3);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 4;
    } while (-1 < iVar4);
    iVar3 = 0x90;
    iVar4 = 7;
    iVar2 = iVar1 * 4;
    do {
      iVar5 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar2) = (uint)*(byte *)(iVar5 + iVar3);
      *(uint *)((int)param_2 + iVar2 + 4) = (uint)*(byte *)(iVar5 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar2 + 8) = (uint)*(byte *)(iVar5 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar2 + 0xc) = (uint)*(byte *)(iVar5 + iVar3 + 3);
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + 4;
    } while (-1 < iVar4);
    iVar3 = 0xb0;
    iVar2 = 7;
    iVar1 = iVar1 * 4;
    do {
      iVar4 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar1) = (uint)*(byte *)(iVar4 + iVar3);
      *(uint *)((int)param_2 + iVar1 + 4) = (uint)*(byte *)(iVar4 + iVar3 + 1);
      *(uint *)((int)param_2 + iVar1 + 8) = (uint)*(byte *)(iVar4 + iVar3 + 2);
      *(uint *)((int)param_2 + iVar1 + 0xc) = (uint)*(byte *)(iVar4 + iVar3 + 3);
      *(uint *)((int)param_2 + iVar1 + 0x10) = (uint)*(byte *)(iVar4 + iVar3 + 4);
      iVar1 = iVar1 + 0x14;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 5;
    } while (-1 < iVar2);
  }
  else if (iVar1 == 3) {
    iVar2 = 0x128;
    iVar3 = 0x1f;
    iVar1 = 0;
    do {
      iVar4 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar1) = (uint)*(byte *)(iVar4 + iVar2);
      *(uint *)((int)param_2 + iVar1 + 4) = (uint)*(byte *)(iVar4 + iVar2 + 1);
      *(uint *)((int)param_2 + iVar1 + 8) = (uint)*(byte *)(iVar4 + iVar2 + 2);
      *(uint *)((int)param_2 + iVar1 + 0xc) = (uint)*(byte *)(iVar4 + iVar2 + 3);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
  }
  else if (iVar1 == 4) {
    iVar2 = 0x1a8;
    iVar3 = 0x1f;
    iVar1 = 0;
    do {
      iVar4 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar1) = (uint)*(byte *)(iVar4 + iVar2);
      *(uint *)((int)param_2 + iVar1 + 4) = (uint)*(byte *)(iVar4 + iVar2 + 1);
      *(uint *)((int)param_2 + iVar1 + 8) = (uint)*(byte *)(iVar4 + iVar2 + 2);
      *(uint *)((int)param_2 + iVar1 + 0xc) = (uint)*(byte *)(iVar4 + iVar2 + 3);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
  }
  else if (iVar1 == 5) {
    iVar2 = 0x228;
    iVar3 = 0x1f;
    iVar1 = 0;
    do {
      iVar4 = param_1 + 0x98;
      *(uint *)((int)param_2 + iVar1) = (uint)*(byte *)(iVar4 + iVar2);
      *(uint *)((int)param_2 + iVar1 + 4) = (uint)*(byte *)(iVar4 + iVar2 + 1);
      *(uint *)((int)param_2 + iVar1 + 8) = (uint)*(byte *)(iVar4 + iVar2 + 2);
      *(uint *)((int)param_2 + iVar1 + 0xc) = (uint)*(byte *)(iVar4 + iVar2 + 3);
      iVar1 = iVar1 + 0x10;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 4;
    } while (-1 < iVar3);
  }
  return 0x80;
}
