/* @k10d evaluate_state_flags_and_dispatch @ 0x000cbe3a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads flag bits from DAT_0003ce01/03 and DAT_0000005f to set DAT_0003ce04 and
 *   conditionally call clear_bit1_of_dat_0003ce01, then returns a status code from
 *   poll_event_and_dispatch_000cbe84.
 * summary:
 *   The function inspects bit 0 and bit 4 of DAT_0003ce01. If bit 0 is clear and bit 4 is
 *   set, it clears bit 4 in DAT_0003ce01 and sets bit 2 in DAT_0003ce04. If bit 0 is set,
 *   it checks bit 2 of DAT_0003ce03 and bit 2 of DAT_0000005f to potentially invoke
 *   clear_bit1_of_dat_0003ce01. Finally, it calls poll_event_and_dispatch_000cbe84(1, 0);
 *   if that call returns non-zero, the function returns 0, otherwise it returns one of the
 *   intermediate values (9, 5, or 7).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t evaluate_state_flags_and_dispatch(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 9;
  if ((DAT_0003ce01 & 1) == 0) {
    if ((DAT_0003ce01 & 0x10) != 0) {
      DAT_0003ce01 = DAT_0003ce01 & 0xef;
      DAT_0003ce04 = DAT_0003ce04 | 4;
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 7;
    if (((DAT_0003ce03 & 4) == 0) && ((DAT_0000005f & 4) != 0)) {
      clear_bit1_of_dat_0003ce01();
    }
  }
  iVar1 = poll_event_and_dispatch_000cbe84(1,0);
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}
