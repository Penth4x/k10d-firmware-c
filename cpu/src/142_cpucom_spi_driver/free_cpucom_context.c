/* @k10d free_cpucom_context @ 0x1046527a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases the CPUCOM transaction context pointer stored at offset 0x40 of the given
 *   object.
 * summary:
 *   Checks if the pointer at param_1+0x40 is non-NULL and, if so, passes it to
 *   call_kernel_with_short_id. Given the module is cpucom_spi_driver and the caller
 *   cpucom_ctx_resubmit deals with transaction contexts, this function likely frees or
 *   invalidates a CPUCOM transaction context. The callee call_kernel_with_short_id is not
 *   named, but its role as a deallocator or cleanup routine is implied by the pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_cpucom_context(void *param_1)

{
  if (*(uint32_t **)((int)param_1 + 0x40) != (uint32_t *)0x0) {
    call_kernel_with_short_id(*(uint32_t **)((int)param_1 + 0x40));
  }
  return;
}
