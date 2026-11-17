/* @k10d copy_ten_values_via_function_pointers_10502f70 @ 0x10502f70
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_ten_values_via_function_pointers_10502f70(uint32_t param_1,int param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  
  param_2 = param_2 + 0xc;
  uVar1 = (*(code *)0x10455fae/*ROM*/)(param_2);
  *param_3 = uVar1;
  uVar1 = (*(code *)0x10455fb8/*ROM*/)(param_2);
  param_3[1] = uVar1;
  uVar1 = (*(code *)0x10455fc2/*ROM*/)(param_2);
  param_3[2] = uVar1;
  uVar1 = (*(code *)0x10455fcc/*ROM*/)(param_2);
  param_3[3] = uVar1;
  uVar1 = (*(code *)0x10455fd6/*ROM*/)(param_2);
  param_3[4] = uVar1;
  uVar1 = (*(code *)0x10455fe0/*ROM*/)(param_2);
  param_3[5] = uVar1;
  uVar1 = (*(code *)0x10455fea/*ROM*/)(param_2);
  param_3[6] = uVar1;
  uVar1 = (*(code *)0x10455ff4/*ROM*/)(param_2);
  param_3[7] = uVar1;
  uVar1 = (*(code *)0x10455ffe/*ROM*/)(param_2);
  param_3[8] = uVar1;
  uVar1 = (*(code *)0x10456008/*ROM*/)(param_2);
  param_3[9] = uVar1;
  return;
}
