/* @k10d write_masked_word_to_object_offset_1045562e @ 0x1045562e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_word_to_object_offset_1045562e(int *param_1,ushort param_2)

{
  *(ushort *)(*param_1 + 0x300a) = param_2 & 0x1fff;
  return;
}
