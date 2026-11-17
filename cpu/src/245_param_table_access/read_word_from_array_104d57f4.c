/* @k10d read_word_from_array_104d57f4 @ 0x104d57f4
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_word_from_array_104d57f4(int param_1,int param_2)

{
  return *(uint32_t *)(param_1 + param_2 * 4);
}
