/* @k10d set_bit5_in_word_at_offset_0x10 @ 0x1045789e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit5_in_word_at_offset_0x10(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = **(ushort **)(param_1 + 0x10) & 0x80cf;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x20;
  }
  **(ushort **)(param_1 + 0x10) = uVar1;
  return;
}
