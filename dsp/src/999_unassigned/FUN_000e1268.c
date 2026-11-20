/* @k10d FUN_000e1268 @ 0x000e1268
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e1268(void)

{
  int iVar1;
  
  call_subroutine_with_mode_delay();
  read_bytes_if_enabled(99,(uint8_t *)&DAT_0003c128,1);
  read_bytes_if_enabled(0x65,(uint8_t *)0x3c137,4);
  iVar1 = read_bytes_if_enabled(0x6d,(uint8_t *)&DAT_0003c12a,1);
  if (iVar1 == 0) {
    if (DAT_0003c12a < 0xc) {
      if (DAT_0003c12a == 8) {
        DAT_0003c128 = DAT_0003c128 & 0x7f;
      }
    }
    else {
      DAT_0003c127 = DAT_0003c127 | 0x40;
      read_bytes_if_enabled(0x38,(uint8_t *)&DAT_0003c114,1);
    }
    call_subroutine_with_arg_5();
  }
  else {
    if ((DAT_0003c127 & 0x20) != 0) {
      if ((DAT_0003c128 & 0x80) == 0) {
        FUN_000d2ecc();
      }
      else {
        update_state_and_call_handler();
      }
    }
    call_subroutine_with_arg_two();
  }
  check_flag_and_dispatch();
  read_bytes_if_enabled(100,(uint8_t *)&DAT_0003c119,2);
  read_bytes_if_enabled(0x39,(uint8_t *)&DAT_0003c115,4);
  read_bytes_if_enabled(0x3a,(uint8_t *)0x3c11b,4);
  read_bytes_if_enabled(0x3b,(uint8_t *)&DAT_0003c11f,1);
  if ((DAT_0003c022 & 1) == 0) {
    read_bytes_if_enabled(0x61,(uint8_t *)&DAT_0003c12c,1);
  }
  return;
}
