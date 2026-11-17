/* @k10d poll_flag_and_dispatch_1048a8ba @ 0x1048a8ba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 186_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Loops until a polled bit is set, then calls a handler and sets a local flag.
 * summary:
 *   The function enters an infinite loop that repeatedly calls eventflag_wai_flg to update
 *   a local variable and eventflag_clr_flg to process it. It breaks out of the inner loop
 *   only when the least significant bit of the local variable is set. It then calls
 *   wait_for_flag_at_offset_0x31_1048a904 with the object pointer and sets the byte at
 *   offset 0x1a of the object to 1 before repeating the outer loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_dispatch_1048a8ba(uint32_t *param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      eventflag_wai_flg(param_1 + 0x18,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(param_1 + 0x18,uStack_c);
    } while ((uStack_c & 1) == 0);
    wait_for_flag_at_offset_0x31_1048a904(param_1);
    *(uint8_t *)(param_1 + 0x1a) = 1;
  } while( true );
}
