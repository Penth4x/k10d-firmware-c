/* @k10d check_and_clear_state_flags_000e6ca2 @ 0x000e6ca2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks two global flag bits and conditionally calls three helper functions before
 *   returning a status.
 * summary:
 *   The function tests bit 1 of DAT_0003c32c and bit 2 of DAT_0003c391. If both are clear,
 *   it calls write_masked_field_and_call_two_routines(6,0xf), call_d5678_with_0x14, and
 *   write_nibble_to_ram_region(0), then calls
 *   write_masked_field_and_call_two_routines(6,0). It returns 1 if the initial flags were
 *   set or if bit 3 of DAT_0003c000 is clear after the helper calls, otherwise 0. The
 *   specific roles of the DAT globals and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_clear_state_flags_000e6ca2(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((DAT_0003c32c & 2) == 0) {
    if ((DAT_0003c391 & 4) == 0) {
      write_masked_field_and_call_two_routines(6,0xf);
      call_d5678_with_0x14();
      write_nibble_to_ram_region(0);
      write_masked_field_and_call_two_routines(6,0);
      if ((DAT_0003c000 & 8) == 0) {
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
