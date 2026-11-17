/* @k10d pop_next_line_from_buffer @ 0x104b5ea6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 218_config_parser (unit names are model-proposed)
 * purpose:
 *   Decrement a line counter and return the next line pointer from a buffer, or free the
 *   buffer when empty.
 * summary:
 *   Reads a counter at offset 0x1f0 of the object pointed to by param_1. If non-zero, it
 *   decrements the counter and copies the pointer at offset 0x1e0 + (counter-1)*4 into
 *   offset 0x1e0, effectively popping the next entry from a stack-like array. If the
 *   counter is zero, it calls cmd_error_report with the pointer at offset 4 and size 0x90,
 *   likely freeing or resetting the buffer. Returns true if a line was popped, false
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool pop_next_line_from_buffer(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1f0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x1f0) = iVar1 + -1;
    *(uint32_t *)(param_1 + 0x1e0) = *(uint32_t *)(param_1 + 500 + (iVar1 + -1) * 4);
  }
  else {
    cmd_error_report((void *)(*(uint32_t *)(param_1 + 4)),0x90);
  }
  return iVar1 != 0;
}
