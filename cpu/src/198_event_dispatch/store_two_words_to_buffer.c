/* @k10d store_two_words_to_buffer @ 0x10493d98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_two_words_to_buffer(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}
