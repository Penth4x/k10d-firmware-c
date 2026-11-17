/* @k10d read_two_byte_table_entry_104284cc @ 0x104284cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 107_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_two_byte_table_entry_104284cc(int param_1,int param_2,int param_3)

{
  return *(uint16_t *)(param_1 + 0x38 + param_3 * 2 + param_2 * 8);
}
