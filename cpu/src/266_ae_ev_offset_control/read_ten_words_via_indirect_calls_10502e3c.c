/* @k10d read_ten_words_via_indirect_calls_10502e3c @ 0x10502e3c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_ten_words_via_indirect_calls_10502e3c(uint32_t param_1,int param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  
  param_2 = param_2 + 0xc;
  uVar1 = (*(code *)0x10455efa/*ROM*/)(param_2);
  *param_3 = uVar1;
  uVar1 = (*(code *)0x10455f02/*ROM*/)(param_2);
  param_3[1] = uVar1;
  uVar1 = (*(code *)0x10455f0a/*ROM*/)(param_2);
  param_3[2] = uVar1;
  uVar1 = (*(code *)0x10455f12/*ROM*/)(param_2);
  param_3[3] = uVar1;
  uVar1 = (*(code *)0x10455f1a/*ROM*/)(param_2);
  param_3[4] = uVar1;
  uVar1 = (*(code *)0x10455f22/*ROM*/)(param_2);
  param_3[5] = uVar1;
  uVar1 = (*(code *)0x10455f2c/*ROM*/)(param_2);
  param_3[6] = uVar1;
  uVar1 = (*(code *)0x10455f36/*ROM*/)(param_2);
  param_3[7] = uVar1;
  uVar1 = (*(code *)0x10455f40/*ROM*/)(param_2);
  param_3[8] = uVar1;
  uVar1 = (*(code *)0x10455f4a/*ROM*/)(param_2);
  param_3[9] = uVar1;
  return;
}
