/* @k10d free_cpucom_context_ref @ 0x10465290
 * name: model (proposed by the local model from the decompile, confidence 0.62)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Releases the object pointer stored at offset 0x40 of a CPUCOM transaction context if it
 *   is non-null.
 * summary:
 *   Reads the pointer at param_1+0x40 and, if non-zero, passes it to
 *   check_kernel_call_success_10459d88. It is called from cpucom_ctx_resubmit and several
 *   virtual slots of cls_105a7994 in the cpucom_spi_driver module, consistent with
 *   releasing a held reference or sub-object during context teardown or re-submission. The
 *   callee check_kernel_call_success_10459d88 is not yet named, so the exact deallocation
 *   semantics are inferred from the null-check-and-call pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_cpucom_context_ref(void *param_1)

{
  if (*(uint32_t **)((int)param_1 + 0x40) != (uint32_t *)0x0) {
    check_kernel_call_success_10459d88(*(uint32_t **)((int)param_1 + 0x40));
  }
  return;
}
