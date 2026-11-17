/* @k10d write_constant_to_param @ 0x1000e9b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes the 16-bit constant from DAT_6a003758 into the memory location pointed to by
 *   param_1.
 * summary:
 *   The function stores the value of the global variable DAT_6a003758 into the address
 *   provided in param_1 and returns 0. It is located in the rtos_kernel module, but the
 *   specific role of DAT_6a003758 is not determinable from the provided pseudocode and
 *   brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t write_constant_to_param(uint16_t *param_1)

{
  *param_1 = _DAT_6a003758;
  return 0;
}
