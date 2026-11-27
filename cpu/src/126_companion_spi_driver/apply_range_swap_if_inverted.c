/* @k10d apply_range_swap_if_inverted @ 0x1043ebf6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool apply_range_swap_if_inverted(void *param_1,uint32_t param_2,int param_3,int param_4)

{
  if (param_4 < param_3) {
    call_helper_with_0xc00(param_1, (uint32_t)param_2);
    write_word_at_offset_0x24(param_1,(short)param_3);
    write_word_at_offset_0x28(param_1,(short)param_4);
    call_helper_with_two_twos(param_1);
    call_helper_with_0xc000_args(param_1);
  }
  return param_4 < param_3;
}
