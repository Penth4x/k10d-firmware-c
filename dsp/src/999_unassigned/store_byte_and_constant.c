/* @k10d store_byte_and_constant @ 0x000f8238
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Stores the input byte into DAT_000000c8 and writes the constant 0x1813 to
 *   _DAT_000000ce.
 * summary:
 *   The function takes a single byte parameter and writes it to the global variable
 *   DAT_000000c8. It then immediately writes the 16-bit constant 0x1813 to the adjacent
 *   global variable _DAT_000000ce. No other operations, memory accesses, or function calls
 *   are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_byte_and_constant(uint8_t param_1)

{
  DAT_000000c8 = param_1;
  _DAT_000000ce = 0x1813;
  return;
}
