/* @k10d write_masked_word_to_object_offset_10455672 @ 0x10455672
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_word_to_object_offset_10455672(int *param_1,ushort param_2)

{
  *(ushort *)(*param_1 + 0x300c) = param_2 & 0xffe;
  return;
}
