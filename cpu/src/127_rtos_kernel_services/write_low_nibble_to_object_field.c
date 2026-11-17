/* @k10d write_low_nibble_to_object_field @ 0x10457bce
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_low_nibble_to_object_field(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x28) = param_2 & 0xf;
  return;
}
