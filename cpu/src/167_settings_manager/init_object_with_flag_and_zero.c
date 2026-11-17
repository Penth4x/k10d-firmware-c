/* @k10d init_object_with_flag_and_zero @ 0x1047bbbe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the object, conditionally zeroes offset 0x34, and initializes offset
 *   0x2c with a flag.
 * summary:
 *   The function takes a pointer to an object and calls process_status_flags_and_dispatch
 *   with it. If the return value is non-zero, it writes 0 to offset 0x34 of the object. It
 *   then calls eventflag_clr_flg with a pointer to offset 0x2c and the constant 0x80000000,
 *   followed by set_flg_obj on the same offset. The specific subsystem is not identifiable
 *   from the provided code and callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_flag_and_zero(void *param_1)

{
  int iVar1;
  
  iVar1 = process_status_flags_and_dispatch(param_1);
  if (iVar1 != 0) {
    *(uint32_t *)((int)param_1 + 0x34) = 0;
  }
  eventflag_clr_flg((uint32_t *)((int)param_1 + 0x2c),0x80000000/*SDRAM*/);
  set_flg_obj((uint32_t *)((int)param_1 + 0x2c));
  return;
}
