/* @k10d call_kernel_service_at_0x1000d3ce @ 0x1000fe60
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_kernel_service_at_0x1000d3ce(void)

{
  (*(code *)0x1000d3ce/*ROM*/)();
  return 0;
}
