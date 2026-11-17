/* @k10d update_status_word_bits_1043c816 @ 0x1043c816
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_word_bits_1043c816(void *param_1,ushort param_2,ushort param_3)

{
  **(ushort **)((int)param_1 + 0x18) =
       **(ushort **)((int)param_1 + 0x18) & ((param_3 | 4) ^ 0xffff) | (param_2 | 4) & (param_3 | 4)
  ;
  return;
}
