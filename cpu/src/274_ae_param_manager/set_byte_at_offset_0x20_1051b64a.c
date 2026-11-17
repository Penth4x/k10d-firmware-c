/* @k10d set_byte_at_offset_0x20_1051b64a @ 0x1051b64a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_byte_at_offset_0x20_1051b64a(int param_1,uint8_t param_2)

{
  *(uint8_t *)(param_1 + 0x20) = param_2;
  return;
}
