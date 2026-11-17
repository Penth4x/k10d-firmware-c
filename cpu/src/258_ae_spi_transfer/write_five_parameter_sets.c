/* @k10d write_five_parameter_sets @ 0x104f41f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_five_parameter_sets(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint32_t uVar4;
  uint16_t uVar5;
  uint uVar6;
  int iStack_14;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else if (iVar2 == 0x10) {
    uVar4 = 0x10;
  }
  else if (iVar2 == 0x20) {
    uVar4 = 0x20;
  }
  else {
    if (iVar2 != 0x30) goto LAB_104f4234;
    uVar4 = 0x30;
  }
  (*(code *)0x1044d618/*ROM*/)(*(uint32_t *)(param_1 + 0xc),uVar4);
LAB_104f4234:
  iStack_14 = 5;
  uVar6 = 0;
  do {
    uVar3 = uVar6 & 0xffff;
    if (uVar3 < 5) {
      uVar5 = *(uint16_t *)((int)param_2 + uVar3 * 2 + 4);
    }
    else {
      uVar5 = 0;
    }
    (*(code *)0x1044e2aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10),uVar5,uVar3);
    if (uVar3 < 5) {
      uVar5 = *(uint16_t *)((int)param_2 + uVar3 * 2 + 0xe);
    }
    else {
      uVar5 = 0;
    }
    (*(code *)0x1044e308/*ROM*/)(*(uint32_t *)(param_1 + 0x10),uVar5,uVar3);
    if (uVar3 < 5) {
      uVar5 = *(uint16_t *)((int)param_2 + uVar3 * 2 + 0x18);
    }
    else {
      uVar5 = 0;
    }
    (*(code *)0x1044e366/*ROM*/)(*(uint32_t *)(param_1 + 0x10),uVar5,uVar3);
    if (uVar3 < 5) {
      uVar5 = *(uint16_t *)((int)param_2 + uVar3 * 2 + 0x22);
    }
    else {
      uVar5 = 0;
    }
    (*(code *)0x1044e3c4/*ROM*/)(*(uint32_t *)(param_1 + 0x10),uVar5,uVar3);
    iVar2 = iStack_14 + -1;
    bVar1 = 0 < iStack_14;
    uVar6 = uVar6 + 1;
    iStack_14 = iVar2;
  } while (bVar1 && iVar2 != 0);
  return;
}
