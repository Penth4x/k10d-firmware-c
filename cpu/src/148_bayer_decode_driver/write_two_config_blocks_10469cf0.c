/* @k10d write_two_config_blocks_10469cf0 @ 0x10469cf0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Writes two 4-byte configuration blocks to a device via a helper function, selecting
 *   block content based on a mode parameter.
 * summary:
 *   The function calls forward_params_to_helper_1046a5be twice with different source
 *   addresses (DAT_105a8410, DAT_105a8428, or DAT_105a8434) and lengths (4 or 9). It uses a
 *   global counter at 0x800042d0 and a field at offset 0x262 of param_1 to determine the
 *   second write's parameters. The first write is conditional on param_2 being 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_config_blocks_10469cf0(void *param_1,int param_2)

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
    forward_params_to_helper_1046a5be(param_1,(uint)*(ushort *)((int)param_1 + 0x262),uVar2,(byte *)&DAT_105a8410/*ROM*/,4);
    uVar1 = (uint)(ushort)(*(short *)((int)param_1 + 0x262) + 1);
    uVar2 = (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1);
    pbVar3 = (byte *)&DAT_105a8428/*ROM*/;
    *(uint16_t *)(puVar4 + 2) = 4;
    puVar5 = puVar4;
  }
  else {
    pbVar3 = (byte *)&DAT_105a8434/*ROM*/;
    uVar1 = 9;
  }
  forward_params_to_helper_1046a5be(param_1,uVar1,uVar2,pbVar3,*(uint16_t *)(puVar5 + 2));
  return;
}
