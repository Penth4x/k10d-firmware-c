/* @k10d check_buffer_length_within_limit @ 0x1040f6d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool check_buffer_length_within_limit(int *param_1)

{
  return (uint)(param_1[1] + *param_1) <= (uint)param_1[2];
}
