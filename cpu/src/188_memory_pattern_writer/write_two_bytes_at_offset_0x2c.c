/* @k10d write_two_bytes_at_offset_0x2c @ 0x1048ceec
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 188_memory_pattern_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_bytes_at_offset_0x2c(int param_1,uint16_t param_2)

{
  *(uint16_t *)(param_1 + 0x2c) = param_2;
  return;
}
