/* @k10d call_kernel_with_short_id @ 0x10459d74
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Passes the 16-bit value at the start of param_1 to the kernel entry point
 *   allocate_kernel_object_10010fe0 with a second argument of -1.
 * summary:
 *   This is a one-call wrapper in the rtos_wrappers_and_heap module. It loads the first two
 *   bytes of param_1 as a signed short and forwards it to allocate_kernel_object_10010fe0,
 *   which is likely a kernel dispatch or system call entry. The second argument is
 *   hardcoded to 0xffffffff (-1). The function returns void.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

void call_kernel_with_short_id(uint32_t *short_id_ptr)

{
  __trap_allocate_kernel_object_10010fe0((int)(short)*short_id_ptr,0xffffffff);
  return;
}
