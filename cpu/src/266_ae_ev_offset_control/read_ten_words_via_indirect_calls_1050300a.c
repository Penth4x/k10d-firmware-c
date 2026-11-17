/* @k10d read_ten_words_via_indirect_calls_1050300a @ 0x1050300a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_ten_words_via_indirect_calls_1050300a(uint32_t param_1,int param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  
  param_2 = param_2 + 0xc;
  uVar1 = (*(code *)0x1045601a/*ROM*/)(param_2);
  *param_3 = uVar1;
  uVar1 = (*(code *)0x10456022/*ROM*/)(param_2);
  param_3[1] = uVar1;
  uVar1 = (*(code *)0x1045602a/*ROM*/)(param_2);
  param_3[2] = uVar1;
  uVar1 = (*(code *)0x10456032/*ROM*/)(param_2);
  param_3[3] = uVar1;
  uVar1 = (*(code *)0x1045603a/*ROM*/)(param_2);
  param_3[4] = uVar1;
  uVar1 = (*(code *)0x10456042/*ROM*/)(param_2);
  param_3[5] = uVar1;
  uVar1 = (*(code *)0x1045604c/*ROM*/)(param_2);
  param_3[6] = uVar1;
  uVar1 = (*(code *)0x10456056/*ROM*/)(param_2);
  param_3[7] = uVar1;
  uVar1 = (*(code *)0x10456060/*ROM*/)(param_2);
  param_3[8] = uVar1;
  uVar1 = (*(code *)0x1045606a/*ROM*/)(param_2);
  param_3[9] = uVar1;
  return;
}
