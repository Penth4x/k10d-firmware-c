/* @k10d write_two_nibble_values @ 0x000dad5a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Writes the low and high nibbles of DAT_0003c216 to DAT_0003c217, calling
 *   wait_for_two_flags_and_clear_bit after each write.
 * summary:
 *   The function copies the full byte value of DAT_0003c216 into DAT_0003c217 and calls
 *   wait_for_two_flags_and_clear_bit. It then shifts DAT_0003c216 right by 4 bits,
 *   truncates to a byte, stores the result in DAT_0003c217, and calls
 *   wait_for_two_flags_and_clear_bit again. The role of wait_for_two_flags_and_clear_bit
 *   and the DAT globals is unknown from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_nibble_values(void)

{
  DAT_0003c217 = DAT_0003c216;
  wait_for_two_flags_and_clear_bit();
  DAT_0003c217 = (byte)((int)(uint)DAT_0003c216 >> 4);
  wait_for_two_flags_and_clear_bit();
  return;
}
