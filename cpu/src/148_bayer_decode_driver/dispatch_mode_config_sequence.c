/* @k10d dispatch_mode_config_sequence @ 0x1046979a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_config_sequence(void *param_1,void *param_2,int param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t *puVar4;
  uint8_t *puVar5;
  
  puVar5 = &stack0xffffffe4;
  puVar4 = &stack0xffffffe4;
  puVar3 = &stack0xffffffe4;
  if (param_4 == 1) {
    if (param_2 == (void *)0x0) {
      send_twenty_identical_entries(param_1);
      uVar2 = _DAT_800042d0/*SDRAM*/ + 1;
      *(uint16_t *)(puVar3 + 2) = 2;
      forward_params_to_helper_1046a5be(param_1,1,(uint)uVar2,(byte *)0x800042d2/*SDRAM*/,*(uint16_t *)(puVar3 + 2));
      uVar2 = _DAT_800042d0/*SDRAM*/ + 1;
      *(uint16_t *)(puVar3 + 2) = 3;
      forward_params_to_helper_1046a5be(param_1,2,(uint)uVar2,(void *)&DAT_105a8214/*ROM*/,*(uint16_t *)(puVar3 + 2));
      sVar1 = _DAT_800042d0/*SDRAM*/;
      *(uint16_t *)(puVar3 + 2) = 0;
      *(uint16_t *)(puVar3 + 6) = 7;
      forward_six_args_to_helper_1046a5e6(param_1,5,(uint)(ushort)(sVar1 + 1),(void *)&DAT_105a822c/*ROM*/,*(uint16_t *)(puVar3 + 2),
                   *(uint16_t *)(puVar3 + 6));
      uVar2 = _DAT_800042d0/*SDRAM*/ + 1;
      *(uint16_t *)(puVar3 + 2) = 4;
      forward_params_to_helper_1046a5be(param_1,7,(uint)uVar2,(void *)&DAT_105a8240/*ROM*/,*(uint16_t *)(puVar3 + 2));
    }
    else {
      build_and_send_param_struct_1046a60e(param_1,3,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),param_2,(void *)&DAT_105a8250/*ROM*/,6);
      sVar1 = _DAT_800042d0/*SDRAM*/;
      *(uint16_t *)(puVar4 + 2) = 0;
      *(uint16_t *)(puVar4 + 6) = 7;
      forward_six_args_to_helper_1046a5e6(param_1,5,(uint)(ushort)(sVar1 + 1),(void *)&DAT_105a825c/*ROM*/,*(uint16_t *)(puVar4 + 2),
                   *(uint16_t *)(puVar4 + 6));
    }
  }
  else {
    forward_params_to_helper_1046a5be(param_1,0,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 1),(void *)&DAT_105a8270/*ROM*/,7);
    if (param_3 == 2) {
      uVar2 = _DAT_800042d0/*SDRAM*/ + 5;
      *(uint16_t *)(puVar5 + 2) = 7;
      forward_params_to_helper_1046a5be(param_1,4,(uint)uVar2,(void *)&DAT_105a827c/*ROM*/,*(uint16_t *)(puVar5 + 2));
    }
    *(uint16_t *)(puVar5 + 2) = 0;
    *(uint16_t *)(puVar5 + 6) = 7;
    forward_six_args_to_helper_1046a5e6(param_1,5,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 5),(void *)&DAT_105a8288/*ROM*/,
                 *(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6));
  }
  return;
}
