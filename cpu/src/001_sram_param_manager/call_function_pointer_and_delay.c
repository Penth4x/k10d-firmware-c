/* @k10d call_function_pointer_and_delay @ 0x100f0bf2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a function pointer with a normalized 0/1 argument, then calls a helper with a
 *   constant 200.
 * summary:
 *   The function normalizes param_1 to either 0 or 1 and passes it to the function pointer
 *   stored at DAT_800482d8. It then unconditionally calls set_flag_and_halt with the
 *   constant argument 200. The specific roles of the function pointer and the helper are
 *   not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_function_pointer_and_delay(int param_1)

{
  if (param_1 == 0) {
    (*_DAT_800482d8/*SDRAM*/)(0);
  }
  else {
    (*_DAT_800482d8/*SDRAM*/)(1);
  }
  set_flag_and_halt(200);
  return;
}
