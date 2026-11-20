/* @k10d send_two_config_packets_10469dca @ 0x10469dca
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Sends two configuration packets to a device via forward_params_to_helper_1046a5be,
 *   selecting packet data based on param_2.
 * summary:
 *   The function calls forward_params_to_helper_1046a5be twice with different parameters.
 *   If param_2 is 1, it first sends a packet using data from param_1+0x262 and a length of
 *   4, then increments the value at param_1+0x262. In both cases, it sends a second packet
 *   using either data from DAT_105a848c (length 4) or DAT_105a84a4 (length 9) depending on
 *   param_2. The value _DAT_800042d0+1 is used as a common parameter in both calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_two_config_packets_10469dca(void *param_1,int param_2)

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
    forward_params_to_helper_1046a5be(param_1,(uint)*(ushort *)((int)param_1 + 0x262),uVar2,&DAT_105a8474/*ROM*/,4);
    uVar1 = (uint)(ushort)(*(short *)((int)param_1 + 0x262) + 1);
    uVar2 = (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1);
    pbVar3 = &DAT_105a848c/*ROM*/;
    *(uint16_t *)(puVar4 + 2) = 4;
    puVar5 = puVar4;
  }
  else {
    pbVar3 = &DAT_105a84a4/*ROM*/;
    uVar1 = 9;
  }
  forward_params_to_helper_1046a5be(param_1,uVar1,uVar2,pbVar3,*(uint16_t *)(puVar5 + 2));
  return;
}
