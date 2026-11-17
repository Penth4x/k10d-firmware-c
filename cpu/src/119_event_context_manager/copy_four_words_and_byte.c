/* @k10d copy_four_words_and_byte @ 0x10433108
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_and_byte(uint32_t *param_1,uint32_t *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(uint8_t *)(param_1 + 3) = *(uint8_t *)(param_2 + 3);
  return;
}
