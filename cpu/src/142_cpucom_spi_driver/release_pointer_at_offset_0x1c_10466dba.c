/* @k10d release_pointer_at_offset_0x1c_10466dba @ 0x10466dba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_0x1c_10466dba(int param_1)

{
  test_flag_clear(*(void **)(param_1 + 0x1c));
  return;
}
