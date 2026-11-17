/* @k10d write_masked_word_to_heap_offset @ 0x104576da
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_masked_word_to_heap_offset(int param_1,uint param_2)

{
  *(uint *)(*(int *)(param_1 + 0x10) + 0x1024) = param_2 & 0x3ffffff0;
  return;
}
