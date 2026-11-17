/* @k10d write_word_at_offset_0x28 @ 0x1043ed4a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_word_at_offset_0x28(void *param_1,uint16_t param_2)

{
  **(uint16_t **)((int)param_1 + 0x28) = param_2;
  return;
}
