/* @k10d build_exposure_param_table @ 0x1051fa1e
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Populates a parameter table with exposure and sensor settings derived from the object's
 *   state.
 * summary:
 *   The function reads configuration values from the input object (param_1) and a lookup
 *   table at 0x105d6f90. It conditionally calls call_subroutine_and_flag_on_error or
 *   call_subroutine_and_set_flag based on the configuration type (6 or 7). It then iterates
 *   through a series of calls to build_and_dispatch_draw_params, passing various fields
 *   from the object (such as param_1[0x19] through param_1[0x1e]) and constants to populate
 *   a structure or table. The specific fields and the use of 'exposure' related terms in
 *   the brief (AE, EV, etc.) suggest this is preparing exposure or sensor readout
 *   parameters, likely for the PRIME DSP or sensor controller.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int * build_exposure_param_table(int *param_1)

{
  uint16_t uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint8_t *puVar5;
  uint8_t *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  uint8_t *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uintptr_t sp;
  uint8_t *puVar16;
  uint8_t auStack_c8 [12];
  uint8_t auStack_58 [80];
  
  puVar16 = auStack_c8;
  uVar2 = *(uint *)(param_1[0x11] * 4 + 0x105d6f90/*ROM*/);
  iVar3 = param_1[0x17];
  iVar4 = param_1[0x18];
  iVar7 = read_byte_at_offset_0x58_1051ff76(__frv_reg_unset(4));
  if (iVar7 != 0) {
    trigger_sr_cal_transfer_104867c0((int)param_1);
    puVar8 = (uint *)(param_1 + 0x13);
    *puVar8 = (param_1[0x1c] & 0xfU) << 0xc | (param_1[0x1b] & 0xffU) << 8 |
              (param_1[0x1a] & 0xfffU) << 4 | param_1[0x19] & 0xffffU;
    *(uint16_t *)(param_1 + 0x14) = 1;
    pbVar13 = (byte *)(param_1 + 0x21);
    param_1[0x15] = (int)pbVar13;
    if (uVar2 == 6) {
      call_subroutine_and_flag_on_error(*param_1,puVar8,1);
      param_1[0x1e] = (int)(uint)*pbVar13 >> 4;
      param_1[0x1d] = *pbVar13 & 0xf;
    }
    else if (uVar2 == 7) {
      *pbVar13 = (byte)(param_1[0x1e] << 4) | (byte)param_1[0x1d];
      call_subroutine_and_set_flag(*param_1,puVar8,1);
    }
  }
  uVar14 = 0;
  iVar7 = 0;
  do {
    uVar9 = *(uint *)(iVar7 + 0x105d6f90/*ROM*/);
    *(uint16_t *)(puVar16 + 2) = 7;
    *(uint16_t *)(puVar16 + 6) = 0xff;
    puVar16[0xb] = 0;
    build_and_dispatch_draw_params((int)param_1,uVar9 & 0xffff,0,(void *)0x105d6fe8/*ROM*/,*(uint16_t *)(puVar16 + 2),
                 *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
    uVar14 = uVar14 + 1;
    iVar7 = iVar7 + 4;
  } while (uVar14 < 5);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,uVar2 & 0xffff,0,(void *)0x105d6fec/*ROM*/,*(uint16_t *)(puVar16 + 2),
               *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,0x12,(void *)0x105d6ff0/*ROM*/,*(uint16_t *)(puVar16 + 2),
               *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,3,0x15U - iVar3 & 0xffff,(void *)0x105d6ff8/*ROM*/,*(uint16_t *)(puVar16 + 2),
               *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,0x12,(void *)0x105d6ffc/*ROM*/,*(uint16_t *)(puVar16 + 2),
               *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,5,0x13U - iVar4 & 0xffff,(void *)0x105d7000/*ROM*/,*(uint16_t *)(puVar16 + 2),
               *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 0;
  pvVar11 = (void *)0x105d7004/*ROM*/;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  pvVar10 = (void *)0x3;
  build_and_dispatch_draw_params((int)param_1,1,3,(void *)0x105d7004/*ROM*/,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7018/*ROM*/,pvVar10,pvVar11);
  iVar7 = uVar2 * 2;
  puVar5 = (uint8_t *)(iVar7 + 0x105b2dc8/*ROM*/);
  uVar1 = *(uint16_t *)(&DAT_105b2df0/*ROM*/ + iVar7);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  puVar12 = auStack_58;
  build_and_dispatch_draw_params((int)param_1,2,2,auStack_58,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7020/*ROM*/,(void *)param_1[0x1c],puVar12);
  puVar12 = auStack_58;
  if (uVar2 == 2) {
    iVar15 = -0x58;
    puVar6 = &stack0xfffffff8 + iVar3 * 2;
  }
  else {
    iVar15 = 0x28;
    puVar6 = puVar5;
  }
  uVar1 = *(uint16_t *)(puVar6 + iVar15);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0x12,puVar12,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7028/*ROM*/,(void *)param_1[0x1b],puVar12);
  puVar12 = auStack_58;
  if (uVar2 == 2) {
    iVar15 = -0x60;
    puVar6 = &stack0xfffffff8 + iVar3 * 2;
  }
  else {
    iVar15 = 0x28;
    puVar6 = puVar5;
  }
  uVar1 = *(uint16_t *)(puVar6 + iVar15);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0x13,puVar12,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7030/*ROM*/,(void *)param_1[0x1a],puVar12);
  puVar12 = auStack_58;
  if (uVar2 == 2) {
    iVar15 = -0x68;
    puVar6 = &stack0xfffffff8 + iVar3 * 2;
  }
  else {
    iVar15 = 0x28;
    puVar6 = puVar5;
  }
  uVar1 = *(uint16_t *)(puVar6 + iVar15);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,2,0x14,puVar12,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7038/*ROM*/,(void *)param_1[0x19],puVar12);
  puVar12 = auStack_58;
  if (uVar2 == 2) {
    iVar15 = -0x70;
    puVar6 = &stack0xfffffff8 + iVar3 * 2;
  }
  else {
    iVar15 = 0x28;
    puVar6 = puVar5;
  }
  uVar1 = *(uint16_t *)(puVar6 + iVar15);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  pvVar10 = (void *)0x15;
  build_and_dispatch_draw_params((int)param_1,2,0x15,puVar12,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7040/*ROM*/,pvVar10,puVar12);
  uVar1 = *(uint16_t *)(&DAT_105b2e18/*ROM*/ + iVar7);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  puVar12 = auStack_58;
  build_and_dispatch_draw_params((int)param_1,4,2,auStack_58,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7048/*ROM*/,(void *)param_1[0x1e],puVar12);
  puVar12 = auStack_58;
  if (uVar2 == 4) {
    iVar3 = -0x68;
    puVar6 = &stack0xfffffff8 + iVar4 * 2;
  }
  else {
    iVar3 = 0x50;
    puVar6 = puVar5;
  }
  uVar1 = *(uint16_t *)(puVar6 + iVar3);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x12,puVar12,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  format_string_to_buffer_10545140(auStack_58,(char *)0x105d7050/*ROM*/,(void *)param_1[0x1d],puVar12);
  if (uVar2 == 4) {
    puVar5 = &stack0xfffffff8 + iVar4 * 2;
    iVar3 = -0x70;
  }
  else {
    iVar3 = 0x50;
  }
  uVar1 = *(uint16_t *)(puVar5 + iVar3);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,4,0x13,auStack_58,*(uint16_t *)(puVar16 + 2),
               *(uint16_t *)(puVar16 + 6),puVar16[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e40/*ROM*/ + iVar7);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,6,2,(void *)0x105d7058/*ROM*/,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  uVar1 = *(uint16_t *)(&DAT_105b2e54/*ROM*/ + iVar7);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = uVar1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,7,2,(void *)0x105d7060/*ROM*/,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 1;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,2,(void *)0x105d7068/*ROM*/,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  *(uint16_t *)(puVar16 + 2) = 7;
  *(uint16_t *)(puVar16 + 6) = 0xff;
  puVar16[0xb] = 0;
  build_and_dispatch_draw_params((int)param_1,8,8,(void *)0x105d7070/*ROM*/,*(uint16_t *)(puVar16 + 2),*(uint16_t *)(puVar16 + 6)
               ,puVar16[0xb]);
  clear_flag_at_offset_0x58_1051ff7c(param_1);
  return param_1;
}
