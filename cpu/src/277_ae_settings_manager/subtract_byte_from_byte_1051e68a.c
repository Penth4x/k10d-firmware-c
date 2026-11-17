/* @k10d subtract_byte_from_byte_1051e68a @ 0x1051e68a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void subtract_byte_from_byte_1051e68a(int param_1)

{
  if (*(byte *)(param_1 + 3) <= *(byte *)(param_1 + 5)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) - *(byte *)(param_1 + 3);
  }
  return;
}
