/* @k10d set_flag_bit_in_word @ 0x104578d6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit_in_word(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = **(ushort **)(param_1 + 0x10) & 32999;
  if (param_2 != 0) {
    uVar1 = uVar1 | 8;
  }
  **(ushort **)(param_1 + 0x10) = uVar1;
  return;
}
