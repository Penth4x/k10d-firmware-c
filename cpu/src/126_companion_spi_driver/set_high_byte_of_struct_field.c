/* @k10d set_high_byte_of_struct_field @ 0x1044b13a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_high_byte_of_struct_field(void *param_1,short param_2)

{
  _DAT_00000300 = 0;
  *(short *)(*(int *)((int)param_1 + 8) + 0x2c) =
       (short)CONCAT21(param_2,(char)*(uint16_t *)(*(int *)((int)param_1 + 8) + 0x2c));
  return;
}
