/* @k10d cpucom_register_cmd @ 0x104651ae
 * name: verified (structural evidence: d313: settings manager init calls it for the 25 letter codes; registry snapshot (0x80048318) shows the context under each)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Register this context in its CPUCOM response registry under one reply code (via
 *   0x104652d8).
 * summary:
 *   VERIFIED: d313: settings manager init calls it for the 25 letter codes; registry
 *   snapshot (0x80048318) shows the context under each
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_register_cmd(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (*(void **)((int)param_1 + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = cpucom_registry_add(*(void **)((int)param_1 + 0x44),param_2,param_1);
  }
  return uVar1;
}
