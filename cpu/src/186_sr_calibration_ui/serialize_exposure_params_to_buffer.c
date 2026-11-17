/* @k10d serialize_exposure_params_to_buffer @ 0x1048a0ec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Packs exposure and aperture fields from the object into a fixed memory region using a
 *   register-write helper.
 * summary:
 *   The function reads fields at indices 0x19-0x20 from the input object and writes them to
 *   a series of fixed addresses (0x105b3988-0x105b3a7c) via build_and_dispatch_draw_params.
 *   It handles different modes (uVar1 == 2, 4, 6, 7) to adjust how parameters are packed or
 *   sourced, including reading from stack-based tables for specific modes. It calls
 *   read_byte_at_offset_0x58_1048a714 to check a condition before proceeding and
 *   clear_flag_at_offset_0x58_1048a71a at the end, likely to finalize the transaction or
 *   update state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * serialize_exposure_params_to_buffer(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint8_t *puVar4;
  uint8_t *puVar5;
  char cVar6;
  uint *puVar7;
  uint uVar8;
  void *pvVar9;
  uint16_t uVar10;
  void *pvVar11;
  uint8_t *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uintptr_t sp;
  uint8_t *puVar17;
  uint8_t auStack_c4 [12];
  uint16_t auStack_78 [16];
  uint8_t auStack_58 [80];
  
  puVar17 = auStack_c4;
  auStack_78[0] = 0xff;
  auStack_78[1] = 1;
  auStack_78[2] = 1;
  auStack_78[3] = 1;
  auStack_78[4] = 1;
  auStack_78[5] = 0xff;
  auStack_78[6] = 1;
  auStack_78[7] = 1;
  auStack_78[8] = 1;
  auStack_78[9] = 1;
  auStack_78[10] = 0xff;
  auStack_78[0xb] = 1;
  auStack_78[0xc] = 1;
  auStack_78[0xd] = 1;
  auStack_78[0xe] = 1;
  auStack_78[0xf] = 0xff;
  uVar1 = *(uint *)(param_1[0x11] * 4 + 0x105b3988/*ROM*/);
  iVar2 = param_1[0x17];
  iVar3 = param_1[0x18];
  cVar6 = read_byte_at_offset_0x58_1048a714(param_1);
  if (cVar6 != '\0') {
    trigger_sr_cal_transfer_104867c0((int)param_1);
    puVar7 = (uint *)(param_1 + 0x13);
    *puVar7 = (param_1[0x1c] & 0xfU) << 0xc | (param_1[0x1b] & 0xffU) << 8 |
              (param_1[0x1a] & 0xfffU) << 4 | param_1[0x19] & 0xffffU;
    *(uint16_t *)(param_1 + 0x14) = 2;
    pbVar13 = (byte *)(param_1 + 0x21);
    param_1[0x15] = (int)pbVar13;
    if (uVar1 == 6) {
      call_subroutine_and_flag_on_error(*param_1,puVar7,0);
      param_1[0x20] = (int)(uint)*pbVar13 >> 4;
      param_1[0x1f] = *pbVar13 & 0xf;
      param_1[0x1e] = (int)(uint)*(byte *)((int)param_1 + 0x85) >> 4;
      param_1[0x1d] = *(byte *)((int)param_1 + 0x85) & 0xf;
    }
    else if (uVar1 == 7) {
      *pbVar13 = (byte)(param_1[0x20] << 4) | (byte)param_1[0x1f];
      *(byte *)((int)param_1 + 0x85) = (byte)(param_1[0x1e] << 4) | (byte)param_1[0x1d];
      call_subroutine_and_set_flag(*param_1,puVar7,0);
      request_twai_object(*param_1);
    }
  }
  uVar14 = 0;
  iVar15 = 0;
  do {
    uVar8 = *(uint *)(iVar15 + 0x105b3988/*ROM*/);
    *(uint16_t *)(puVar17 + 2) = 7;
    *(uint16_t *)(puVar17 + 6) = 0xff;
    puVar17[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar8 & 0xffff,0,(void *)0x105b39e0/*ROM*/,*(uint16_t *)(puVar17 + 2),
                 *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
    uVar14 = uVar14 + 1;
    iVar15 = iVar15 + 4;
  } while (uVar14 < 5);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,uVar1 & 0xffff,0,(void *)0x105b39e4/*ROM*/,*(uint16_t *)(puVar17 + 2),
               *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,0x12,(void *)0x105b39e8/*ROM*/,*(uint16_t *)(puVar17 + 2),
               *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,0x15U - iVar2 & 0xffff,(void *)0x105b39f0/*ROM*/,*(uint16_t *)(puVar17 + 2),
               *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,0x12,(void *)0x105b39f4/*ROM*/,*(uint16_t *)(puVar17 + 2),
               *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,0x15U - iVar3 & 0xffff,(void *)0x105b39fc/*ROM*/,*(uint16_t *)(puVar17 + 2),
               *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 0;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  pvVar11 = (void *)0x105b3a00/*ROM*/;
  puVar17[0xb] = 0;
  pvVar9 = (void *)0x5;
  build_and_dispatch_draw_params((int)param_1,1,5,(void *)0x105b3a00/*ROM*/,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a14/*ROM*/,pvVar9,pvVar11);
  iVar15 = uVar1 * 2;
  puVar4 = (uint8_t *)(iVar15 + 0x105b2dc8/*ROM*/);
  uVar10 = *(uint16_t *)(&DAT_105b2df0/*ROM*/ + iVar15);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  puVar12 = auStack_58;
  build_and_dispatch_draw_params((int)param_1,2,2,auStack_58,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a1c/*ROM*/,(void *)param_1[0x1c],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 2) {
    iVar16 = -0x58;
    puVar5 = &stack0xfffffff8 + iVar2 * 2;
  }
  else {
    iVar16 = 0x28;
    puVar5 = puVar4;
  }
  uVar10 = *(uint16_t *)(puVar5 + iVar16);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0x12,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a24/*ROM*/,(void *)param_1[0x1b],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 2) {
    iVar16 = -0x60;
    puVar5 = &stack0xfffffff8 + iVar2 * 2;
  }
  else {
    iVar16 = 0x28;
    puVar5 = puVar4;
  }
  uVar10 = *(uint16_t *)(puVar5 + iVar16);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0x13,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a2c/*ROM*/,(void *)param_1[0x1a],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 2) {
    iVar16 = -0x68;
    puVar5 = &stack0xfffffff8 + iVar2 * 2;
  }
  else {
    iVar16 = 0x28;
    puVar5 = puVar4;
  }
  uVar10 = *(uint16_t *)(puVar5 + iVar16);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0x14,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a34/*ROM*/,(void *)param_1[0x19],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 2) {
    iVar16 = -0x70;
    puVar5 = &stack0xfffffff8 + iVar2 * 2;
  }
  else {
    iVar16 = 0x28;
    puVar5 = puVar4;
  }
  uVar10 = *(uint16_t *)(puVar5 + iVar16);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  pvVar9 = (void *)0x15;
  build_and_dispatch_draw_params((int)param_1,2,0x15,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a3c/*ROM*/,pvVar9,puVar12);
  uVar10 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar15);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  puVar12 = auStack_58;
  build_and_dispatch_draw_params((int)param_1,4,2,auStack_58,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a44/*ROM*/,(void *)param_1[0x20],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 4) {
    puVar4 = &stack0xfffffff8 + iVar3 * 2;
    iVar2 = -0x58;
  }
  else {
    iVar2 = 0x50;
  }
  uVar10 = *(uint16_t *)(puVar4 + iVar2);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x12,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a4c/*ROM*/,(void *)param_1[0x1f],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 4) {
    uVar10 = auStack_78[iVar3 + 8];
  }
  else {
    uVar10 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar15);
  }
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x13,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a54/*ROM*/,(void *)param_1[0x1e],puVar12);
  puVar12 = auStack_58;
  if (uVar1 == 4) {
    uVar10 = auStack_78[iVar3 + 4];
  }
  else {
    uVar10 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar15);
  }
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x14,puVar12,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105b3a5c/*ROM*/,(void *)param_1[0x1d],puVar12);
  if (uVar1 == 4) {
    uVar10 = auStack_78[iVar3];
  }
  else {
    uVar10 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar15);
  }
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x15,auStack_58,*(uint16_t *)(puVar17 + 2),
               *(uint16_t *)(puVar17 + 6),puVar17[0xb]);
  uVar10 = *(uint16_t *)(&DAT_105b2e40/*ROM*/ + iVar15);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,6,2,(void *)0x105b3a64/*ROM*/,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  uVar10 = *(uint16_t *)(&DAT_105b2e54/*ROM*/ + iVar15);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = uVar10;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,7,2,(void *)0x105b3a6c/*ROM*/,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 1;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,2,(void *)0x105b3a74/*ROM*/,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  *(uint16_t *)(puVar17 + 2) = 7;
  *(uint16_t *)(puVar17 + 6) = 0xff;
  puVar17[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,8,(void *)0x105b3a7c/*ROM*/,*(uint16_t *)(puVar17 + 2),*(uint16_t *)(puVar17 + 6)
               ,puVar17[0xb]);
  clear_flag_at_offset_0x58_1048a71a(param_1);
  return param_1;
}
