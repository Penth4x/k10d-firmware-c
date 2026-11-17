/* @k10d push_entry_to_ring_buffer @ 0x104b5e66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Appends a value to an 8-slot ring buffer and signals completion when full.
 * summary:
 *   Reads a count at offset 0x1f0. If less than 8, copies the value from offset 0x1e0 into
 *   the array at offset 500 (0x1f4) indexed by the count, increments the count, and returns
 *   true. If the count is 8 or more, calls cmd_error_report with the pointer at offset 4
 *   and argument 0x90, then returns false. The structure appears to be a fixed-size queue
 *   or buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool push_entry_to_ring_buffer(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1f0);
  if (uVar1 < 8) {
    *(uint32_t *)(param_1 + 500 + uVar1 * 4) = *(uint32_t *)(param_1 + 0x1e0);
    *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
  }
  else {
    cmd_error_report((void *)(*(uint32_t *)(param_1 + 4)),0x90);
  }
  return uVar1 < 8;
}
