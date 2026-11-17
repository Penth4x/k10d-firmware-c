/* @k10d write_two_masked_words_to_struct @ 0x10457c1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_masked_words_to_struct(int param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x34) = param_2 & 0x3f;
  *(ushort *)(*(int *)(param_1 + 0x10) + 0x36) = param_3 & 0x3f;
  return;
}
