/* @k10d rescon_done_to_events @ 0x10504fd4
 * name: verified (structural evidence: d313: decompile; runtime 4 calls with the model, waking task 14)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Turn resolution-converter events into client events: 0x80000011 bit 0x8000 -> 0x300001,
 *   0x80000012 bit 0x8000 -> 0x300002.
 * summary:
 *   VERIFIED: d313: decompile; runtime 4 calls with the model, waking task 14
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t rescon_done_to_events(int param_1,int param_2,uint param_3)

{
  if (param_2 == -0x7fffffef) {
    if ((param_3 & 0x8000) != 0) {
      invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x20),0x300001,0);
    }
  }
  else if ((param_2 == -0x7fffffee) && ((param_3 & 0x8000) != 0)) {
    invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x38),0x300002,0);
  }
  return 0;
}
