/* @k10d screen_mgr_on_status_a @ 0x1046b6d8
 * name: verified (structural evidence: d313: decompile; vtable 0x105a8b34 listener interface; runtime: one injected 'A' runs it and the render)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   Screen-manager listener for event 0xa0015 (companion-CPU status 'A'): post the render
 *   flag (obj+0x1b4 = flag 0x29).
 * summary:
 *   VERIFIED: d313: decompile; vtable 0x105a8b34 listener interface; runtime: one injected
 *   'A' runs it and the render
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool screen_mgr_on_status_a(int param_1,int param_2)

{
  if (param_2 == 0xa0015) {
    set_flg_obj((uint32_t *)(param_1 + 0x1b4));
  }
  return param_2 == 0xa0015;
}
