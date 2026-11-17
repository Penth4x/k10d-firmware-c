/* @k10d write_four_words_to_param @ 0x104356a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_words_to_param(uint32_t param_1,uint *param_2)

{
  write_short_to_array_offset(param_1,0,*param_2 & 0xffff);
  write_short_to_array_offset(param_1,1,param_2[1] & 0xffff);
  write_short_to_array_offset(param_1,2,param_2[2] & 0xffff);
  write_short_to_array_offset(param_1,3,param_2[3] & 0xffff);
  return;
}
