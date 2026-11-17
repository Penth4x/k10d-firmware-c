/* @k10d append_bytes_to_ring_buffer @ 0x104f4a7c
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Copies up to 4 bytes from a source buffer into a ring buffer at param_1, guarded by a
 *   capacity check.
 * summary:
 *   Checks that param_1+0x40 is non-zero and param_3 < 4. Calls
 *   compute_indexed_difference(param_1,param_3) to get a capacity/limit and
 *   count_string_bytes(param_2) to get the source length. If the source length is less than
 *   the limit, it copies that many bytes from param_2 into the array at param_1+0x30 +
 *   param_3*4, incrementing a counter at each slot. The callees are unnamed, so the exact
 *   buffer semantics (ring vs linear) are inferred from the index arithmetic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void append_bytes_to_ring_buffer(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x40) != '\0') && (param_3 < 4)) {
    uVar1 = compute_indexed_difference(param_1,param_3);
    uVar2 = count_string_bytes((char *)param_2);
    if (uVar2 < uVar1) {
      iVar3 = count_string_bytes((char *)param_2);
      uVar1 = 0;
      if (iVar3 != 0) {
        iVar3 = param_3 * 4;
        do {
          iVar4 = param_1 + 0x30;
          **(uint8_t **)(iVar4 + iVar3) = *(uint8_t *)(param_2 + uVar1);
          *(int *)(iVar3 + iVar4) = *(int *)(iVar3 + iVar4) + 1;
          uVar1 = uVar1 + 1;
          uVar2 = count_string_bytes((char *)param_2);
        } while (uVar1 < uVar2);
      }
    }
  }
  return;
}
