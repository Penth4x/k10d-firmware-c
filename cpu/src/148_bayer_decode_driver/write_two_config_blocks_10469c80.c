/* @k10d write_two_config_blocks_10469c80 @ 0x10469c80
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Writes two small configuration blocks to a device via a helper, selecting block content
 *   based on a mode flag.
 * summary:
 *   The function calls forward_params_to_helper_1046a5be twice with param_1 as the first
 *   argument. It uses a global counter at 0x800042d0 (incremented) as the third argument.
 *   If param_2 is 1, it first writes a 4-byte block from 0x105a83e4 using a value from
 *   param_1+0x262, then writes a second block from 0x105a83fc. Otherwise, it writes a
 *   single 9-byte block from 0x105a8408. The exact role of
 *   forward_params_to_helper_1046a5be and the data blocks is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_config_blocks_10469c80(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uint8_t auStackY_14 [2];
  
  puVar5 = auStackY_14;
  puVar4 = auStackY_14;
  uVar2 = (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1);
  if (param_2 == 1) {
    forward_params_to_helper_1046a5be(param_1,(uint)*(ushort *)((int)param_1 + 0x262),uVar2,&DAT_105a83e4/*ROM*/,4);
    uVar1 = (uint)(ushort)(*(short *)((int)param_1 + 0x262) + 1);
    uVar2 = (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1);
    pbVar3 = &DAT_105a83fc/*ROM*/;
    *(uint16_t *)(puVar4 + 2) = 4;
    puVar5 = puVar4;
  }
  else {
    pbVar3 = &DAT_105a8408/*ROM*/;
    uVar1 = 9;
  }
  forward_params_to_helper_1046a5be(param_1,uVar1,uVar2,pbVar3,*(uint16_t *)(puVar5 + 2));
  return;
}
