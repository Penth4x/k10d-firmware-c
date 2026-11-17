/* @k10d FUN_000e1210 @ 0x000e1210
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e1210(void)

{
  int iVar1;
  
  iVar1 = process_state_transition_000e1c04();
  if (iVar1 == 0) {
    dispatch_key_event(0x72,(int)&DAT_0003c128);
    dispatch_key_event(0x73,(int)&DAT_0003c12a);
    check_key_and_dispatch(0xb2,1);
    update_low_three_bits_if_flag_set(7);
    if ((DAT_0003c022 & 1) == 0) {
      check_key_enabled_and_dispatch(0xd1);
    }
    else {
      DAT_0003c130 = DAT_0003c130 | 8;
      update_status_byte_and_send_000e1b62();
    }
  }
  return;
}
