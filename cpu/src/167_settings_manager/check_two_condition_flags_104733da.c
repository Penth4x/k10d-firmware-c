/* @k10d check_two_condition_flags_104733da @ 0x104733da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns 1 if either of two condition checks on the object succeeds, else 0.
 * summary:
 *   Reads a pointer at offset 4 and a value at offset 0x14 from the object in param_1.
 *   Calls call_handler_with_lock_10480e6a with those two values; if it returns non-zero,
 *   the function returns 1. If it returns 0, it calls call_vtable_slot_two on the pointer
 *   at offset 4 and returns 1 only if that call returns 8, otherwise 0. The function acts
 *   as a boolean gate combining two helper checks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_condition_flags_104733da(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = *(uint32_t *)(param_1 + 4);
  uVar1 = (*(code *)0x1047796e/*ROM*/)(param_1 + 0x14);
  iVar2 = call_handler_with_lock_10480e6a(uVar3,uVar1);
  if (iVar2 == 0) {
    iVar2 = call_vtable_slot_two(*(void **)(param_1 + 4));
    uVar1 = 1;
    if (iVar2 != 8) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
