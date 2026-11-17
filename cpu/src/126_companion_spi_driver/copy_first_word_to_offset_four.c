/* @k10d copy_first_word_to_offset_four @ 0x10435b60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_first_word_to_offset_four(int param_1,uint32_t *param_2)

{
  *(uint32_t *)(param_1 + 4) = *param_2;
  return;
}
