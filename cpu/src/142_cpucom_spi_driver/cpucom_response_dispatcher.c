/* @k10d cpucom_response_dispatcher @ 0x104652f4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_cpucom_response)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Extracts a reply code from a response buffer and invokes the registered handler for
 *   that code.
 * summary:
 *   Calls cpucom_resp_get_byte0 to extract an identifier from param_2. Uses
 *   cpucom_registry_lookup to find the corresponding context object. If found, performs a
 *   virtual call to slot 14 (offset 0x74) of the context's vtable, passing the context and
 *   the response buffer. Returns the handler's result or 0 if no handler is registered.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t cpucom_response_dispatcher(void *param_1,uint8_t *param_2)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  
  iVar1 = cpucom_resp_get_byte0(param_2);
  piVar2 = (int *)cpucom_registry_lookup(param_1,iVar1);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*piVar2 + 0x74))((int)*(short *)(*piVar2 + 0x70) + (int)piVar2,param_2);
  }
  return uVar3;
}
