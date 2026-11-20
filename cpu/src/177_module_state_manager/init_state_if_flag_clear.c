/* @k10d init_state_if_flag_clear @ 0x10485a08
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Conditionally initializes a state object and calls two setup routines based on a flag
 *   check.
 * summary:
 *   Checks if cRam800102da is not 1. If true, calls three functions on pvRam800102c4
 *   (likely initialization or reset) and check_kernel_call_success_10459fea with argument
 *   0x32. Unconditionally calls call_two_initializers_with_zero with _DAT_800102bc and
 *   call_subroutine_with_zero with uRam800102c0. The specific subsystem is not identifiable
 *   from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_state_if_flag_clear(void)

{
  if (cRam800102da != '\x01') {
    call_single_helper_with_param_104436e2((void *)(pvRam800102c4));
    call_helper_with_zero_104436a0((void *)(pvRam800102c4));
    dispatch_on_flag_param((void *)(pvRam800102c4),(int)(0));
    check_kernel_call_success_10459fea();
  }
  call_two_initializers_with_zero(_DAT_800102bc/*SDRAM*/);
  call_subroutine_with_zero(uRam800102c0);
  return;
}
