/* @k10d write_two_config_entries_1046919e @ 0x1046919e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_config_entries_1046919e(void *param_1,int param_2)

{
  short sVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  uintptr_t sp;
  uint8_t *puVar4;
  uint8_t auStackY_1c [2];
  
  puVar4 = auStackY_1c;
  if (param_2 == 0) {
    uVar2 = 0xff;
    uVar3 = 2;
  }
  else {
    uVar2 = 2;
    uVar3 = 0xff;
  }
  forward_six_args_to_helper_1046a5e6(param_1,3,(uint)(ushort)(_DAT_800042d0/*SDRAM*/ + 3),(void *)&DAT_105a809c/*ROM*/,7,uVar2);
  sVar1 = _DAT_800042d0/*SDRAM*/;
  *(uint16_t *)(puVar4 + 2) = 7;
  *(uint16_t *)(puVar4 + 6) = uVar3;
  forward_six_args_to_helper_1046a5e6(param_1,4,(uint)(ushort)(sVar1 + 3),(void *)&DAT_105a80a4/*ROM*/,*(uint16_t *)(puVar4 + 2),
               *(uint16_t *)(puVar4 + 6));
  return;
}
