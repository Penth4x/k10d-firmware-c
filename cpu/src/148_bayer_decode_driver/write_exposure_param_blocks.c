/* @k10d write_exposure_param_blocks @ 0x10469204
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Writes multiple parameter blocks to a target object using two helper functions based on
 *   a mode flag.
 * summary:
 *   The function branches on param_4. If 1, it calls forward_params_to_helper_1046a5be and
 *   build_and_send_param_struct_1046a60e multiple times with specific offsets from param_3
 *   and values from param_1 and global DAT_800042c0. If not 1, it performs a similar
 *   sequence with different offsets and lengths. It appears to be configuring a set of
 *   parameters, possibly related to exposure or sensor settings given the context of the
 *   K10D firmware, but the specific subsystem is not definitively identified by the callees
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10469232) overlaps instruction at (ram,0x10469230)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void write_exposure_param_blocks(void *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint16_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uintptr_t sp;
  uint32_t *puVar9;
  uint32_t *puVar10;
  uint8_t auStackY_44 [2];
  
  puVar9 = (uint32_t *)auStackY_44;
  puVar10 = (uint32_t *)auStackY_44;
  uVar3 = (uint)*(ushort *)(_DAT_800042c0/*SDRAM*/ + 0x1c);
  if (param_4 == 1) {
    forward_params_to_helper_1046a5be(param_1,param_2,param_3,&DAT_105a80ac/*ROM*/,3);
    *(uint16_t *)((int)puVar9 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,param_2,param_3 + 9U & 0xffff,&DAT_105a80b8/*ROM*/,
                 *(uint16_t *)((int)puVar9 + 2));
    uVar4 = param_3 + 0xcU & 0xffff;
    *(uint16_t *)((int)puVar9 + 2) = 3;
    forward_params_to_helper_1046a5be(param_1,param_2,uVar4,&DAT_105a80bc/*ROM*/,*(uint16_t *)((int)puVar9 + 2));
    uVar8 = param_2 + 1U & 0xffff;
    *(uint16_t *)((int)puVar9 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,uVar8,param_3,&DAT_105a80c8/*ROM*/,*(uint16_t *)((int)puVar9 + 2));
    uVar1 = *(ushort *)((int)param_1 + 600);
    *puVar9 = (uintptr_t)(&DAT_105a80d8/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar4,(void *)((int)(uint)uVar1 >> 8),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    uVar5 = param_3 + 0xeU & 0xffff;
    uVar2 = *(uint16_t *)((int)param_1 + 600);
    *puVar9 = (uintptr_t)(&DAT_105a80dc/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar5,(void *)(uint)(byte)uVar2,(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    uVar6 = param_3 + 0x11U & 0xffff;
    uVar1 = *(ushort *)((int)param_1 + 0x25a);
    *puVar9 = (uintptr_t)(&DAT_105a80e4/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar6,(void *)((int)(uint)uVar1 >> 8),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    uVar7 = param_3 + 0x14U & 0xffff;
    uVar2 = *(uint16_t *)((int)param_1 + 0x25a);
    *puVar9 = (uintptr_t)(&DAT_105a80ec/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar7,(void *)(uint)(byte)uVar2,(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    uVar8 = param_2 + 2U & 0xffff;
    *(uint16_t *)((int)puVar9 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,uVar8,param_3,&DAT_105a80f4/*ROM*/,*(uint16_t *)((int)puVar9 + 2));
    *puVar9 = (uintptr_t)(&DAT_105a8104/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar4,(void *)((int)uVar3 >> 8),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    *puVar9 = (uintptr_t)(&DAT_105a8108/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar5,(void *)(uVar3 & 0xff),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    uVar1 = *(ushort *)(_DAT_800042c0/*SDRAM*/ + 0x1e);
    *puVar9 = (uintptr_t)(&DAT_105a8110/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar6,(void *)((int)(uint)uVar1 >> 8),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    *puVar9 = (uintptr_t)(&DAT_105a8118/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar7,(void *)(uVar1 & 0xff),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    _DAT_800042cc/*SDRAM*/ = *(uint16_t *)(_DAT_800042c0/*SDRAM*/ + 0x1c);
    _DAT_800042ce/*SDRAM*/ = *(uint16_t *)(_DAT_800042c0/*SDRAM*/ + 0x1e);
  }
  else {
    forward_params_to_helper_1046a5be(param_1,param_2,param_3,&DAT_105a8120/*ROM*/,7);
    uVar4 = param_3 + 0x10U & 0xffff;
    uVar1 = *(ushort *)((int)param_1 + 600);
    *puVar10 = (uintptr_t)(&DAT_105a8134/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,param_2,uVar4,(void *)((int)(uint)uVar1 >> 8),(char *)*puVar10,
                 *(uint16_t *)((int)puVar10 + 6));
    uVar5 = param_3 + 0x12U & 0xffff;
    uVar2 = *(uint16_t *)((int)param_1 + 600);
    *puVar10 = (uintptr_t)(&DAT_105a8138/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,param_2,uVar5,(void *)(uint)(byte)uVar2,(char *)*puVar10,
                 *(uint16_t *)((int)puVar10 + 6));
    uVar6 = param_2 + 1U & 0xffff;
    *(uint16_t *)((int)puVar10 + 2) = 7;
    forward_params_to_helper_1046a5be(param_1,uVar6,param_3,&DAT_105a8140/*ROM*/,*(uint16_t *)((int)puVar10 + 2));
    *puVar10 = (uintptr_t)(&DAT_105a8154/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,uVar6,uVar4,(void *)((int)uVar3 >> 8),(char *)*puVar10,
                 *(uint16_t *)((int)puVar10 + 6));
    *puVar10 = (uintptr_t)(&DAT_105a8158/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,uVar6,uVar5,(void *)(uVar3 & 0xff),(char *)*puVar10,
                 *(uint16_t *)((int)puVar10 + 6));
  }
  return;
}
