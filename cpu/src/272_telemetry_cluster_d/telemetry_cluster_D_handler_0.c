/* @k10d telemetry_cluster_D_handler_0 @ 0x105122b8
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed pack_two_byte_values_with_offset)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Selects a value via a switch, applies an offset and clamp, and packs two 16-bit values
 *   into a 32-bit word.
 * summary:
 *   The function switches on a value at r14-4 to select a base value (uVar5) and a
 *   secondary index (iVar7). It calls settings_getter with r9 and the selected index to get
 *   a second value (uVar3). Based on a mode at r14-0x10, it writes uVar4 (the selected
 *   value) and a clamped offset (uVar4-3, min 0, max 13) to specific offsets (0x686, 0x688,
 *   0x68a) in the structure at r8. Finally, it combines uVar4 and uVar3 into a 32-bit value
 *   stored at r8+0x686, either by shifting uVar3 left 8 bits and ORing, or by shifting
 *   uVar4 left 8 bits and ORing with uVar3, depending on the flag at r14-0xc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105122e6) overlaps instruction at (ram,0x105122e4)
    */

void telemetry_cluster_D_handler_0(void)

{
  ushort *puVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  int caller_r8;
  int caller_r9;
  int iVar7;
  int caller_r14;
  
  *(uint32_t *)(caller_r14 + -0xc) = 1;
  uVar3 = 0;
  switch(*(uint32_t *)(caller_r14 + -4)) {
  case 0:
    bVar6 = settings_getter(caller_r9,0x11);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x12;
    break;
  case 1:
    bVar6 = settings_getter(caller_r9,0x13);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x14;
    break;
  case 2:
    bVar6 = settings_getter(caller_r9,0x15);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x16;
    break;
  case 3:
    bVar6 = settings_getter(caller_r9,0x17);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x18;
    break;
  case 4:
    bVar6 = settings_getter(caller_r9,0x19);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x1a;
    break;
  case 5:
    bVar6 = settings_getter(caller_r9,0x1b);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x1c;
    break;
  case 6:
    bVar6 = settings_getter(caller_r9,0x1d);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x1e;
    break;
  case 7:
    bVar6 = settings_getter(caller_r9,0x1f);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x20;
    break;
  case 8:
    bVar6 = settings_getter(caller_r9,0x21);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x22;
    break;
  case 9:
    bVar6 = settings_getter(caller_r9,0x23);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x24;
    break;
  case 10:
    bVar6 = settings_getter(caller_r9,0x25);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x26;
    break;
  case 0xb:
    bVar6 = settings_getter(caller_r9,0x27);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x28;
    break;
  case 0xc:
    bVar6 = settings_getter(caller_r9,0x29);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x2a;
    break;
  case 0xd:
    bVar6 = settings_getter(caller_r9,0x2c);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x2d;
    break;
  case 0xe:
    bVar6 = settings_getter(caller_r9,0x2f);
    uVar5 = (ushort)bVar6;
    iVar7 = 0x30;
    break;
  default:
    uVar5 = 0;
    goto LAB_105123f0;
  }
  bVar6 = settings_getter(caller_r9,iVar7);
  uVar3 = (ushort)bVar6;
LAB_105123f0:
  uVar4 = uVar5;
  if (*(int *)(caller_r14 + -0xc) == 0) {
    uVar4 = uVar3;
  }
  if (*(int *)(caller_r14 + -0x10) == 0) {
    *(ushort *)(caller_r8 + 0x686) = uVar4;
    if (uVar4 < 3) {
      sVar2 = 0;
    }
    else {
      sVar2 = uVar4 - 3;
    }
    uVar4 = uVar4 + 3;
    *(short *)(caller_r8 + 0x688) = sVar2;
    if (0xe < uVar4) {
      uVar4 = 0xe;
    }
    iVar7 = 4;
  }
  else if (*(int *)(caller_r14 + -0x10) == 1) {
    *(ushort *)(caller_r8 + 0x688) = uVar4;
    if (uVar4 < 3) {
      sVar2 = 0;
    }
    else {
      sVar2 = uVar4 - 3;
    }
    uVar4 = uVar4 + 3;
    *(short *)(caller_r8 + 0x686) = sVar2;
    if (0xe < uVar4) {
      uVar4 = 0xe;
    }
    iVar7 = 4;
  }
  else {
    if (*(int *)(caller_r14 + -0x10) == 2) {
      *(ushort *)(caller_r8 + 0x688) = uVar4;
      if (uVar4 < 3) {
        sVar2 = 0;
      }
      else {
        sVar2 = uVar4 - 3;
      }
      uVar4 = uVar4 + 3;
      *(short *)(caller_r8 + 0x68a) = sVar2;
      if (0xe < uVar4) {
        uVar4 = 0xe;
      }
      *(ushort *)(caller_r8 + 0x686) = uVar4;
      goto LAB_1051249e;
    }
    *(ushort *)(caller_r8 + 0x686) = uVar4;
    if (uVar4 < 3) {
      sVar2 = 0;
    }
    else {
      sVar2 = uVar4 - 3;
    }
    uVar4 = uVar4 + 3;
    *(short *)(caller_r8 + 0x68a) = sVar2;
    if (0xe < uVar4) {
      uVar4 = 0xe;
    }
    iVar7 = 2;
  }
  *(ushort *)(iVar7 + caller_r8 + 0x686) = uVar4;
LAB_1051249e:
  puVar1 = (ushort *)(caller_r8 + 0x686);
  if (*(int *)(caller_r14 + -0xc) == 0) {
    uVar3 = uVar5 << 8;
    *puVar1 = *puVar1 | uVar3;
    *(ushort *)(caller_r8 + 0x688) = *(ushort *)(caller_r8 + 0x688) | uVar3;
    uVar3 = *(ushort *)(caller_r8 + 0x68a) | uVar3;
  }
  else {
    *puVar1 = *puVar1 << 8 | uVar3;
    *(ushort *)(caller_r8 + 0x688) = *(short *)(caller_r8 + 0x688) << 8 | uVar3;
    uVar3 = *(short *)(caller_r8 + 0x68a) << 8 | uVar3;
  }
  *(ushort *)(caller_r8 + 0x68a) = uVar3;
  return;
}
