/* @k10d fill_descriptor_with_scaled_values @ 0x1050fd9e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Populates a descriptor struct with coordinates and eight 16-bit values scaled by a mode
 *   selector.
 * summary:
 *   Writes a header and coordinate fields to a structure pointed to by param_1+0x7f4.
 *   Adjusts a base offset (param_1+0x84 or 0x8c) by -0x20 and copies it into the
 *   descriptor. Depending on param_2, it scales eight 16-bit values by 0x40 (dividing by 4)
 *   and stores them, or sets them to a uniform value (0x80 or 0x80/divisor) and updates
 *   related state fields to 0x100. Calls settings_getter in one branch to determine a
 *   divisor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1050fe26) overlaps instruction at (ram,0x1050fe24)
    */

void fill_descriptor_with_scaled_values(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  char cVar10;
  uint16_t uStack_12;
  uint16_t uStack_a;
  
  uVar8 = *(uint32_t *)(param_1 + 0x84);
  uVar9 = *(uint32_t *)(param_1 + 0x8c);
  **(uint32_t **)(param_1 + 0x7f4) = 1;
  *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 4) = *(uint16_t *)(param_1 + 0xfe);
  *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 6) = *(uint16_t *)(param_1 + 0x100);
  *(short *)(*(int *)(param_1 + 0x7f4) + 4) = *(short *)(param_1 + 0xfe) + -0x20;
  *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 8) = *(uint16_t *)(param_1 + 0xfe);
  *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 10) = *(uint16_t *)(param_1 + 0xfe);
  *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0xc) = *(uint16_t *)(param_1 + 0xfe);
  if (param_2 == 0) {
    *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x1c) = *(uint32_t *)(param_1 + 0xf4);
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -0x20;
    *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x10) = uVar8;
    *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x14) = uVar8;
    *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x18) = *(uint32_t *)(param_1 + 0x84);
    uVar1 = *(ushort *)(param_1 + 0x8ce);
    uVar2 = *(ushort *)(param_1 + 0x8d0);
    uVar3 = *(ushort *)(param_1 + 0x8d2);
    uVar4 = *(ushort *)(param_1 + 0x8cc);
    uVar5 = *(ushort *)(param_1 + 0x8ce);
    uVar6 = *(ushort *)(param_1 + 0x8d0);
    uVar7 = *(ushort *)(param_1 + 0x8d2);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x24) =
         (short)((uint)*(ushort *)(param_1 + 0x8cc) * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x26) = (short)((uint)uVar1 * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x28) = (short)((uint)uVar2 * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x2a) = (short)((uint)uVar3 * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x2c) = (short)((uint)uVar4 * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x2e) = (short)((uint)uVar5 * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x30) = (short)((uint)uVar6 * 0x40 >> 8);
    *(short *)(*(int *)(param_1 + 0x7f4) + 0x32) = (short)((uint)uVar7 * 0x40 >> 8);
  }
  else {
    *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x1c) = *(uint32_t *)(param_1 + 0xf4);
    if (param_2 == 1) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -0x20;
      *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x10) = uVar9;
      *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x14) = uVar9;
      *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x18) = *(uint32_t *)(param_1 + 0x8c);
      uVar2 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2172);
      uVar3 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2174);
      uVar4 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2176);
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2170);
      uVar5 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2172);
      uVar6 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2174);
      uVar7 = *(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2176);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x24) =
           (short)((uint)*(ushort *)(*(int *)(param_1 + 0x7f8) + 0x2170) * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x26) = (short)((uint)uVar2 * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x28) = (short)((uint)uVar3 * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x2a) = (short)((uint)uVar4 * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x2c) = (short)((uint)uVar1 * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x2e) = (short)((uint)uVar5 * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x30) = (short)((uint)uVar6 * 0x40 >> 8);
      *(short *)(*(int *)(param_1 + 0x7f4) + 0x32) = (short)((uint)uVar7 * 0x40 >> 8);
    }
    else {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -0x20;
      *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x10) = uVar8;
      *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x14) = *(uint32_t *)(param_1 + 0x8c);
      *(uint32_t *)(*(int *)(param_1 + 0x7f4) + 0x18) = *(uint32_t *)(param_1 + 0x84);
      uStack_12 = 0x80;
      uStack_a = 0x80;
      cVar10 = settings_getter(param_1 + 0x2ac,0x61);
      if ((cVar10 == '\x01') &&
         (uStack_a = (uint16_t)(0x80 / *(ushort *)(param_1 + 0x692)), uStack_12 = uStack_a,
         *(short *)(param_1 + 0x690) != 1)) {
        uStack_12 = 0x80;
      }
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x24) = uStack_12;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x26) = uStack_12;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x28) = uStack_12;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x2a) = uStack_12;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x2c) = uStack_a;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x2e) = uStack_a;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x30) = uStack_a;
      *(uint16_t *)(*(int *)(param_1 + 0x7f4) + 0x32) = uStack_a;
      *(uint16_t *)(param_1 + 0x8cc) = 0x100;
      *(uint16_t *)(param_1 + 0x8ce) = 0x100;
      *(uint16_t *)(param_1 + 0x8d0) = 0x100;
      *(uint16_t *)(param_1 + 0x8d2) = 0x100;
      *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x128) = 0x100;
      *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x12a) = 0x100;
      *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 300) = 0x100;
      *(uint16_t *)(*(int *)(param_1 + 0x7f8) + 0x12e) = 0x100;
      if (*(char *)(param_1 + 0x2d) != '\0') {
        *(short *)(param_1 + 0x690) = *(short *)(param_1 + 0x690) + 1;
      }
    }
  }
  return;
}
