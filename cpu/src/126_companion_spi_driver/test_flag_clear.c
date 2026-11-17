/* @k10d test_flag_clear @ 0x104398ac
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed test_flag_bit_clear)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Returns true if the bit selected by the mask at offset 0x1c is clear in the value at
 *   offset 0x10.
 * summary:
 *   The function dereferences the pointer at param_1+0x10 and ANDs it with the byte mask at
 *   param_1+0x1c. It returns true if the result is zero, indicating the masked flag bit is
 *   not set. No callees are invoked, and the specific object layout or subsystem context is
 *   not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool test_flag_clear(void *param_1)

{
                    /* Purpose: Test flag clear. Returns true if bit in [obj+0x10] & mask [obj+0x1c]
                       is CLEAR.
                       Params: param_1 = object pointer.
                       Returns: bool. */
  return (**(byte **)((int)param_1 + 0x10) & *(byte *)((int)param_1 + 0x1c)) == 0;
}
