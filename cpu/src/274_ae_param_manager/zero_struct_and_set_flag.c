/* @k10d zero_struct_and_set_flag @ 0x1051b668
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_struct_and_set_flag(int param_1)

{
  *(uint32_t *)(param_1 + 4) = 0;
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  *(uint32_t *)(param_1 + 0x14) = 0;
  *(uint32_t *)(param_1 + 0x18) = 0;
  *(uint32_t *)(param_1 + 0x1c) = 0;
  *(uint8_t *)(param_1 + 0x20) = 1;
  *(uint8_t *)(param_1 + 0x21) = 0;
  *(uint32_t *)(param_1 + 0x24) = 0;
  return;
}
