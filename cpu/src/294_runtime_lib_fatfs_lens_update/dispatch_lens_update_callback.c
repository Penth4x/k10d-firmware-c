/* @k10d dispatch_lens_update_callback @ 0x10546eb8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Invokes a lens firmware update callback with adjusted pointers or a fallback routine.
 * summary:
 *   The function selects between three execution paths based on the callback pointer and a
 *   flag. If the callback is null, it calls heap_free_2 with an offset-adjusted first
 *   argument. If the flag is zero, it calls the callback with adjusted arguments;
 *   otherwise, it calls the callback with no arguments. The module context indicates this
 *   is part of the lens firmware update process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_lens_update_callback(int param_1,int param_2,code *param_3,int param_4)

{
  if (param_3 == (code *)0x0) {
    heap_free_2(param_1 - _DAT_80014a74/*SDRAM*/);
  }
  else if (param_4 == 0) {
    (*param_3)(param_1 - _DAT_80014a74/*SDRAM*/,param_2 + _DAT_80014a74/*SDRAM*/);
  }
  else {
    (*param_3)();
  }
  return;
}
