/* @k10d enqueue_timeout_event_1000d42e @ 0x1000d42e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Writes a timeout event descriptor (data, type, handler) into the next slot of a kernel
 *   timeout queue.
 * summary:
 *   Computes a pointer into a queue array using a global index counter (DAT_6a003758) and
 *   base (DAT_6a0018c0). Stores param_1 as the first field, 0x1f0030 as a type/flag, and
 *   task_exit_stub as a handler function pointer. This matches the µITRON/REALOS timeout
 *   queue insertion pattern described in the module context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enqueue_timeout_event_1000d42e(uint32_t param_1)

{
  uint32_t *puVar1;
  
  puVar1 = *(uint32_t **)(&DAT_6a0018c0 + (uint)_DAT_6a003758 * 4);
  *puVar1 = param_1;
  puVar1[1] = 0x1f0030;
  puVar1[2] = (uint32_t)task_exit_stub;
  return;
}
