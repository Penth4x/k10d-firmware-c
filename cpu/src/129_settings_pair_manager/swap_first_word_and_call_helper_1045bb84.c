/* @k10d swap_first_word_and_call_helper_1045bb84 @ 0x1045bb84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_first_word_and_call_helper_1045bb84(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t *param_5)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  call_helper_and_return_param_1045bb72(param_2);
  *param_5 = uVar1;
  return;
}
