/* @k10d return_kernel_object_id_104592e2 @ 0x104592e2
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the value stored at DAT_10000020, likely a kernel object identifier.
 * summary:
 *   The function simply loads and returns the 32-bit value at address 0x10000020. Given the
 *   source module is 'rtos_wrappers_and_heap' and the brief notes that one-call wrappers
 *   put a kernel object id in r4, this likely returns a pre-configured kernel object ID
 *   (such as a task, mailbox, or semaphore ID) for use by the caller. The specific object
 *   type cannot be determined from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_kernel_object_id_104592e2(uint32_t param_x0)

{
  return DAT_10000020/*ROM*/;
}
