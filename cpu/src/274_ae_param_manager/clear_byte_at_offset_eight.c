/* @k10d clear_byte_at_offset_eight @ 0x10516b20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_eight(int param_1)

{
  *(uint8_t *)(param_1 + 8) = 0;
  return;
}
