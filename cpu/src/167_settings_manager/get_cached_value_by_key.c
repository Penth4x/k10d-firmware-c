/* @k10d get_cached_value_by_key @ 0x10476d66
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Returns a cached 16-bit value associated with a key if the cache is valid and matches,
 *   otherwise computes it via a helper.
 * summary:
 *   Calls read_bounded_array_element_10477358 to check a validity flag. If valid, compares
 *   param_2 against the key stored at param_1+0x10. If they match, returns the cached value
 *   at param_1+0x12. If they differ, calls find_last_nonzero_array_element with a pointer
 *   to param_1+0xc and param_2 to compute the result. Returns 0 if the initial validity
 *   check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint get_cached_value_by_key(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = read_bounded_array_element_10477358((uint32_t)param_1, (uint32_t)param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (param_2 == *(ushort *)(param_1 + 0x10)) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x12);
    }
    else {
      uVar2 = find_last_nonzero_array_element((void *)(param_1 + 0xc),param_2);
    }
  }
  return uVar2;
}
