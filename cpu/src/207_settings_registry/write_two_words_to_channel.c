/* @k10d write_two_words_to_channel @ 0x104aa11a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_words_to_channel(uint32_t param_1,uint param_2,uint param_3)

{
  set_bitfield_in_table_entry(param_1,6,(int)param_2 >> 8 & 0xff);
  set_bitfield_in_table_entry(param_1,7,param_2 & 0xff);
  set_bitfield_in_table_entry(param_1,8,(int)param_3 >> 8 & 0xff);
  set_bitfield_in_table_entry(param_1,9,param_3 & 0xff);
  return;
}
