/* @k10d write_byte_to_object_field_10457b80 @ 0x10457b80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_object_field_10457b80(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x22) = param_2 & 0xff;
  return;
}
