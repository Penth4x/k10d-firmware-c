/* @k10d cpucom_registry_add @ 0x104652d8
 * name: verified (structural evidence: d313: decompile (registry[code] = ctx when < 0xff and free))
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Store a context in a 255-entry response registry slot if empty.
 * summary:
 *   VERIFIED: d313: decompile (registry[code] = ctx when < 0xff and free)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_registry_add(void *param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0xff) && (*(int *)((int)param_1 + param_2 * 4) == 0)) {
    *(void **)((int)param_1 + param_2 * 4) = param_3;
    uVar1 = 1;
  }
  return uVar1;
}
