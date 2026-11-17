/* @k10d set_bits_in_object_field @ 0x1045754a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bits_in_object_field(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x1000) =
       *(ushort *)(*(int *)(param_1 + 0x10) + 0x1000) & 0xc001 | param_2;
  return;
}
