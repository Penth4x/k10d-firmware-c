/* @k10d write_sequential_data_entries @ 0x104694cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Writes a sequence of data entries to a target using helper functions, branching on a
 *   mode parameter.
 * summary:
 *   The function branches on param_4 to select between two sets of entries. It repeatedly
 *   calls forward_params_to_helper_1046a5be and build_and_send_param_struct_1046a60e,
 *   passing pointers to static data (likely strings or labels) and values derived from
 *   param_2, param_3, and memory at 0x800042c0. It also calls call_helper_with_zero_and_ff,
 *   call_helper_with_fixed_args_1046774a, call_helper_with_two_and_ff, and
 *   call_helper_with_three_args_10467786 to retrieve values from an object at param_1 +
 *   0x205. The pattern suggests populating a structured buffer or log with multiple fields.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104694fe) overlaps instruction at (ram,0x104694fc)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_sequential_data_entries(void *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  uintptr_t sp;
  uint32_t *puVar9;
  uint32_t *puVar10;
  uint8_t auStackY_48 [2];
  
  puVar9 = (uint32_t *)auStackY_48;
  puVar10 = (uint32_t *)auStackY_48;
  uVar1 = (uint)*(ushort *)(_DAT_800042c0/*SDRAM*/ + 0x83fbf8);
  if (param_4 == 1) {
    forward_params_to_helper_1046a5be(param_1,param_2,param_3,&DAT_105a8160/*ROM*/,3);
    *(uint16_t *)((int)puVar9 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,param_2,param_3 + 9U & 0xffff,&DAT_105a816c/*ROM*/,
                 *(uint16_t *)((int)puVar9 + 2));
    uVar2 = param_3 + 0xcU & 0xffff;
    *(uint16_t *)((int)puVar9 + 2) = 3;
    forward_params_to_helper_1046a5be(param_1,param_2,uVar2,&DAT_105a8170/*ROM*/,*(uint16_t *)((int)puVar9 + 2));
    uVar8 = param_2 + 1U & 0xffff;
    *(uint16_t *)((int)puVar9 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,uVar8,param_3,&DAT_105a817c/*ROM*/,*(uint16_t *)((int)puVar9 + 2));
    iVar3 = (int)param_1 + 0x205;
    pvVar7 = (void *)call_helper_with_zero_and_ff(iVar3);
    *puVar9 = (uintptr_t)(&DAT_105a818c/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar2,pvVar7,(char *)*puVar9,*(uint16_t *)((int)puVar9 + 6));
    uVar4 = param_3 + 0xeU & 0xffff;
    pvVar7 = (void *)call_helper_with_fixed_args_1046774a(iVar3);
    *puVar9 = (uintptr_t)(&DAT_105a8190/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar4,pvVar7,(char *)*puVar9,*(uint16_t *)((int)puVar9 + 6));
    uVar5 = param_3 + 0x11U & 0xffff;
    pvVar7 = (void *)call_helper_with_two_and_ff(iVar3);
    *puVar9 = (uintptr_t)(&DAT_105a8198/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar5,pvVar7,(char *)*puVar9,*(uint16_t *)((int)puVar9 + 6));
    uVar6 = param_3 + 0x14U & 0xffff;
    pvVar7 = (void *)call_helper_with_three_args_10467786(iVar3);
    *puVar9 = (uintptr_t)(&DAT_105a81a0/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar6,pvVar7,(char *)*puVar9,*(uint16_t *)((int)puVar9 + 6));
    uVar8 = param_2 + 2U & 0xffff;
    *(uint16_t *)((int)puVar9 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,uVar8,param_3,&DAT_105a81a8/*ROM*/,*(uint16_t *)((int)puVar9 + 2));
    *puVar9 = (uintptr_t)(&DAT_105a81b8/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar2,(void *)((int)uVar1 >> 8),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    *puVar9 = (uintptr_t)(&DAT_105a81bc/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar4,(void *)(uVar1 & 0xff),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    uVar1 = (uint)*(ushort *)(_DAT_800042c0/*SDRAM*/ + 0x83fbfa);
    *puVar9 = (uintptr_t)(&DAT_105a81c4/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar5,(void *)((int)uVar1 >> 8),(char *)*puVar9,
                 *(uint16_t *)((int)puVar9 + 6));
    *puVar9 = (uintptr_t)(&DAT_105a81cc/*ROM*/);
    *(uint16_t *)((int)puVar9 + 6) = 2;
    puVar10 = puVar9;
  }
  else {
    forward_params_to_helper_1046a5be(param_1,param_2,param_3,&DAT_105a81d4/*ROM*/,7);
    uVar2 = param_3 + 0x10U & 0xffff;
    pvVar7 = (void *)call_helper_with_zero_and_ff((int)param_1 + 0x205);
    *puVar10 = (uintptr_t)(&DAT_105a81e8/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,param_2,uVar2,pvVar7,(char *)*puVar10,*(uint16_t *)((int)puVar10 + 6));
    uVar6 = param_3 + 0x12U & 0xffff;
    pvVar7 = (void *)call_helper_with_fixed_args_1046774a((int)param_1 + 0x205);
    *puVar10 = (uintptr_t)(&DAT_105a81ec/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,param_2,uVar6,pvVar7,(char *)*puVar10,*(uint16_t *)((int)puVar10 + 6));
    uVar8 = param_2 + 1U & 0xffff;
    *(uint16_t *)((int)puVar10 + 2) = 7;
    forward_params_to_helper_1046a5be(param_1,uVar8,param_3,&DAT_105a81f4/*ROM*/,*(uint16_t *)((int)puVar10 + 2));
    *puVar10 = (uintptr_t)(&DAT_105a8208/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
    build_and_send_param_struct_1046a60e(param_1,uVar8,uVar2,(void *)((int)uVar1 >> 8),(char *)*puVar10,
                 *(uint16_t *)((int)puVar10 + 6));
    *puVar10 = (uintptr_t)(&DAT_105a820c/*ROM*/);
    *(uint16_t *)((int)puVar10 + 6) = 7;
  }
  build_and_send_param_struct_1046a60e(param_1,uVar8,uVar6,(void *)(uVar1 & 0xff),(char *)*puVar10,
               *(uint16_t *)((int)puVar10 + 6));
  return;
}
