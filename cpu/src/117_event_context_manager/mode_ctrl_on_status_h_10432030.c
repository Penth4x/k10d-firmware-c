/* @k10d mode_ctrl_on_status_h_10432030 @ 0x10432030
 * name: verified (structural evidence: d313: flag_setters.py (r5=0x80 on obj+0x7c); FRN_LOG_FLG set_flg 0x37/0x80 after the model sends 'H')
 * unit: 117_event_context_manager (unit names are model-proposed)
 * purpose:
 *   On companion-CPU status 'H' (event 0xa0009): set mode flag 0x37 bit 0x80.
 * summary:
 *   VERIFIED: d313: flag_setters.py (r5=0x80 on obj+0x7c); FRN_LOG_FLG set_flg 0x37/0x80
 *   after the model sends 'H'
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mode_ctrl_on_status_h_10432030(int param_1)

{
  set_flg_obj((uint32_t *)(param_1 + 0x7c), 0x80);
  return;
}
