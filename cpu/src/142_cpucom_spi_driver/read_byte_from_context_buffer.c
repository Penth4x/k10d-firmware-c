/* @k10d read_byte_from_context_buffer @ 0x10464ef6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte read_byte_from_context_buffer(void *param_1,int param_2,byte param_3)

{
  free_cpucom_context(param_1);
  if (*(int *)((int)param_1 + 0x10) == 0) {
    param_3 = 0;
  }
  else {
    param_3 = *(byte *)(*(int *)((int)param_1 + 0x10) + param_2) & param_3;
  }
  free_cpucom_context_ref(param_1);
  return param_3;
}
