/* @k10d read_array_element_104d544c @ 0x104d544c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 245_param_table_access (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t read_array_element_104d544c(int param_1,int param_2)

{
  return *(uint32_t *)(param_1 + param_2 * 4);
}
