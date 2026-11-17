/* @k10d clear_byte_at_offset_five_1051ec12 @ 0x1051ec12
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_byte_at_offset_five_1051ec12(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(uint8_t *)(param_1 + 5) = 0;
  }
  return;
}
