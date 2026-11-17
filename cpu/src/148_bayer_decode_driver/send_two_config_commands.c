/* @k10d send_two_config_commands @ 0x10469d60
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Sends two sequential configuration commands to a device via a helper function based on
 *   a mode parameter.
 * summary:
 *   The function calls forward_params_to_helper_1046a5be twice with different parameters.
 *   If param_2 is 1, it first sends a command using a value from param_1+0x262 and a
 *   constant from DAT_105a843c, then increments the value at param_1+0x262 and sends a
 *   second command with a constant from DAT_105a8454. Otherwise, it sends a single command
 *   with a constant from DAT_105a846c. It uses a global counter from DAT_800042d0 as a
 *   parameter for both calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_two_config_commands(void *param_1,int param_2)

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
    forward_params_to_helper_1046a5be(param_1,(uint)*(ushort *)((int)param_1 + 0x262),uVar2,(byte *)&DAT_105a843c/*ROM*/,4);
    uVar1 = (uint)(ushort)(*(short *)((int)param_1 + 0x262) + 1);
    uVar2 = (uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1);
    pbVar3 = (byte *)&DAT_105a8454/*ROM*/;
    *(uint16_t *)(puVar4 + 2) = 4;
    puVar5 = puVar4;
  }
  else {
    pbVar3 = (byte *)&DAT_105a846c/*ROM*/;
    uVar1 = 9;
  }
  forward_params_to_helper_1046a5be(param_1,uVar1,uVar2,pbVar3,*(uint16_t *)(puVar5 + 2));
  return;
}
