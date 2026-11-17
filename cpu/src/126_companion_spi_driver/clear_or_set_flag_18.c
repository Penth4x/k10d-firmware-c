/* @k10d clear_or_set_flag_18 @ 0x1043c692
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_or_set_flag_18(void *param_1,int param_2)

{
  if (param_2 == 0) {
    **(ushort **)((int)param_1 + 0x18) = **(ushort **)((int)param_1 + 0x18) & 0xfff3;
  }
  else {
    update_status_word_bits_1043c816(param_1,8,8);
  }
  return;
}
