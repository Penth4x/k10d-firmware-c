/* @k10d clear_byte_at_offset_0x1d @ 0x104bea5c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 225_ae_settings_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_0x1d(int param_1)

{
  *(uint8_t *)(param_1 + 0x1d) = 0;
  return;
}
