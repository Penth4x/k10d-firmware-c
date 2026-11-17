/* @k10d store_four_words_at_struct_offsets @ 0x1048ced4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 188_memory_pattern_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_four_words_at_struct_offsets(int param_1,uint16_t param_2,uint16_t param_3,uint16_t param_4,
                 uint16_t param_5)

{
  *(uint16_t *)(param_1 + 0x26) = param_2;
  *(uint16_t *)(param_1 + 0x28) = param_3;
  *(uint16_t *)(param_1 + 0x2c) = param_4;
  *(uint16_t *)(param_1 + 0x24) = param_5;
  return;
}
