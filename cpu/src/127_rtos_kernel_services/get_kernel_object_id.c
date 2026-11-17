/* @k10d get_kernel_object_id @ 0x1045929a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the value stored at DAT_10000010, likely a kernel object identifier.
 * summary:
 *   The function simply loads and returns the 32-bit value at address 0x10000010. Given the
 *   source module is 'rtos_wrappers_and_heap' and the brief notes that one-call wrappers
 *   put a kernel object id in r4, this likely returns a specific RTOS object handle (such
 *   as a task, mailbox, or semaphore ID). The value is located in the ROM region,
 *   suggesting it is a static configuration or initialization constant.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_kernel_object_id(uint32_t param_x0)

{
  return DAT_10000010/*ROM*/;
}
