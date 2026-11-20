/* @k10d read_two_byte_table_entry @ 0x1045b5f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_two_byte_table_entry(uint32_t param_1,int param_2)

{
  return *(uint16_t *)(&DAT_105a48b8/*ROM*/ + param_2 * 2);
}
