/* @k10d write_two_bytes_to_object_offset_10457bec @ 0x10457bec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_to_object_offset_10457bec(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x30) = param_2 & 0xff;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x32) = param_3 & 0xff;
  return;
}
