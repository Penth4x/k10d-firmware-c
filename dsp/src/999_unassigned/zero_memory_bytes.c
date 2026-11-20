/* @k10d zero_memory_bytes @ 0x000ce640
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes zero to param_1 consecutive bytes starting at param_2.
 * summary:
 *   A simple loop that stores 0 into each byte of the buffer pointed to by param_2,
 *   decrementing param_1 until it reaches zero. No callees are invoked and no other side
 *   effects are visible. The function is called from two other routines, likely to clear a
 *   buffer or structure before use.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_memory_bytes(int param_1,uint8_t *param_2)

{
  do {
    *param_2 = 0;
    param_1 = param_1 + -1;
    param_2 = param_2 + 1;
  } while (param_1 != 0);
  return;
}
