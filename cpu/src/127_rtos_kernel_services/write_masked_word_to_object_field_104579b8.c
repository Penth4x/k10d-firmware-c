/* @k10d write_masked_word_to_object_field_104579b8 @ 0x104579b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_word_to_object_field_104579b8(int param_1,ushort param_2)

{
  *(ushort *)(*(int *)(param_1 + 0x10) + 0xc) = param_2 & 0xfff;
  return;
}
