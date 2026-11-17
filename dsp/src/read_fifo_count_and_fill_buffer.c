/* @k10d read_fifo_count_and_fill_buffer @ 0x000d0b6a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Waits for a FIFO-ready flag, clears it, computes a 10-bit count, and writes that count
 *   into successive buffer elements.
 * summary:
 *   The function loops param_1 times. Each iteration spins until bit 6 of DAT_00000079 is
 *   set, then clears that bit. It reads a 10-bit value from DAT_0000007e (inverted and
 *   masked), subtracts the value at DAT_00003cfa8, clamps the result to zero, and stores it
 *   as a short into the buffer pointed to by param_2. It returns the updated buffer
 *   pointer. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t * read_fifo_count_and_fill_buffer(int param_1,uint16_t *param_2)

{
  int iVar1;
  
  do {
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    DAT_00000079 = DAT_00000079 & 0xbf;
    iVar1 = ((_DAT_0000007e ^ 0xffffffff) & 0x3ff) - (uint)_DAT_0003cfa8;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    *param_2 = (short)iVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return param_2;
}
