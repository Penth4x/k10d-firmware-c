/* @k10d terminate_task_if_flag_set @ 0x10011834
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 000_rtos_kernel (unit names are model-proposed)
 * purpose:
 *   Checks bit 15 of a task control block field and calls a termination routine if set.
 * summary:
 *   The function takes a task ID (param_1) and indexes into a kernel data structure at
 *   offset 0x6a001c1a with a stride of 0x44. It tests bit 15 (0x8000) of the 16-bit value
 *   at that location. If the bit is set, it retrieves a pointer from offset 0x6a001bf8
 *   (same stride) and passes it to insert_into_timeout_queue_1000e780. Given the module is
 *   rtos_kernel and the stride/offsets match typical task control block layouts, this
 *   likely handles task termination or cleanup based on a status flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void terminate_task_if_flag_set(short param_1)

{
  if ((*(ushort *)(param_1 * 0x44 + 0x6a001c1a) & 0x8000) != 0) {
    insert_into_timeout_queue_1000e780(*(int *)(param_1 * 0x44 + 0x6a001bf8));
  }
  return;
}
