/* @k10d decrement_byte_at_offset_5_1051ea9e @ 0x1051ea9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void decrement_byte_at_offset_5_1051ea9e(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
  }
  return;
}
