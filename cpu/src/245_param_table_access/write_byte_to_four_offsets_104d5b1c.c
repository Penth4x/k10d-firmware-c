/* @k10d write_byte_to_four_offsets_104d5b1c @ 0x104d5b1c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_four_offsets_104d5b1c(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x10) = param_2;
  *(uint8_t *)(param_1 + 0x11) = param_2;
  *(uint8_t *)(param_1 + 0x12) = param_2;
  *(uint8_t *)(param_1 + 0x13) = param_2;
  return;
}
