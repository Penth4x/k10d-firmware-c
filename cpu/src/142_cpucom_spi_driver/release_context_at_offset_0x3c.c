/* @k10d release_context_at_offset_0x3c @ 0x10465264
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the object pointer stored at offset 0x3c of the given context if it is non-null.
 * summary:
 *   Reads a pointer from offset 0x3c of param_1 and, if non-zero, passes it to
 *   check_kernel_call_success_10459d88 (likely a deallocator or release routine). The
 *   function is called from several shared virtual method slots in the cpucom_spi_driver
 *   module, suggesting it is a default cleanup/teardown step for a transaction or context
 *   object. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_context_at_offset_0x3c(void *param_1)

{
  if (*(uint32_t **)((int)param_1 + 0x3c) != (uint32_t *)0x0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x3c));
  }
  return;
}
