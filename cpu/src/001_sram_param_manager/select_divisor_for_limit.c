/* @k10d select_divisor_for_limit @ 0x100f15dc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_divisor_for_limit(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (25000 < param_1) {
    param_1 = 25000;
  }
  iVar3 = 0;
  do {
    iVar2 = 2 << ((byte)iVar3 & 0xf);
    if ((int)(0xc15c / iVar2 + (uint)(0xc15c % iVar2 != 0)) <= param_1) {
      uVar1 = 1 << ((byte)iVar3 & 0xf) & 0xff;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  set_high_byte_of_word(uVar1);
  return;
}
