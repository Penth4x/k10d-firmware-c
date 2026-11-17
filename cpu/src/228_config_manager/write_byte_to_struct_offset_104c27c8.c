/* @k10d write_byte_to_struct_offset_104c27c8 @ 0x104c27c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 228_config_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_byte_to_struct_offset_104c27c8(int param_1,int param_2,uint8_t param_3)

{
  *(uint8_t *)(param_1 + 0x31 + param_2) = param_3;
  return;
}
