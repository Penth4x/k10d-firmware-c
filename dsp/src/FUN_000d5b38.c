/* @k10d FUN_000d5b38 @ 0x000d5b38
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint8_t FUN_000d5b38(uint32_t param_1)

{
  int iVar1;
  
  DAT_0003c318 = 1;
  clear_seven_zero_fields();
  initialize_several_globals();
  write_three_globals(0x30d3);
  iVar1 = set_flag_and_dispatch(param_1);
  if (iVar1 == 0) {
    write_three_globals(0x30d3);
    iVar1 = process_buffer_state_flag();
    if ((iVar1 == 0) && (_DAT_0003c280 != 0)) {
      FUN_000d5d6a();
    }
  }
  initialize_seven_byte_globals();
  dispatch_pending_event_000d5ec0();
  clear_dat_0000014e();
  DAT_0003c318 = 0;
  return DAT_0003c319;
}
