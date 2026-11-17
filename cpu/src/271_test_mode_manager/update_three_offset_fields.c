/* @k10d update_three_offset_fields @ 0x1050eaa2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x48 and computes three dependent values via
 *   align_down_to_32_bytes into offsets 0x8c, 0xa0, and 0xa4.
 * summary:
 *   The function writes the second argument to the object at offset 0x48. It then calls
 *   align_down_to_32_bytes three times, each time passing the object and a sum of the
 *   previous result (or initial field at 0x80) with fields at 0x104 and 0x110. The results
 *   are stored sequentially at offsets 0x8c, 0xa0, and 0xa4. The specific role of
 *   align_down_to_32_bytes is unknown, so the operation is described mechanically as a
 *   chain of dependent calculations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_offset_fields(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  *(int *)(param_1 + 0x48) = param_2;
  iVar1 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x80) + param_2);
  *(int *)(param_1 + 0x8c) = iVar1;
  iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x104));
  *(int *)(param_1 + 0xa0) = iVar1;
  uVar2 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x110));
  *(uint32_t *)(param_1 + 0xa4) = uVar2;
  return;
}
