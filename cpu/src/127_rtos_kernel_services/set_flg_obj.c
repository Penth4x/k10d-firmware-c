/* @k10d set_flg_obj @ 0x104596cc
 * name: verified (structural evidence: d313: FRN_LOG_FLG shows each call waking the matching wai_flg (e.g. flag 0x29 render wait); decompile drops the r5 argument)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Set event-flag bits (pattern in r5) on the flag object's id: uITRON set_flg through the
 *   kernel.
 * summary:
 *   VERIFIED: d313: FRN_LOG_FLG shows each call waking the matching wai_flg (e.g. flag 0x29
 *   render wait); decompile drops the r5 argument
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"
#include "syscall_traps.h"

bool set_flg_obj(uint32_t *pflg_id, uint32_t flg_bits)

{
  int trap_ret;

  /* Load the 32-bit flag ID, sign-extend to 16 bits, and pass with the bit
   * pattern to the kernel set_flg trap (int #0x40).  Returns true when the
   * trap reports success (0). */
  trap_ret = __trap_set_event_flag_bits((int)(short)*pflg_id, flg_bits);
  return trap_ret == 0;
}
