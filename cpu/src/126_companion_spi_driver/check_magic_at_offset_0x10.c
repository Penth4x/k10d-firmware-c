/* @k10d check_magic_at_offset_0x10 @ 0x10435908
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_magic_at_offset_0x10(void *param_1)

{
  return *(int *)((int)param_1 + 0x10) == 0x5aa5a55a;
}
