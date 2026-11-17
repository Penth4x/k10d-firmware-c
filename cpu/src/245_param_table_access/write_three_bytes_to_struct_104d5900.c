/* @k10d write_three_bytes_to_struct_104d5900 @ 0x104d5900
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_bytes_to_struct_104d5900(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0xc) = param_2;
  *(uint8_t *)(param_1 + 0xd) = param_2;
  *(uint8_t *)(param_1 + 0xe) = param_2;
  return;
}
