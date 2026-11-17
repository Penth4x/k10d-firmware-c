/* @k10d return_error_code @ 0x1000d1fe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Returns the constant 0xffffffef (decimal -17) as a kernel service error code.
 * summary:
 *   The function contains no logic, memory access, or calls; it simply returns a fixed
 *   32-bit value. In the context of the rtos_kernel module, this likely serves as a stub or
 *   error handler returning a specific failure code (e.g., E_NOT_IMPLEMENTED or similar
 *   µITRON error).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "uitron.h"

uint32_t return_error_code(void)

{
  return E_PAR;
}
