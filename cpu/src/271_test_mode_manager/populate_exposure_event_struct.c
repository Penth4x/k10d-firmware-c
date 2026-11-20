/* @k10d populate_exposure_event_struct @ 0x105102e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1051073c) overlaps instruction at (ram,0x1051073a)
    */

void populate_exposure_event_struct(int param_1,uint8_t param_2,uint8_t param_3,uint8_t param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar5;
  char cVar6;
  uint32_t uVar3;
  uint uVar4;
  uint8_t uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uStack_40;
  
  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(*(int *)(param_1 + 0x7f8) + 0xe1) == '\0'))
  {
    (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[49].fn)
              (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[49].adj + param_1);
    *(short *)(param_1 + 0x678) = *(short *)(param_1 + 0x678) + 1;
  }
  **(uint32_t **)(param_1 + 0x7f8) = *(uint32_t *)(param_1 + 0xf4);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 4) = *(uint32_t *)(param_1 + 0xf8);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 8) = 1;
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0xc) = *(uint32_t *)(param_1 + 0x84);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x10) = 7;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x12) = *(uint16_t *)(param_1 + 0xfc);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x14) = *(uint32_t *)(param_1 + 0xac);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x18) = *(uint32_t *)(param_1 + 0xb0);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x1c) = *(uint32_t *)(param_1 + 0xb4);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x20) = *(uint16_t *)(param_1 + 0x108);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x22) = *(uint16_t *)(param_1 + 0x108);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x24) = *(uint16_t *)(param_1 + 0x10a);
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x3a) = param_2;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x3b) = param_3;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x39) = param_4;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x38) = 1;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x26) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x60) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x61) = 1;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0x62) = *(uint8_t *)(param_1 + 0x29);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 100) = *(uint16_t *)(param_1 + 0x10c);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x66) = *(uint16_t *)(param_1 + 0x10e);
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x68) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x6a) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x6c) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x6e) = 0;
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x70) = *(uint32_t *)(param_1 + 0x90);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x74) = *(uint32_t *)(param_1 + 0x94);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x78) = *(uint32_t *)(param_1 + 0x98);
  *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x7c) = *(uint32_t *)(param_1 + 0x9c);
  (((vtbl_entry*)(*(int *)(param_1 + 0x8d4)))[25].fn)
            (*(short *)(*(int *)(param_1 + 0x8d4) + 200) + param_1);
  iVar8 = *(int *)(param_1 + 0x7f8);
  iVar2 = param_1 + 0x2ac;
  bVar5 = settings_getter(iVar2,0x53);
  *(uint *)(iVar8 + 0x80) = (uint)bVar5;
  iVar8 = *(int *)(param_1 + 0x7f8);
  bVar5 = settings_getter(iVar2,0x50);
  *(uint *)(iVar8 + 0xb8) = (uint)bVar5;
  cVar6 = settings_getter(iVar2,0x50);
  iVar8 = *(int *)(param_1 + 0x7f8);
  if (cVar6 == '\0') {
    bVar5 = settings_getter(iVar2,0x59);
    *(uint *)(iVar8 + 0x84) = (uint)bVar5;
    iVar8 = *(int *)(param_1 + 0x7f8);
    bVar5 = settings_getter(iVar2,0x5a);
    *(uint *)(iVar8 + 0x88) = (uint)bVar5;
    iVar8 = *(int *)(param_1 + 0x7f8);
    bVar5 = settings_getter(iVar2,0x58);
    *(uint *)(iVar8 + 0x8c) = (uint)bVar5;
  }
  else {
    iVar11 = param_1 + 0x2ac;
    bVar5 = settings_getter(iVar11,0x56);
    *(uint *)(iVar8 + 0x84) = (uint)bVar5;
    iVar8 = *(int *)(param_1 + 0x7f8);
    bVar5 = settings_getter(iVar11,0x57);
    *(uint *)(iVar8 + 0x88) = (uint)bVar5;
    iVar8 = *(int *)(param_1 + 0x7f8);
    bVar5 = settings_getter(iVar11,0x55);
    *(uint *)(iVar8 + 0x8c) = (uint)bVar5;
  }
  iVar8 = *(int *)(param_1 + 0x7f8);
  uVar3 = get_SVD((void*)(param_1 + 0x164));
  *(uint32_t *)(iVar8 + 0x94) = uVar3;
  iVar8 = *(int *)(param_1 + 0x7f8);
  bVar5 = settings_getter(iVar2,0xc2);
  *(uint *)(iVar8 + 0x98) = (uint)bVar5;
  iVar8 = *(int *)(param_1 + 0x7f8);
  bVar5 = settings_getter(iVar2,0xd);
  *(uint *)(iVar8 + 0x9c) = (uint)bVar5;
  *(uint *)(*(int *)(param_1 + 0x7f8) + 0xbc) = (uint)*(ushort *)(param_1 + 0x678);
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0xc0) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0xc1) = 0;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0xe1) = 0;
  iVar8 = *(int *)(param_1 + 0x7f8);
  if (*(char *)(param_1 + 0x6b8) == '\0') {
    uVar9 = 2;
  }
  else {
    bVar5 = settings_getter(iVar2,0x84);
    uVar9 = (uint)bVar5;
  }
  *(uint *)(iVar8 + 0x90) = uVar9;
  bVar5 = settings_getter(iVar2,0x51);
  cVar6 = settings_getter(iVar2,0xba);
  uVar9 = (uint)bVar5;
  if (cVar6 == '\x01') {
    uVar9 = 2;
  }
  uVar4 = 1;
  if (*(char *)(param_1 + 0x6b8) == '\0') {
    uVar4 = uVar9;
  }
  *(uint *)(*(int *)(param_1 + 0x7f8) + 0xa0) = uVar4;
  *(int *)(*(int *)(param_1 + 0x7f8) + 0xdc) = param_1 + 0x5f0;
  cVar6 = settings_getter(iVar2,0x10);
  iVar8 = 0;
  if (cVar6 == '\f') {
    iVar8 = 0x2b;
  }
  else if (cVar6 == '\r') {
    iVar8 = 0x2e;
  }
  else if (cVar6 == '\x0e') {
    iVar8 = 0x31;
  }
  iVar11 = *(int *)(param_1 + 0x7f8);
  bVar5 = settings_getter(iVar2,iVar8);
  *(uint *)(iVar11 + 0xa4) = (uint)bVar5;
  uStack_40 = 0;
  uVar7 = settings_getter(iVar2,0xd);
  switch(uVar7) {
  case 0:
    bVar5 = settings_getter(param_1 + 0x2ac,0x11);
    iVar8 = 0x12;
    uStack_40 = (uint)bVar5;
    break;
  case 1:
    bVar5 = settings_getter(param_1 + 0x2ac,0x13);
    iVar8 = 0x14;
    uStack_40 = (uint)bVar5;
    break;
  case 2:
    bVar5 = settings_getter(param_1 + 0x2ac,0x15);
    iVar8 = 0x16;
    uStack_40 = (uint)bVar5;
    break;
  case 3:
    bVar5 = settings_getter(param_1 + 0x2ac,0x17);
    iVar8 = 0x18;
    uStack_40 = (uint)bVar5;
    break;
  case 4:
    bVar5 = settings_getter(param_1 + 0x2ac,0x19);
    iVar8 = 0x1a;
    uStack_40 = (uint)bVar5;
    break;
  case 5:
    bVar5 = settings_getter(param_1 + 0x2ac,0x1b);
    iVar8 = 0x1c;
    uStack_40 = (uint)bVar5;
    break;
  case 6:
    bVar5 = settings_getter(param_1 + 0x2ac,0x1d);
    iVar8 = 0x1e;
    uStack_40 = (uint)bVar5;
    break;
  case 7:
    bVar5 = settings_getter(param_1 + 0x2ac,0x1f);
    iVar8 = 0x20;
    uStack_40 = (uint)bVar5;
    break;
  case 8:
    bVar5 = settings_getter(param_1 + 0x2ac,0x21);
    iVar8 = 0x22;
    uStack_40 = (uint)bVar5;
    break;
  case 9:
    bVar5 = settings_getter(param_1 + 0x2ac,0x23);
    iVar8 = 0x24;
    uStack_40 = (uint)bVar5;
    break;
  case 10:
    bVar5 = settings_getter(param_1 + 0x2ac,0x25);
    iVar8 = 0x26;
    uStack_40 = (uint)bVar5;
    break;
  case 0xb:
    bVar5 = settings_getter(param_1 + 0x2ac,0x27);
    iVar8 = 0x28;
    uStack_40 = (uint)bVar5;
    break;
  case 0xc:
    bVar5 = settings_getter(param_1 + 0x2ac,0x29);
    iVar8 = 0x2a;
    uStack_40 = (uint)bVar5;
    break;
  case 0xd:
    bVar5 = settings_getter(param_1 + 0x2ac,0x2c);
    iVar8 = 0x2d;
    uStack_40 = (uint)bVar5;
    break;
  case 0xe:
    bVar5 = settings_getter(param_1 + 0x2ac,0x2f);
    iVar8 = 0x30;
    uStack_40 = (uint)bVar5;
    break;
  default:
    uVar9 = 0;
    goto LAB_10510918;
  }
  bVar5 = settings_getter(param_1 + 0x2ac,iVar8);
  uVar9 = (uint)bVar5;
LAB_10510918:
  *(uint *)(*(int *)(param_1 + 0x7f8) + 0xb0) = uStack_40;
  *(uint *)(*(int *)(param_1 + 0x7f8) + 0xac) = uVar9;
  *(uint8_t *)(*(int *)(param_1 + 0x7f8) + 0xe0) = *(uint8_t *)(param_1 + 0x8c5);
  iVar8 = *(int *)(param_1 + 0x7f8);
  piVar1 = (int *)(param_1 + 0x148);
  piVar10 = (int *)(param_1 + 0x164);
  uVar3 = get_AVD(piVar10);
  *(uint32_t *)(iVar8 + 0xfc) = uVar3;
  iVar8 = *(int *)(param_1 + 0x7f8);
  uVar3 = get_TVD(piVar10);
  *(uint32_t *)(iVar8 + 0x100) = uVar3;
  iVar8 = *(int *)(param_1 + 0x7f8);
  uVar3 = get_SVD(piVar10);
  *(uint32_t *)(iVar8 + 0x108) = uVar3;
  iVar8 = *(int *)(param_1 + 0x7f8);
  uVar3 = get_XVD(piVar10);
  *(uint32_t *)(iVar8 + 0x10c) = uVar3;
  *(int *)(*(int *)(param_1 + 0x7f8) + 0x11c) = param_1 + 0x880;
  iVar8 = *(int *)(param_1 + 0x7f8);
  uVar7 = (((vtbl_entry*)(*piVar10))[3].fn)((int)piVar10 + (int)((vtbl_entry*)(*piVar10))[3].adj,0xe);
  *(uint8_t *)(iVar8 + 0x118) = uVar7;
  iVar2 = *(int *)(param_1 + 0x1c4);
  iVar8 = *(int *)(param_1 + 0x7f8);
  uVar7 = (((vtbl_entry*)(iVar2))[3].fn)(param_1 + 0x1c4 + (int)((vtbl_entry*)(iVar2))[3].adj,3);
  *(uint8_t *)(iVar8 + 0x119) = uVar7;
  cVar6 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,0);
  if ((cVar6 == '\t') || (cVar6 == '\f')) {
    *(uint32_t *)(*(int *)(param_1 + 0x7f8) + 0x100) = 0;
  }
  if ((*(char *)(param_1 + 0x6b8) == '\0') ||
     (iVar8 = (((vtbl_entry*)(*piVar1))[3].fn)((int)((vtbl_entry*)(*piVar1))[3].adj + (int)piVar1,0x10),
     iVar8 == 0)) {
    *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x2170) = 0x100;
    *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x2172) = 0x100;
    *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x2174) = 0x100;
    *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x2176) = 0x100;
  }
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x2178) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x217a) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x217c) = 0;
  *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x217e) = 0;
  return;
}
