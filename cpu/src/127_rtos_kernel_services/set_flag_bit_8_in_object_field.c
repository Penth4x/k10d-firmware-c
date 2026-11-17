/* @k10d set_flag_bit_8_in_object_field @ 0x104548fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit_8_in_object_field(int *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*param_1 + 4) & 0xfee0;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x100;
  }
  *(ushort *)(*param_1 + 4) = uVar1;
  return;
}
