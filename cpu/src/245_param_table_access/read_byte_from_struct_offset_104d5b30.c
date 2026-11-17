/* @k10d read_byte_from_struct_offset_104d5b30 @ 0x104d5b30
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_struct_offset_104d5b30(int param_1,int param_2)

{
  return *(uint8_t *)(param_1 + 0x10 + param_2);
}
