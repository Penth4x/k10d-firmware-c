/* @k10d FUN_000cbb18 @ 0x000cbb18
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000cbb18(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0xb;
  extract_nibble_from_byte();
  if ((DAT_0003ce00 & 0x20) == 0) {
    iVar1 = read_bits_4_to_6_of_dat_0003c037();
    if ((iVar1 == 0) && ((DAT_0003ce06 & 0x40) == 0)) {
      DAT_0003ce06 = DAT_0003ce06 | 0x40;
    }
    else {
      update_nibble_and_flag_state();
    }
    iVar1 = read_bits_4_to_6_of_dat_0003c037();
    if (((iVar1 != 0) && ((DAT_00000005 & 4) == 0)) || ((DAT_0003ce06 & 0x10) == 0)) {
      DAT_0003ce06 = DAT_0003ce06 | 0x80;
      wait_for_bit2_of_dat_00000057();
    }
    clear_flag_and_call_helpers();
    compute_and_dispatch_adjusted_value();
    check_and_clear_state_flags_000ce88c();
    uVar2 = 0;
    iVar1 = poll_event_and_dispatch_000cbe84(3,1);
    if ((iVar1 == 0) || (((DAT_0003ce00 & 0x40) == 0 && (DAT_0003ce10 != '\x01')))) {
      while( true ) {
        if ((DAT_0003ce00 & 0x40) == 0) {
          DAT_0003ce10 = 2;
          return 0;
        }
        if (((DAT_0003ce00 & 0x40) != 0) && ((DAT_0003ce06 & 0x40) == 0)) break;
        iVar1 = poll_event_and_dispatch_000cbe84(3,1);
        if (iVar1 != 0) {
          if ((DAT_0003ce00 & 0x40) != 0) {
            return 0;
          }
          if (DAT_0003ce10 == '\x01') {
            return 0;
          }
        }
      }
      if ((DAT_0003ce06 & 0x20) == 0) {
        uVar2 = 1;
      }
      else {
        set_flag_bits_in_dat_0003ce00();
        uVar2 = 0xb;
      }
    }
  }
  return uVar2;
}
