/* @k10d FUN_000cba8c @ 0x000cba8c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000cba8c(void)

{
  uint32_t uVar1;
  
  FUN_000f6ffe();
  if ((DAT_0003ce04 & 8) == 0) {
    if ((DAT_0003cb80 & 0x10) == 0) {
      extract_nibble_from_byte();
    }
    clear_flag_bit_and_counter();
    FUN_000d19f0();
    if ((DAT_0003ce01 & 1) != 0) {
      clear_bit1_of_dat_0003ce01();
    }
    uVar1 = 10;
    if (((DAT_0003ce00 & 0x20) == 0) && ((DAT_0003ce06 & 0x40) == 0)) {
      if ((DAT_0003ce00 & 0x10) == 0) {
        if ((DAT_0003ce06 & 2) == 0) {
          uVar1 = 4;
        }
        else {
          uVar1 = check_and_set_bit4_flag();
        }
      }
      else if (((DAT_0003cf0e & 0xf) == 0) && ((DAT_0003ce07 & 2) == 0)) {
        DAT_0003ce07 = DAT_0003ce07 | 2;
        if ((DAT_0003ce02 & 0x20) != 0) {
          DAT_0003ce02 = DAT_0003ce02 | 8;
        }
        uVar1 = 4;
      }
    }
  }
  else {
    uVar1 = update_state_flags_and_return_code();
  }
  return uVar1;
}
