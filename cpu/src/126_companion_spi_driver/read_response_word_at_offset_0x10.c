/* @k10d read_response_word_at_offset_0x10 @ 0x1044ab10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t read_response_word_at_offset_0x10(void *param_1)

{
  _DAT_00000300 = 0;
  return *(uint32_t *)(*(int *)((int)param_1 + 8) + 0x10);
}
