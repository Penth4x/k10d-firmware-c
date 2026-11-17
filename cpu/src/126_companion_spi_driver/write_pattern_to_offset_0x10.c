/* @k10d write_pattern_to_offset_0x10 @ 0x104358f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_pattern_to_offset_0x10(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x5aa5a55a;
  }
  *(uint32_t *)(param_1 + 0x10) = uVar1;
  return;
}
