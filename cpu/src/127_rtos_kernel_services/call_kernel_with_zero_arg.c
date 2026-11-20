/* @k10d call_kernel_with_zero_arg @ 0x10459fce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Initializes a local short to zero, passes its address to a kernel wrapper, and returns
 *   the resulting value.
 * summary:
 *   The function sets a stack variable to 0, calls write_constant_to_param with the
 *   variable's address, and returns the value stored in that variable. Given the module
 *   context (rtos_wrappers_and_heap) and neighboring functions like twai_sem_obj and
 *   sig_sem_obj, this is likely a thin wrapper for a specific REALOS/ÂµITRON kernel
 *   primitive that takes a single pointer argument and returns a status or object ID.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

int call_kernel_with_zero_arg(void)

{
  uintptr_t sp;
  short sStack_6;
  
  sStack_6 = 0;
  __trap_write_constant_to_param(&sStack_6);
  return (int)sStack_6;
}
