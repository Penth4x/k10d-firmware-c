/* @k10d mode_ctrl_on_status_b @ 0x10432082
 * name: verified (structural evidence: d313: flag_setters.py (r5=0x200 on obj+0x7c); runs when 'B' is injected)
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   On companion-CPU status 'B' (event 0xa000b): set mode flag 0x37 bit 0x200 (and a
 *   follow-up when obj+0xa4).
 * summary:
 *   VERIFIED: d313: flag_setters.py (r5=0x200 on obj+0x7c); runs when 'B' is injected
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mode_ctrl_on_status_b(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x7c));
  return;
}
