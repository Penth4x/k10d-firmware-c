/* @k10d poll_flag_and_dispatch_104870b0 @ 0x104870b0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Loops until a bit flag in a local variable is set, then calls a handler and sets a byte
 *   in the object.
 * summary:
 *   The function initializes a local stack variable to 0 and enters a nested loop. It calls
 *   eventflag_wai_flg with the object offset 0x18 and the local variable, then calls
 *   eventflag_clr_flg with the same offset and the local variable. The inner loop continues
 *   until bit 0 of the local variable is set. Once set, it calls
 *   wait_for_flag_at_offset_0x31_104870fa with the object pointer and sets the byte at
 *   offset 0x1a of the object to 1. The outer loop then repeats indefinitely.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_dispatch_104870b0(uint32_t *param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      eventflag_wai_flg(param_1 + 0x18,1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(param_1 + 0x18,uStack_c);
    } while ((uStack_c & 1) == 0);
    wait_for_flag_at_offset_0x31_104870fa(param_1);
    *(uint8_t *)(param_1 + 0x1a) = 1;
  } while( true );
}
