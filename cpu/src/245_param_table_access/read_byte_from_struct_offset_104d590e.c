/* @k10d read_byte_from_struct_offset_104d590e @ 0x104d590e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_struct_offset_104d590e(int param_1,int param_2)

{
  return *(uint8_t *)(param_1 + 0xc + param_2);
}
