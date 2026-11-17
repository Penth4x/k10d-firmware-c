/* @k10d update_status_bit_field @ 0x10464e98
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Updates a specific bit field in a status word at an offset within a buffer, guarded by
 *   lock/unlock calls.
 * summary:
 *   The function calls free_cpucom_context (likely a lock) on the object, reads an offset
 *   from the object at +0x10, and if non-zero, performs a bit-field update on the byte at
 *   param_2 + offset using param_3 (value) and param_4 (mask). It then calls
 *   free_cpucom_context_ref (likely an unlock). The operation is a standard read-modify-
 *   write for setting/clearing bits in a status or control register.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_bit_field(void *param_1,int param_2,byte param_3,byte param_4)

{
  int iVar1;
  
  free_cpucom_context(param_1);
  iVar1 = *(int *)((int)param_1 + 0x10);
  if (iVar1 != 0) {
    *(byte *)(param_2 + iVar1) = *(byte *)(param_2 + iVar1) & (param_4 ^ 0xff) | param_3 & param_4;
  }
  free_cpucom_context_ref(param_1);
  return;
}
