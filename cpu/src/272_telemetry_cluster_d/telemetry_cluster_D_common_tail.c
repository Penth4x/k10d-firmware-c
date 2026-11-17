/* @k10d telemetry_cluster_D_common_tail @ 0x105123e4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed pack_three_byte_fields_with_flags)
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Computes three 16-bit values from inputs and a mode selector, clamps them, and packs
 *   them into a 6-byte struct with a status byte.
 * summary:
 *   The function calls settings_getter to obtain a status byte. It then branches on a mode
 *   value (0, 1, 2, or other) to determine the order of three computed values (derived from
 *   param_1 and unaff_r10) and a clamped sum (max 14). These values are written to offsets
 *   0x686, 0x688, and 0x68a of a structure pointed to by unaff_r8. Finally, it merges the
 *   status byte or a shifted version of param_1 into the high bits of these three 16-bit
 *   fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void telemetry_cluster_D_common_tail(uint param_1,int param_2)

{
  short sVar1;
  ushort *puVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint16_t uVar7;
  byte bVar8;
  int caller_r8;
  int caller_r9;
  int caller_r10;
  int caller_r14;
  
  bVar8 = settings_getter(caller_r9,param_2);
  uVar5 = param_1;
  if (*(int *)(caller_r14 + -0xc) == 0) {
    uVar5 = (uint)bVar8;
  }
  sVar3 = (short)uVar5;
  sVar1 = (short)caller_r10;
  if (*(int *)(caller_r14 + -0x10) == 0) {
    *(short *)(caller_r8 + 0x686) = sVar3;
    if ((int)uVar5 < caller_r10) {
      sVar3 = 0;
    }
    else {
      sVar3 = sVar3 - sVar1;
    }
    iVar6 = uVar5 + caller_r10;
    *(short *)(caller_r8 + 0x688) = sVar3;
    if (0xe < iVar6) {
      iVar6 = 0xe;
    }
    uVar7 = (uint16_t)iVar6;
    iVar6 = 4;
  }
  else if (*(int *)(caller_r14 + -0x10) == 1) {
    *(short *)(caller_r8 + 0x688) = sVar3;
    if ((int)uVar5 < caller_r10) {
      sVar3 = 0;
    }
    else {
      sVar3 = sVar3 - sVar1;
    }
    iVar6 = uVar5 + caller_r10;
    *(short *)(caller_r8 + 0x686) = sVar3;
    if (0xe < iVar6) {
      iVar6 = 0xe;
    }
    uVar7 = (uint16_t)iVar6;
    iVar6 = 4;
  }
  else {
    if (*(int *)(caller_r14 + -0x10) == 2) {
      *(short *)(caller_r8 + 0x688) = sVar3;
      if ((int)uVar5 < caller_r10) {
        sVar3 = 0;
      }
      else {
        sVar3 = sVar3 - sVar1;
      }
      iVar6 = uVar5 + caller_r10;
      *(short *)(caller_r8 + 0x68a) = sVar3;
      if (0xe < iVar6) {
        iVar6 = 0xe;
      }
      *(short *)(caller_r8 + 0x686) = (short)iVar6;
      goto LAB_1051249e;
    }
    *(short *)(caller_r8 + 0x686) = sVar3;
    if ((int)uVar5 < caller_r10) {
      sVar3 = 0;
    }
    else {
      sVar3 = sVar3 - sVar1;
    }
    iVar6 = uVar5 + caller_r10;
    *(short *)(caller_r8 + 0x68a) = sVar3;
    if (0xe < iVar6) {
      iVar6 = 0xe;
    }
    uVar7 = (uint16_t)iVar6;
    iVar6 = 2;
  }
  *(uint16_t *)(iVar6 + caller_r8 + 0x686) = uVar7;
LAB_1051249e:
  puVar2 = (ushort *)(caller_r8 + 0x686);
  if (*(int *)(caller_r14 + -0xc) == 0) {
    uVar4 = (ushort)(param_1 << 8);
    *puVar2 = *puVar2 | uVar4;
    *(ushort *)(caller_r8 + 0x688) = *(ushort *)(caller_r8 + 0x688) | uVar4;
    uVar4 = *(ushort *)(caller_r8 + 0x68a) | uVar4;
  }
  else {
    *puVar2 = (ushort)CONCAT21(*puVar2,bVar8);
    *(short *)(caller_r8 + 0x688) = (short)CONCAT21(*(uint16_t *)(caller_r8 + 0x688),bVar8);
    uVar4 = (ushort)CONCAT21(*(uint16_t *)(caller_r8 + 0x68a),bVar8);
  }
  *(ushort *)(caller_r8 + 0x68a) = uVar4;
  return;
}
