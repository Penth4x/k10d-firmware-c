/* @k10d merge_bits_into_mmio_word @ 0x10452608
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void merge_bits_into_mmio_word(uint32_t param_1,ushort param_2)

{
  _DAT_40030402 = _DAT_40030402 & 0xbc00 | param_2 & 0xbc;
  return;
}
