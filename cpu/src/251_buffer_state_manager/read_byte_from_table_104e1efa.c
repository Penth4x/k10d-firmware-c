/* @k10d read_byte_from_table_104e1efa @ 0x104e1efa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t read_byte_from_table_104e1efa(int param_1,int param_2)

{
  return **(uint8_t **)(*(int *)(param_1 + 4) + param_2 * 4);
}
