/* @k10d set_ram_flag_40030001 @ 0x10453466
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_ram_flag_40030001(uint32_t param_1,int param_2)

{
  bRam40030001 = param_2 != 0;
  return;
}
