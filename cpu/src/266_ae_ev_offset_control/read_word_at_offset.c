/* @k10d read_word_at_offset @ 0x105030a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void read_word_at_offset(uint32_t param_1,int param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x10456012/*ROM*/)(param_2 + 0xc);
  *param_3 = uVar1;
  return;
}
