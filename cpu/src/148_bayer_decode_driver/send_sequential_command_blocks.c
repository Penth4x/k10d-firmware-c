/* @k10d send_sequential_command_blocks @ 0x104699ba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Sends a sequence of command blocks to a peripheral based on state flags and parameters.
 * summary:
 *   The function branches on param_3 to select between two sets of operations. It calls
 *   forward_six_args_to_helper_1046a5e6, forward_params_to_helper_1046a5be, and
 *   build_and_send_param_struct_1046a60e with various constants and data from SDRAM
 *   (DAT_800042c0/800042d0) to transmit specific data structures. It also calls
 *   call_helper_forty_five_times, likely to refresh or clear the target state. The specific
 *   data structures are identified by constants in ROM (DAT_105a82xx).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104699e6) overlaps instruction at (ram,0x104699e4)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_sequential_command_blocks(void *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uintptr_t sp;
  uint32_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStackY_28 [2];
  
  puVar4 = (uint32_t *)auStackY_28;
  puVar5 = auStackY_28;
  if (param_3 == 1) {
    forward_six_args_to_helper_1046a5e6(param_1,5,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),&DAT_105a82c8/*ROM*/,0,3);
    call_helper_forty_five_times(param_1);
    uVar3 = *(ushort *)(_DAT_800042c0/*SDRAM*/ + 0x83fbf8);
    uVar1 = *(ushort *)(_DAT_800042c0/*SDRAM*/ + 0x83fbfa);
    uVar2 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)((int)puVar4 + 2) = 6;
    forward_params_to_helper_1046a5be(param_1,5,(uint)uVar2,&DAT_105a82dc/*ROM*/,*(uint16_t *)((int)puVar4 + 2));
    uVar2 = _DAT_800042d0/*SDRAM*/ + 9;
    *puVar4 = (uintptr_t)(&DAT_105a82e8/*ROM*/);
    *(uint16_t *)((int)puVar4 + 6) = 6;
    build_and_send_param_struct_1046a60e(param_1,5,(uint)uVar2,(void *)((int)(uint)uVar3 >> 8),(char *)*puVar4,
                 *(uint16_t *)((int)puVar4 + 6));
    uVar2 = _DAT_800042d0/*SDRAM*/ + 0xb;
    *puVar4 = (uintptr_t)(&DAT_105a82ec/*ROM*/);
    *(uint16_t *)((int)puVar4 + 6) = 6;
    build_and_send_param_struct_1046a60e(param_1,5,(uint)uVar2,(void *)(uVar3 & 0xff),(char *)*puVar4,
                 *(uint16_t *)((int)puVar4 + 6));
    uVar3 = _DAT_800042d0/*SDRAM*/ + 0xe;
    *puVar4 = (uintptr_t)(&DAT_105a82f4/*ROM*/);
    *(uint16_t *)((int)puVar4 + 6) = 6;
    build_and_send_param_struct_1046a60e(param_1,5,(uint)uVar3,(void *)((int)(uint)uVar1 >> 8),(char *)*puVar4,
                 *(uint16_t *)((int)puVar4 + 6));
    uVar3 = _DAT_800042d0/*SDRAM*/ + 0x11;
    *puVar4 = (uintptr_t)(&DAT_105a82fc/*ROM*/);
    *(uint16_t *)((int)puVar4 + 6) = 6;
    build_and_send_param_struct_1046a60e(param_1,5,(uint)uVar3,(void *)(uVar1 & 0xff),(char *)*puVar4,
                 *(uint16_t *)((int)puVar4 + 6));
    uVar3 = _DAT_800042d0/*SDRAM*/ + 1;
    *(uint16_t *)((int)puVar4 + 2) = 2;
    forward_params_to_helper_1046a5be(param_1,4,(uint)uVar3,&DAT_105a8304/*ROM*/,*(uint16_t *)((int)puVar4 + 2));
    if (param_2 == 1) {
      uVar3 = _DAT_800042d0/*SDRAM*/ + 1;
      *(uint16_t *)((int)puVar4 + 2) = 5;
      forward_params_to_helper_1046a5be(param_1,7,(uint)uVar3,&DAT_105a8318/*ROM*/,*(uint16_t *)((int)puVar4 + 2));
    }
    else {
      call_helper_forty_five_times(param_1);
      call_helper_forty_five_times(param_1);
    }
  }
  else {
    forward_six_args_to_helper_1046a5e6(param_1,5,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 5),&DAT_105a8328/*ROM*/,0,3);
    if (param_2 == 1) {
      uVar3 = _DAT_800042d0/*SDRAM*/ + 1;
      *(uint16_t *)(puVar5 + 2) = 7;
      forward_params_to_helper_1046a5be(param_1,8,(uint)uVar3,&DAT_105a833c/*ROM*/,*(uint16_t *)(puVar5 + 2));
    }
  }
  return;
}
