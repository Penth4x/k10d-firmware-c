/* @k10d read_second_word_from_struct @ 0x104b4308
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint16_t read_second_word_from_struct(void *param_1)

{
  return *(uint16_t *)((int)param_1 + 2);
}
