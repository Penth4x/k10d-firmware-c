/* @k10d screen_mgr_task @ 0x1046b7dc
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed screen_mgr_render_loop)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Infinite loop that waits on a flag, renders the status LCD, and forwards input to
 *   registered sinks.
 * summary:
 *   Continuously polls a flag at param_1+0x1b4 via eventflag_wai_flg/eventflag_clr_flg
 *   until bit 0 is set. Each iteration calls screen_mgr_render to update the status display
 *   and screen_mgr_forward_input to dispatch the current key/status record to active input
 *   sinks. Prior notes indicate this UI task loop was never observed executing in current
 *   runs.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void screen_mgr_task(int param_1)

{
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    do {
      eventflag_wai_flg((uint32_t *)(param_1 + 0x1b4),1,&uStack_c,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x1b4),uStack_c);
    } while ((uStack_c & 1) == 0);
    screen_mgr_render(param_1);
    screen_mgr_forward_input(param_1,param_1 + 0x78);
  } while( true );
}
