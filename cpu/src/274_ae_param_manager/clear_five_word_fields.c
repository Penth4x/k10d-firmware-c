/* @k10d clear_five_word_fields @ 0x1051a020
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_five_word_fields(int param_1)

{
  *(uint32_t *)(param_1 + 0x58) = 0;
  *(uint32_t *)(param_1 + 0x5c) = 0;
  *(uint32_t *)(param_1 + 0x60) = 0;
  *(uint32_t *)(param_1 + 100) = 0;
  *(uint32_t *)(param_1 + 0x68) = 0;
  return;
}
