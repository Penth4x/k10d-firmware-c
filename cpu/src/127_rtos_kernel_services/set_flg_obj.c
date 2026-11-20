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

bool set_flg_obj(uint32_t *param_1)

{
  int iVar1;
  
  iVar1 = __trap_set_event_flag_bits((int)(short)*param_1, __frv_reg_unset(5));
  return iVar1 == 0;
}
