/* @k10d set_flag_and_copy_field @ 0x1039f28a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 043_io_gate_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_copy_field(int param_1)

{
  *(uint8_t *)(param_1 + 0x40) = 1;
  *(uint32_t *)(param_1 + 0x3c) = *(uint32_t *)(param_1 + 0x60);
  return;
}
