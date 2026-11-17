/* @k10d iterate_and_call_with_deref_values_1051a67c @ 0x1051a67c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a count derived from a field in param_2, calling a helper with values
 *   dereferenced from a pointer chain in param_1.
 * summary:
 *   The function checks if the lower 31 bits of the integer at param_2+4 are non-zero. If
 *   so, it iterates, incrementing a counter uVar1 and an offset iVar2 by 4 each time. In
 *   each iteration, it calls write_to_dynamic_array with param_2, the current counter, and
 *   a value loaded from a complex pointer chain starting at param_1+0x6c. The loop
 *   continues while the counter is less than the value at param_2+4 shifted left by 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_call_with_deref_values_1051a67c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
    iVar2 = 0;
    do {
      write_to_dynamic_array(param_2,uVar1,*(uint32_t *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x68) + iVar2))
      ;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar1 < (uint)(*(int *)(param_2 + 4) << 1));
  }
  return;
}
