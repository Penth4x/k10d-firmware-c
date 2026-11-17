/* @k10d set_object_flag_bit2_10454a2c @ 0x10454a2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_bit2_10454a2c(int *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*param_1 + 0xc) & 0x8b;
  if (param_2 != 0) {
    uVar1 = uVar1 | 4;
  }
  *(ushort *)(*param_1 + 0xc) = uVar1;
  return;
}
