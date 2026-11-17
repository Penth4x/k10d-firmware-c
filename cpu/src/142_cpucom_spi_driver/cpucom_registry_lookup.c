/* @k10d cpucom_registry_lookup @ 0x1046534e
 * name: verified (structural evidence: d313: decompile; used by the response dispatcher 0x104652f4 with msg[0])
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Return the context registered for a reply code (0 if none).
 * summary:
 *   VERIFIED: d313: decompile; used by the response dispatcher 0x104652f4 with msg[0]
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cpucom_registry_lookup(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_2 < 0xff) && (iVar2 = *(int *)((int)param_1 + param_2 * 4), iVar2 != 0)) {
    iVar1 = iVar2;
  }
  return iVar1;
}
