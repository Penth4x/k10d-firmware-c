/* @k10d poll_flag_and_dispatch_10489c44 @ 0x10489c44
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 185_sr_dust_removal (unit names are model-proposed)
 * purpose:
 *   Polls a bit in a local variable via helper calls until set, then invokes a handler and
 *   sets a byte flag.
 * summary:
 *   The function initializes a local variable to 0 and enters a nested loop. It calls
 *   eventflag_wai_flg with the local variable and a constant, then calls eventflag_clr_flg,
 *   repeating until the least significant bit of the local variable is set. Once the bit is
 *   set, it calls wait_for_flag_after_command with the object pointer and sets the byte at
 *   offset 0x1a of the object to 1 before looping indefinitely. The specific subsystem is
 *   not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_dispatch_10489c44(cls_105b3928 *param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      eventflag_wai_flg(&((uint32_t *)&(param_1->field_0x60))[0],1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg(&param_1->field_0x60,uStack_c);
    } while ((uStack_c & 1) == 0);
    wait_for_flag_after_command(param_1);
    param_1->field_0x68 = 1;
  } while( true );
}
