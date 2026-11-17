/* @k10d store_three_words_at_offset_0x14 @ 0x1051b6a4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_three_words_at_offset_0x14(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  *(uint32_t *)(param_1 + 0x14) = param_2;
  *(uint32_t *)(param_1 + 0x18) = param_3;
  *(uint32_t *)(param_1 + 0x1c) = param_4;
  return;
}
