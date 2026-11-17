/* @k10d update_three_offsets_from_base @ 0x1050e9e6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 271_test_mode_manager (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x3c and computes three new values via align_down_to_32_bytes,
 *   storing them at offsets 0x84, 0x90, and 0x94.
 * summary:
 *   The function writes param_2 to the object at offset 0x3c. It then calls
 *   align_down_to_32_bytes three times with the object pointer and a computed address (base
 *   + param_2, then previous result + offset 0x104, then previous result + offset 0x110).
 *   The results are stored sequentially at offsets 0x84, 0x90, and 0x94. The specific role
 *   of align_down_to_32_bytes is unknown, but the pattern suggests updating a chain of
 *   pointers or offsets within a data structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_three_offsets_from_base(int param_1,int param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  *(int *)(param_1 + 0x3c) = param_2;
  iVar1 = align_down_to_32_bytes(param_1,*(int *)(param_1 + 0x80) + param_2);
  *(int *)(param_1 + 0x84) = iVar1;
  iVar1 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x104));
  *(int *)(param_1 + 0x90) = iVar1;
  uVar2 = align_down_to_32_bytes(param_1,iVar1 + *(int *)(param_1 + 0x110));
  *(uint32_t *)(param_1 + 0x94) = uVar2;
  return;
}
