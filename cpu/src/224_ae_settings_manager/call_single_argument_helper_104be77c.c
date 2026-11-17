/* @k10d call_single_argument_helper_104be77c @ 0x104be77c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes its single integer argument to process_entry_pair_and_dispatch and returns the
 *   result unchanged.
 * summary:
 *   A one-line trampoline that forwards param_1 to process_entry_pair_and_dispatch and
 *   returns the callee's value in r4. No local state, no side effects beyond the callee.
 *   The caller is poll_status_and_dispatch_event_104cbf40.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_argument_helper_104be77c(int param_1)

{
  uint32_t uVar1;
  
  uVar1 = process_entry_pair_and_dispatch(param_1);
  return uVar1;
}
