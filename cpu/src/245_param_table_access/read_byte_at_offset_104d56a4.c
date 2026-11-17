/* @k10d read_byte_at_offset_104d56a4 @ 0x104d56a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_at_offset_104d56a4(int param_1,int param_2)

{
  return *(uint8_t *)(param_1 + 0x7c + param_2);
}
