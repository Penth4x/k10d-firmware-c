/* @k10d alloc_and_init_0x90_block @ 0x10459c30
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_and_init_0x90_block(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x90), param_1 != (void *)0x0)) {
    *(uint32_t *)((int)param_1 + 0x8c) = 0;
    cpucom_txn_table_setup(param_1);
  }
  return (int)param_1;
}
