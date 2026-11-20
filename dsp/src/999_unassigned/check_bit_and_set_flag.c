/* @k10d check_bit_and_set_flag @ 0x000e1d7c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Tests bit 7 of DAT_0003c127 and conditionally sets DAT_0003c122 to 0x11 based on
 *   results from subtract_popcount.
 * summary:
 *   The function checks if bit 7 of DAT_0003c127 is set. If so, it calls
 *   empty_stub_000e1dd8, set_two_byte_state_pair_000d5828, and
 *   fill_buffer_with_repeated_byte with arguments derived from DAT_0003c100. It then calls
 *   subtract_popcount twice with different parameters (DAT_0003c100 >> 3 and DAT_0003c10f &
 *   7). If either call returns non-zero, DAT_0003c122 is set to 0x11. Finally, FUN_000e1dda
 *   is called and DAT_0003c122 is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t check_bit_and_set_flag(void)

{
  int iVar1;
  
  if ((DAT_0003c127 & 0x80) != 0) {
    empty_stub_000e1dd8();
    set_two_byte_state_pair_000d5828();
    fill_buffer_with_repeated_byte((void *)&DAT_0003c100,0x20);
    iVar1 = subtract_popcount(DAT_0003c100 >> 3,2);
    if ((iVar1 != 0) || (iVar1 = subtract_popcount(DAT_0003c10f & 7,2), iVar1 != 0)) {
      DAT_0003c122 = 0x11;
    }
    FUN_000e1dda();
  }
  return DAT_0003c122;
}
