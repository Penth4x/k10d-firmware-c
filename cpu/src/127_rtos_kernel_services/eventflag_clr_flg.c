/* @k10d eventflag_clr_flg @ 0x104596e6
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed clr_flg_obj)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Clears event-flag bits (param_2) on the flag object's id via the kernel; returns true
 *   on success.
 * summary:
 *   Takes a flag object pointer (param_1) and a bit mask (param_2), extracts the object's
 *   id from the first short, and calls the kernel entry at TBR+0x1000e1d0 with the id and
 *   the inverted mask (~param_2). Returns true if the kernel call returns 0 (E_OK). Sits
 *   alongside set_flg_obj and twai_flg_obj in the rtos_wrappers_and_heap module, forming
 *   the standard µITRON event-flag wrapper trio.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool eventflag_clr_flg(uint32_t *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = clear_task_flag_bits((int)(short)*param_1,param_2 ^ 0xffffffff);
  return iVar1 == 0;
}
