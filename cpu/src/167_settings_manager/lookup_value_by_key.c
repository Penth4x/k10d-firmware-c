/* @k10d lookup_value_by_key @ 0x10476d36
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a 16-bit value from a struct if the key matches, otherwise calls a helper to
 *   compute it.
 * summary:
 *   First checks a global state via read_bounded_array_element_10477358. If non-zero, it
 *   compares param_2 against a 16-bit field at offset 0x12 of the object pointed to by
 *   param_1. If they match, it returns the 16-bit value at offset 0x10. If they do not
 *   match, it calls find_first_nonzero_entry with a pointer to offset 0xc and param_2,
 *   returning the result. Returns 0 if the initial state check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint lookup_value_by_key(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = read_bounded_array_element_10477358((uint32_t)param_1, (uint32_t)param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 == *(ushort *)(param_1 + 0x12)) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x10);
    }
    else {
      uVar2 = find_first_nonzero_entry((void *)(param_1 + 0xc),param_2);
    }
  }
  return uVar2;
}
