/* @k10d ui_task5_body @ 0x1046727a
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed poll_cpucom_status_loop)
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Continuously polls a CPUCOM context status flag and re-submits the transaction until
 *   the flag clears.
 * summary:
 *   The function enters an infinite loop that repeatedly calls eventflag_wai_flg and
 *   eventflag_clr_flg on a structure at param_1+0x28. It then checks a byte at offset 0x60
 *   of the object pointed to by param_1+0x30; if non-zero, it calls cpucom_ctx_resubmit to
 *   re-arm the CPUCOM transaction. If the flag is zero, it calls cpucom_repost_request with
 *   pointers from param_1+0x38 and param_1+0x3c before looping again. The use of
 *   cpucom_ctx_resubmit indicates this is managing a communication channel with the
 *   companion chip (PRIME DSP).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ui_task5_body(int param_1)

{
  do {
    while( true ) {
      eventflag_wai_flg((uint32_t *)(param_1 + 0x28),1,(uint32_t *)0x0,_DAT_105a2af0/*ROM*/);
      eventflag_clr_flg((uint32_t *)(param_1 + 0x28),1);
      if (*(char *)(*(int *)(param_1 + 0x30) + 0x60) == '\0') break;
      cpucom_ctx_resubmit(*(void **)(param_1 + 0x30),(void *)(param_1 + 4));
    }
    cpucom_repost_request(*(void **)(param_1 + 0x38),(uint8_t *)(param_1 + 0x3c));
  } while( true );
}
