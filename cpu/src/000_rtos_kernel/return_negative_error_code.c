/* @k10d return_negative_error_code @ 0x1000d1f4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns the constant 0xffffffdf (-33) as a kernel service error code.
 * summary:
 *   The function contains no logic, memory access, or calls; it simply returns the
 *   immediate value 0xffffffdf. In the context of the rtos_kernel module, this likely
 *   represents a specific error status or return code for a kernel service, but the
 *   specific meaning of -33 cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t return_negative_error_code(void)

{
  return E_NOMEM;
}
