/* @k10d copy_and_decode_status_flags @ 0x104b72aa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 219_script_shutter_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_and_decode_status_flags(int param_1,int param_2)

{
  uint8_t *puVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  byte abStack_17 [15];
  
  puVar1 = &stack0xfffffff8;
  iVar3 = 0xf;
  do {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + param_1 + 4) = *(uint8_t *)(iVar3 + param_2 + 4);
  } while (iVar3 != 0);
  iVar3 = 0xf;
  do {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + param_1 + 0x13) = *(uint8_t *)(iVar3 + param_2 + 0x13);
  } while (iVar3 != 0);
  iVar3 = 0xf;
  do {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + param_1 + 0x22) = *(uint8_t *)(iVar3 + param_2 + 0x22);
  } while (iVar3 != 0);
  iVar3 = 0xf;
  do {
    iVar3 = iVar3 + -1;
    *(uint8_t *)(iVar3 + param_1 + 0x31) = *(uint8_t *)(iVar3 + param_2 + 0x31);
  } while (iVar3 != 0);
  *(uint8_t *)(param_1 + 0x40) = 0;
  *(uint8_t *)(param_1 + 0x42) = 0;
  if (*(char *)(param_1 + 0x41) == '\0') {
    return;
  }
  (*(code *)0x1046b2ee/*ROM*/)(param_1,abStack_17);
  iVar3 = 0;
  do {
    puVar1[-0xf] = puVar1[-0xf] & *(byte *)(iVar3 + 0x105b89b8/*ROM*/);
    if (puVar1[-0xf] != '\0') {
      iVar2 = 0;
      goto LAB_104b7342;
    }
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0xf);
  goto LAB_104b7384;
  while( true ) {
    iVar2 = iVar2 + 1;
    abStack_17[iVar3] = (byte)((int)(uint)abStack_17[iVar3] >> 1);
    if (7 < iVar2) break;
LAB_104b7342:
    if ((abStack_17[iVar3] & 1) == 1) {
      *(uint8_t *)(param_1 + 0x42) = 1;
      *(uint8_t *)(param_1 + 0x41) = 0;
      *(int *)(param_1 + 0x44) = iVar3 * 10 + iVar2;
      break;
    }
  }
LAB_104b7384:
  if (*(char *)(param_1 + 0x42) == '\0') {
    *(uint8_t *)(param_1 + 0x40) = 1;
  }
  return;
}
