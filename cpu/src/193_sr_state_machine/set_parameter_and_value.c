/* @k10d set_parameter_and_value @ 0x1048ffee
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 193_sr_state_machine (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_parameter_and_value(int param_1,ushort param_2,int param_3,uint param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = (*(code *)0x10445b00/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
  store_param2_to_dat_400403d4(*(uint32_t *)(param_1 + 0x14),uVar2 & 0xff00 | param_2);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (param_4 & 0xffff) * 3;
    uVar3 = CONCAT21(CONCAT11((DAT_105984dc/*ROM*/)[iVar1],(&DAT_105984de/*ROM*/)[iVar1]),(&DAT_105984dd/*ROM*/)[iVar1])
            | 0x80000000/*SDRAM*/;
  }
  write_masked_value_to_400403e0(*(uint32_t *)(param_1 + 0x14),uVar3);
  return;
}
