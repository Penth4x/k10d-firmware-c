/* @k10d set_flag_bit3_in_object_field @ 0x104549f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit3_in_object_field(int *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*param_1 + 0xc) & 0x87;
  if (param_2 != 0) {
    uVar1 = uVar1 | 8;
  }
  *(ushort *)(*param_1 + 0xc) = uVar1;
  return;
}
