/* @k10d call_helper_and_write_result @ 0x10503b54
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Conditionally calls a helper on param_1 and writes the result to an offset in param_1.
 * summary:
 *   Checks if param_2 equals the constant 0x80000013. If true, it calls
 *   clamp_status_to_range with param_1 and then calls invoke_virtual_slot_two_104272e4 with
 *   param_1+0x14, the constant 0x20001, and the return value from the first call. Returns 0
 *   unconditionally. The specific roles of the callees and the meaning of the constants are
 *   not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_and_write_result(int param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == -0x7fffffed) {
    uVar1 = clamp_status_to_range(param_1);
    invoke_virtual_slot_two_104272e4((void *)(param_1 + 0x14),0x20001,uVar1);
  }
  return 0;
}
