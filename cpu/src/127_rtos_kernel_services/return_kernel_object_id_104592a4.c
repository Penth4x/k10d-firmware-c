/* @k10d return_kernel_object_id_104592a4 @ 0x104592a4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Returns the value stored at DAT_10000014 as a kernel object identifier.
 * summary:
 *   The function loads and returns the 32-bit value at DAT_10000014. Given the module
 *   context of RTOS wrappers and the typical use of such globals for kernel object IDs
 *   (tasks, mailboxes, etc.), this likely returns a specific kernel object handle. No side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t return_kernel_object_id_104592a4(uint32_t param_x0)

{
  return DAT_10000014/*ROM*/;
}
