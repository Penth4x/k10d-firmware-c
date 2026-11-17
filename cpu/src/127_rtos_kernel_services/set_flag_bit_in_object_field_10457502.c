/* @k10d set_flag_bit_in_object_field_10457502 @ 0x10457502
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bit_in_object_field_10457502(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x1000) & 0x7f;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1000) = uVar1;
  return;
}
