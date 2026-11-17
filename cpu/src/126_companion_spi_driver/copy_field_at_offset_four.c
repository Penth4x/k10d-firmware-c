/* @k10d copy_field_at_offset_four @ 0x10435b68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_field_at_offset_four(int param_1,uint32_t *param_2)

{
  *param_2 = *(uint32_t *)(param_1 + 4);
  return 1;
}
