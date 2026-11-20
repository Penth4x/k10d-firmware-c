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
  struct {
    int iStack_2c;
    uint16_t uStack_28;
    uint16_t uStack_26;
    short sStack_24;
    uint16_t uStack_22;
    uint32_t uStack_20;
  } _cfg_2c;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint32_t uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint8_t uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uintptr_t sp;
  bool bVar16;
  uint32_t auStack_1c [5];
  
  uVar13 = *(uint *)(param_2 + 0x14) & 0xffff;
  bVar16 = (uint)uRam80010c8c != (*(uint *)(param_2 + 0x38) & 0xffff);
  uVar2 = (uint)uRam80010c8e;
  uVar3 = *(uint *)(param_2 + 4);
  uVar6 = (uint)uRam80010c90;
  uVar11 = *(uint *)(param_2 + 0xc);
  uVar7 = (uint)uRam80010c92;
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar8 = (uint)uRam80010c96;
  iVar9 = *(int *)(param_2 + 0x10);
  if (iVar9 == 0) {
    uVar5 = 0xfffffff6;
  }
  else if (iVar9 == 1) {
    uVar5 = 0xfffffffb;
  }
  else if (iVar9 == 2) {
    uVar5 = 0;
  }
  else if (iVar9 == 3) {
    uVar5 = 5;
  }
  else {
    if (iVar9 != 4) goto LAB_104ecbe0;
    uVar5 = 10;
  }
  *(uint32_t *)(param_4 + 0x2048) = uVar5;
LAB_104ecbe0:
  iVar12 = *(int *)(param_2 + 0x38);
  if (iVar12 == 0) {
    iVar14 = 0xa4;
  }
  else if (iVar12 == 1) {
    iVar14 = 0xcc;
  }
  else {
    iVar14 = 0xcc;
  }
  piVar15 = (int *)(iVar14 + param_1);
  if (*(char *)(param_2 + 0x60) != '\0') {
    piVar15 = (int *)(param_1 + 0x7c);
  }
  bVar1 = uVar2 != uVar13 || bVar16;
  if (bVar1) {
    uRam80010c8c = (ushort)iVar12;
  }
  if ((uVar2 != uVar13 || bVar16) || uVar6 != (uVar3 & 0xffff)) {
    call_virtual_with_six_short_args((cls_105c2be4 *)(param_1 + 0x40),*(uint *)(param_2 + 4) & 0xffff,
                 *(int **)(piVar15[6] + (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4));
    write_sensor_frame_data((cls_105c2a58 *)(param_1 + 0x34),*(uint *)(param_2 + 4) & 0xffff,
                 *(int *)(piVar15[1] + (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4));
    invoke_virtual_method_on_pair((cls_105c2c2c *)(param_1 + 0x4c),*(uint *)(param_2 + 4) & 0xffff,
                 *(int **)(piVar15[3] + (uint)*(byte *)(uVar13 + 0x105c2af1/*ROM*/) * 4));
    uRam80010c90 = (ushort)*(uint32_t *)(param_2 + 4);
  }
  if (bVar1 || (uVar7 != (uVar11 & 0xffff) || uVar8 != (uVar4 & 0xffff))) {
    if (*(int *)(param_2 + 0x18) == 0) {
      iVar12 = *(int *)((uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4 + piVar15[8]);
      uVar10 = 0;
    }
    else if (*(int *)(param_2 + 0x18) == 1) {
      iVar12 = *(int *)((uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4 + piVar15[8]);
      uVar10 = 1;
    }
    else {
      iVar12 = *(int *)((uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4 + piVar15[8]);
      uVar10 = 0;
    }
    *(uint8_t *)(iVar12 + 0x10) = uVar10;
    *(uint16_t *)(*(int *)(piVar15[8] + (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4) + 0x12) =
         *(uint16_t *)(iVar9 * 2 + 0x105c2b42/*ROM*/);
    write_sensor_config_block((cls_105c2968 *)(param_1 + 0x10),*(uint *)(param_2 + 0xc) & 0xffff,
                 *(int **)(piVar15[4] + (uint)*(byte *)(uVar13 + 0x105c2af1/*ROM*/) * 4));
    write_three_values_to_target_104ebeaa((cls_105c29b0 *)(param_1 + 0x1c),*(uint *)(param_2 + 0xc) & 0xffff,
                 *(int **)(piVar15[5] + (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4));
    apply_wb_gain_matrix((cls_105c29f8 *)(param_1 + 0x28),*(uint *)(param_2 + 0xc) & 0xffff,
                 *(int **)(piVar15[8] + (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4));
    reset_six_config_slots((cls_105d5428 *)(param_1 + 0x70));
    uRam80010c96 = (ushort)*(uint32_t *)(param_2 + 0x18);
    uRam80010c92 = (ushort)*(uint32_t *)(param_2 + 0xc);
  }
  iVar9 = (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4;
  *(int *)(*(int *)(piVar15[2] + iVar9) + 0x10) = param_4;
  read_two_values_via_handle((cls_105c2cdc *)(param_1 + 100),*(uint *)(param_2 + 8) & 0xffff,
               *(int *)(piVar15[2] + iVar9));
  uRam80010c94 = (uint16_t)*(uint32_t *)(param_2 + 8);
  iVar9 = (uint)*(byte *)(uVar13 + 0x105c2af1/*ROM*/) * 4;
  *(char *)(*(int *)(*piVar15 + iVar9) + 0x44) = (char)*(uint32_t *)(param_3 + 0x1c);
  write_parameter_block_to_target((cls_105c2720 *)(param_1 + 4),*(uint *)(param_2 + 4) & 0xffff,
               *(uint32_t **)(*piVar15 + iVar9));
  if ((*(int *)(param_2 + 0x20) == 1) || (*(int *)(param_2 + 0x20) == 2)) {
    iVar9 = (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4;
    *(int *)(*(int *)(*(int *)(param_1 + 0xac) + iVar9) + 0x10) = param_4;
    *(int *)(*(int *)(*(int *)(param_1 + 0xd4) + iVar9) + 0x10) = param_4;
    *(int *)(*(int *)(*(int *)(param_1 + 0x84) + iVar9) + 0x10) = param_4;
    if (*(char *)(param_2 + 0x60) == '\0') {
      _cfg_2c.iStack_2c = param_4 + 0x2c;
      iVar12 = param_4 + 0x102c;
      *(uint32_t *)(param_4 + 0x202c) =
           *(uint32_t *)
            ((*(uint *)(param_2 + 0xc) & 0xffff) * 4 + **(int **)(*(int *)(param_1 + 0xc4) + iVar9))
      ;
      *(uint32_t *)(param_4 + 0x2030) =
           *(uint32_t *)
            ((*(uint *)(param_2 + 0xc) & 0xffff) * 4 + **(int **)(*(int *)(param_1 + 0xec) + iVar9))
      ;
      iVar14 = param_1 + 0x2100;
      (*(code *)0x1053072c/*ROM*/)
                (*(uint32_t *)(*(int *)(param_1 + 0xac) + iVar9),*(uint *)(param_2 + 8) & 0xffff,
                 iVar14);
      xor_encrypt_buffer_block((uint *)(param_1 + 0xf4),(int)(iVar14),(int)(_cfg_2c.iStack_2c),(void *)(*(uint32_t *)(param_2 + 0x5c)));
      (*(code *)0x1053072c/*ROM*/)
                (*(uint32_t *)
                  (*(int *)(param_1 + 0xd4) + (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4),
                 *(uint *)(param_2 + 8) & 0xffff,iVar14);
    }
    else {
      (*(code *)0x1053072c/*ROM*/)
                (*(uint32_t *)(*(int *)(param_1 + 0x84) + iVar9),*(uint *)(param_2 + 8) & 0xffff,
                 param_1 + 0x2100);
      iVar9 = (uint)*(byte *)(uVar13 + 0x105c2aa0/*ROM*/) * 4;
      *(uint32_t *)(param_4 + 0x202c) =
           *(uint32_t *)
            ((*(uint *)(param_2 + 0xc) & 0xffff) * 4 + **(int **)(*(int *)(param_1 + 0x9c) + iVar9))
      ;
      *(uint32_t *)(param_4 + 0x2030) =
           *(uint32_t *)
            (**(int **)(*(int *)(param_1 + 0x9c) + iVar9) + (*(uint *)(param_2 + 0xc) & 0xffff) * 4)
      ;
      xor_encrypt_buffer_block((uint *)(param_1 + 0xf4),(int)(param_1 + 0x2100),(int)(param_1 + 0x100),(void *)(*(uint32_t *)(param_2 + 0x5c)));
      iVar12 = param_1 + 0x1100;
    }
    xor_encrypt_buffer_block((uint *)(param_1 + 0xf4),(int)(param_1 + 0x2100),(int)(iVar12),(void *)(*(uint32_t *)(param_2 + 0x5c)));
    _cfg_2c.uStack_26 = 0x20;
    _cfg_2c.uStack_28 = (short)*(uint32_t *)(param_1 + 0xfc);
    _cfg_2c.sStack_24 = (short)*(uint32_t *)(param_1 + 0xf8);
    _cfg_2c.uStack_22 = 0x400;
    _cfg_2c.uStack_20 = 0x15e6b7;
    auStack_1c[0] = *(uint32_t *)(param_1 + 0xf4);
    *(short *)(param_4 + 0x2034) = _cfg_2c.sStack_24 + 0x10;
    iVar9 = 0x10;
    do {
      iVar12 = iVar9 + -4;
      *(uint32_t *)((int)auStack_1c + iVar9) = *(uint32_t *)((int)&_cfg_2c.iStack_2c + iVar9);
      iVar9 = iVar12;
    } while (iVar12 != 0);
    iVar9 = 0x10;
    do {
      iVar12 = iVar9 + -4;
      *(uint32_t *)(iVar12 + param_4 + 0x2038) = *(uint32_t *)((int)auStack_1c + iVar9);
      iVar9 = iVar12;
    } while (iVar12 != 0);
  }
  return;
}
