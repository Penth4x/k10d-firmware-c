/* @k10d dispatch_kernel_service_10010b10 @ 0x10010b10
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Forwards a kernel service call to a handler at 0x1000d486 with a fixed service ID.
 * summary:
 *   The function takes a single parameter and immediately calls an indirect function
 *   pointer at 0x1000d486, passing the constant 0x6a0036c8 as the first argument and the
 *   input parameter as the second. It returns 0 unconditionally. Given the module context
 *   (rtos_kernel) and the pattern of passing a specific ID (0x6a0036c8) to a dispatcher,
 *   this appears to be a wrapper for a specific µITRON/REALOS kernel service, though the
 *   exact service is not identifiable without the callee's definition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_kernel_service_10010b10(void *param_1)

{
  (*(code *)0x1000d486/*ROM*/)(0x6a0036c8,param_1);
  return 0;
}
