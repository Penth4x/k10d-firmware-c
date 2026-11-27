/* @k10d loop_call_helper_52_times @ 0x10485ee4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 177_module_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void loop_call_helper_52_times(uint32_t param_1,uint param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5)

{
  store_two_word_pair((uint32_t)param_1, (uint32_t)param_2);
  if ((int)param_2 < 0x34) {
    do {
      call_single_helper_10485dd8(param_3,param_4,param_5);
      param_2 = param_2 + 1 & 0xffff;
    } while (param_2 < 0x34);
  }
  return;
}
