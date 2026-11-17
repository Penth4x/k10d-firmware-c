/* @k10d update_state_dependent_params @ 0x104ecb04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Updates parameter structures and cached state flags based on changes in input mode and
 *   configuration values.
 * summary:
 *   The function compares fields in param_2 against cached values in
 *   uRam80010c8c-uRam80010c96. If changes are detected, it calls helper functions to update
 *   offsets in param_1 and writes mode-dependent values to param_4. It also performs
 *   additional structure updates and copies if param_2+0x20 is 1 or 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ecc9a) overlaps instruction at (ram,0x104ecc98)
    */

void update_state_dependent_params(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint8_t uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  uintptr_t sp;
  int iStack_2c;
  uint16_t uStack_28;
  uint16_t uStack_26;
  short sStack_24;
  uint16_t uStack_22;
  uint32_t uStack_20;
  uint32_t auStack_1c [5];
  
  uVar15 = *(uint *)(param_2 + 0x14) & 0xffff;
  uVar12 = *(uint *)(param_2 + 0x38);
  uVar6 = (uint)uRam80010c8c;
  uVar2 = (uint)uRam80010c8e;
  uVar3 = *(uint *)(param_2 + 4);
  uVar7 = (uint)uRam80010c90;
  uVar13 = *(uint *)(param_2 + 0xc);
  uVar8 = (uint)uRam80010c92;
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar9 = (uint)uRam80010c96;
  iVar10 = *(int *)(param_2 + 0x10);
  if (iVar10 == 0) {
    uVar5 = 0xfffffff6;
  }
  else if (iVar10 == 1) {
    uVar5 = 0xfffffffb;
  }
  else if (iVar10 == 2) {
    uVar5 = 0;
  }
  else if (iVar10 == 3) {
    uVar5 = 5;
  }
  else {
    if (iVar10 != 4) goto LAB_104ecbe0;
    uVar5 = 10;
  }
  *(uint32_t *)(param_4 + 0x2048) = uVar5;
LAB_104ecbe0:
  iVar14 = *(int *)(param_2 + 0x38);
  if (iVar14 == 0) {
    iVar16 = 0xa4;
  }
  else if (iVar14 == 1) {
    iVar16 = 0xcc;
  }
  else {
    iVar16 = 0xcc;
  }
  piVar17 = (int *)(iVar16 + param_1);
  if (*(char *)(param_2 + 0x60) != '\0') {
    piVar17 = (int *)(param_1 + 0x7c);
  }
  bVar1 = uVar2 != uVar15 || uVar6 != (uVar12 & 0xffff);
  if (bVar1) {
    uRam80010c8c = (ushort)iVar14;
  }
  if (bVar1 || uVar7 != (uVar3 & 0xffff)) {
    call_virtual_with_six_short_args(param_1 + 0x40,*(uint *)(param_2 + 4) & 0xffff,
                 *(uint32_t *)(piVar17[6] + (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4));
    write_sensor_frame_data(param_1 + 0x34,*(uint *)(param_2 + 4) & 0xffff,
                 *(uint32_t *)(piVar17[1] + (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4));
    invoke_virtual_method_on_pair(param_1 + 0x4c,*(uint *)(param_2 + 4) & 0xffff,
                 *(uint32_t *)(piVar17[3] + (uint)*(byte *)(uVar15 + 0x105c2af1/*ROM*/) * 4));
    uRam80010c90 = (ushort)*(uint32_t *)(param_2 + 4);
  }
  if (bVar1 || (uVar8 != (uVar13 & 0xffff) || uVar9 != (uVar4 & 0xffff))) {
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar14 = *(int *)((uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4 + piVar17[8]);
      uVar11 = 0;
    }
    else if (*(int *)(param_2 + 0x18) == 1) {
      iVar14 = *(int *)((uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4 + piVar17[8]);
      uVar11 = 1;
    }
    else {
      iVar14 = *(int *)((uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4 + piVar17[8]);
      uVar11 = 0;
    }
    *(uint8_t *)(iVar14 + 0x10) = uVar11;
    *(uint16_t *)(*(int *)(piVar17[8] + (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4) + 0x12) =
         *(uint16_t *)(iVar10 * 2 + 0x105c2b42/*ROM*/);
    write_sensor_config_block(param_1 + 0x10,*(uint *)(param_2 + 0xc) & 0xffff,
                 *(uint32_t *)(piVar17[4] + (uint)*(byte *)(uVar15 + 0x105c2af1/*ROM*/) * 4));
    write_three_values_to_target_104ebeaa(param_1 + 0x1c,*(uint *)(param_2 + 0xc) & 0xffff,
                 *(uint32_t *)(piVar17[5] + (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4));
    apply_wb_gain_matrix(param_1 + 0x28,*(uint *)(param_2 + 0xc) & 0xffff,
                 *(uint32_t *)(piVar17[8] + (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4));
    reset_six_config_slots(param_1 + 0x70,0,0);
    uRam80010c96 = (ushort)*(uint32_t *)(param_2 + 0x18);
    uRam80010c92 = (ushort)*(uint32_t *)(param_2 + 0xc);
  }
  iVar10 = (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4;
  *(int *)(*(int *)(piVar17[2] + iVar10) + 0x10) = param_4;
  read_two_values_via_handle(param_1 + 100,*(uint *)(param_2 + 8) & 0xffff,*(uint32_t *)(piVar17[2] + iVar10));
  uRam80010c94 = (uint16_t)*(uint32_t *)(param_2 + 8);
  iVar10 = (uint)*(byte *)(uVar15 + 0x105c2af1/*ROM*/) * 4;
  *(char *)(*(int *)(*piVar17 + iVar10) + 0x44) = (char)*(uint32_t *)(param_3 + 0x1c);
  write_parameter_block_to_target(param_1 + 4,*(uint *)(param_2 + 4) & 0xffff,*(uint32_t *)(*piVar17 + iVar10));
  if ((*(int *)(param_2 + 0x20) == 1) || (*(int *)(param_2 + 0x20) == 2)) {
    iVar10 = (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4;
    *(int *)(*(int *)(*(int *)(param_1 + 0xac) + iVar10) + 0x10) = param_4;
    *(int *)(*(int *)(*(int *)(param_1 + 0xd4) + iVar10) + 0x10) = param_4;
    *(int *)(*(int *)(*(int *)(param_1 + 0x84) + iVar10) + 0x10) = param_4;
    if (*(char *)(param_2 + 0x60) == '\0') {
      iStack_2c = param_4 + 0x2c;
      iVar14 = param_4 + 0x102c;
      *(uint32_t *)(param_4 + 0x202c) =
           *(uint32_t *)
            ((*(uint *)(param_2 + 0xc) & 0xffff) * 4 + **(int **)(*(int *)(param_1 + 0xc4) + iVar10)
            );
      *(uint32_t *)(param_4 + 0x2030) =
           *(uint32_t *)
            ((*(uint *)(param_2 + 0xc) & 0xffff) * 4 + **(int **)(*(int *)(param_1 + 0xec) + iVar10)
            );
      iVar16 = param_1 + 0x2100;
      (*(code *)0x1053072c/*ROM*/)
                (*(uint32_t *)(*(int *)(param_1 + 0xac) + iVar10),*(uint *)(param_2 + 8) & 0xffff,
                 iVar16);
      xor_encrypt_buffer_block(param_1 + 0xf4,iVar16,iStack_2c,*(uint32_t *)(param_2 + 0x5c));
      (*(code *)0x1053072c/*ROM*/)
                (*(uint32_t *)
                  (*(int *)(param_1 + 0xd4) + (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4),
                 *(uint *)(param_2 + 8) & 0xffff,iVar16);
    }
    else {
      (*(code *)0x1053072c/*ROM*/)
                (*(uint32_t *)(*(int *)(param_1 + 0x84) + iVar10),*(uint *)(param_2 + 8) & 0xffff,
                 param_1 + 0x2100);
      iVar10 = (uint)*(byte *)(uVar15 + 0x105c2aa0/*ROM*/) * 4;
      *(uint32_t *)(param_4 + 0x202c) =
           *(uint32_t *)
            ((*(uint *)(param_2 + 0xc) & 0xffff) * 4 + **(int **)(*(int *)(param_1 + 0x9c) + iVar10)
            );
      *(uint32_t *)(param_4 + 0x2030) =
           *(uint32_t *)
            (**(int **)(*(int *)(param_1 + 0x9c) + iVar10) + (*(uint *)(param_2 + 0xc) & 0xffff) * 4
            );
      xor_encrypt_buffer_block(param_1 + 0xf4,param_1 + 0x2100,param_1 + 0x100,*(uint32_t *)(param_2 + 0x5c));
      iVar14 = param_1 + 0x1100;
    }
    xor_encrypt_buffer_block(param_1 + 0xf4,param_1 + 0x2100,iVar14,*(uint32_t *)(param_2 + 0x5c));
    uStack_26 = 0x20;
    uStack_28 = (short)*(uint32_t *)(param_1 + 0xfc);
    sStack_24 = (short)*(uint32_t *)(param_1 + 0xf8);
    uStack_22 = 0x400;
    uStack_20 = 0x15e6b7;
    auStack_1c[0] = *(uint32_t *)(param_1 + 0xf4);
    *(short *)(param_4 + 0x2034) = sStack_24 + 0x10;
    iVar10 = 0x10;
    do {
      iVar14 = iVar10 + -4;
      *(uint32_t *)((int)auStack_1c + iVar10) = *(uint32_t *)((int)&iStack_2c + iVar10);
      iVar10 = iVar14;
    } while (iVar14 != 0);
    iVar10 = 0x10;
    do {
      iVar14 = iVar10 + -4;
      *(uint32_t *)(iVar14 + param_4 + 0x2038) = *(uint32_t *)((int)auStack_1c + iVar10);
      iVar10 = iVar14;
    } while (iVar14 != 0);
  }
  return;
}
