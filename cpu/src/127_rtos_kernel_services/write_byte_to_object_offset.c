/* @k10d write_byte_to_object_offset @ 0x10457bb4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_object_offset(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x26) = param_2 & 0xff;
  return;
}
