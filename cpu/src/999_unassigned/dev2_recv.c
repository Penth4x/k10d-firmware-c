/* @k10d dev2_recv @ 0x1043fcdc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_byte_from_object_offset_0x34)
 * purpose:
 *   Returns the byte stored at offset 0x34 of the object pointed to by param_1.
 * summary:
 *   The function takes a single pointer argument and dereferences it twice to fetch an
 *   8-bit value from the memory location at offset 0x34 relative to the object base. It
 *   performs no other operations, side effects, or calls. The specific meaning of the data
 *   at this offset is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dev2_recv(int param_1)

{
  return **(uint8_t **)(param_1 + 0x34);
}
