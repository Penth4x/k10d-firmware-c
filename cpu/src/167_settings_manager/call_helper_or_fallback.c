/* @k10d call_helper_or_fallback @ 0x1047657c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper with three args and, if it returns non-zero, invokes a function pointer
 *   stored in the object.
 * summary:
 *   Invokes invoke_virtual_slot_two_and_store_result with param_1, param_2, and the value
 *   at param_1+0x10. If the result is zero, returns zero. Otherwise, dereferences the
 *   pointer at param_1+0xc and calls it as a function, returning its result. The object
 *   layout suggests a vtable-like or callback dispatch pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_or_fallback(int param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = invoke_virtual_slot_two_and_store_result(param_1,param_2,*(uint32_t *)(param_1 + 0x10));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)0x10476cca/*ROM*/)(*(uint32_t *)(param_1 + 0xc));
  }
  return uVar2;
}
