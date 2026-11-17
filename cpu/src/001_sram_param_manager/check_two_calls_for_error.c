/* @k10d check_two_calls_for_error @ 0x100f0e0c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Calls check_and_init_subsystem twice and returns -1 if either call returns -1,
 *   otherwise returns 0.
 * summary:
 *   The function invokes check_and_init_subsystem sequentially. If the first call returns
 *   -1, it immediately returns -1. Otherwise, it calls check_and_init_subsystem again; if
 *   this second call returns -1, it returns -1. If both calls succeed (return non-negative
 *   values), it returns 0. This pattern suggests a validation or readiness check requiring
 *   two successful operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_calls_for_error(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = check_and_init_subsystem();
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = check_and_init_subsystem();
    if (iVar1 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
