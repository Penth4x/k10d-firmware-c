/* @k10d set_object_flag_bits_0x110 @ 0x10454cc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_bits_0x110(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(*param_1 + 0x110) & 0x3eff;
  uVar2 = uVar1;
  if (param_3 == 0) {
    uVar2 = uVar1 | 0x8000;
  }
  if (param_2 != 0) {
    uVar2 = uVar1 | 0x4000;
  }
  *(ushort *)(*param_1 + 0x110) = uVar2;
  return;
}
