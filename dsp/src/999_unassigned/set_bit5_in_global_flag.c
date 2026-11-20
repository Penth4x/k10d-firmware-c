/* @k10d set_bit5_in_global_flag @ 0x000ed8f4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 5 (0x20) of the global variable at 0x0000000a.
 * summary:
 *   The function performs a single read-modify-write operation on the global variable
 *   DAT_0000000a, ORing it with the constant 0x20 to set bit 5. It has no other side
 *   effects, no callees, and no return value. The role of DAT_0000000a is not determinable
 *   from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit5_in_global_flag(void)

{
  DAT_0000000a = DAT_0000000a | 0x20;
  return;
}
