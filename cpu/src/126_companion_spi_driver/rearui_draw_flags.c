/* @k10d rearui_draw_flags @ 0x1044b37c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed read_9bit_field_from_param)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Clears DAT_00000300 and returns the lower 9 bits of a ushort at offset 0x32 of a
 *   pointer stored at param_1+8.
 * summary:
 *   The function writes 0 to the global DAT_00000300, then dereferences the pointer at
 *   param_1+8 and reads the 16-bit value at offset 0x32. It masks this value with 0x1ff to
 *   extract a 9-bit field and returns it. No callees are invoked, and the specific hardware
 *   or subsystem role of the data structure is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort rearui_draw_flags(void *param_1)

{
  _DAT_00000300 = 0;
  return *(ushort *)(*(int *)((int)param_1 + 8) + 0x32) & 0x1ff;
}
