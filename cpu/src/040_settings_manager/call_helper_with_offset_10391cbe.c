/* @k10d call_helper_with_offset_10391cbe @ 0x10391cbe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unknown function, adds 4 to its return value, and passes the result to another
 *   unknown function.
 * summary:
 *   The function retrieves a value from get_or_create_sram_object_1040a240, increments it
 *   by 4, and passes the result as an argument to kernel_diag_taskstack. It is invoked as
 *   virtual method slot 5 of class cls_105bb2e4. The specific roles of the callees are
 *   unknown, so the operation is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_10391cbe(void)

{
  int iVar1;
  
  iVar1 = get_or_create_sram_object_1040a240();
  kernel_diag_taskstack((void *)(iVar1 + 4));
  return;
}
