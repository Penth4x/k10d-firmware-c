/* @k10d call_helper_if_gate_passes @ 0x1042fd8e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Checks a gate condition via app_mode_activate and conditionally invokes
 *   chain_two_helper_calls_10486176 with a pointer from menumgr_singleton_get.
 * summary:
 *   The function first calls app_mode_activate with param_1 and the constant 3. If the
 *   result is non-zero, it retrieves a pointer from menumgr_singleton_get, dereferences the
 *   second word of that structure, and passes it along with param_2 to
 *   chain_two_helper_calls_10486176. The return value of chain_two_helper_calls_10486176 is
 *   returned, or 0 if the initial check fails. The specific roles of the callees are
 *   unknown, so the behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_if_gate_passes(uint32_t param_1,void *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = app_mode_activate(param_1,3);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = menumgr_singleton_get();
    uVar2 = chain_two_helper_calls_10486176(*(uint32_t *)(iVar1 + 4),param_2);
  }
  return uVar2;
}
