/* @k10d store_two_words_at_offset @ 0x1051b69a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_words_at_offset(int param_1,uint32_t param_2,uint32_t param_3)

{
  *(uint32_t *)(param_1 + 4) = param_2;
  *(uint32_t *)(param_1 + 8) = param_3;
  return;
}
