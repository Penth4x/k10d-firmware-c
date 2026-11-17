/* @k10d map_array_with_helper @ 0x104b1ee2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an int array and fills it by applying build_object_with_nested_refs to each
 *   element of a source array.
 * summary:
 *   Allocates param_4 * 4 bytes via heap_alloc_2. Iterates param_4 times, calling
 *   build_object_with_nested_refs with param_1, param_2, and the i-th element of the array
 *   at param_3. Stores the result in the newly allocated array and returns the pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int map_array_with_helper(void *param_1,uint32_t param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = heap_alloc_2(param_4 << 2);
  uVar4 = 0;
  if (0 < param_4) {
    do {
      iVar3 = uVar4 * 4;
      iVar2 = build_object_with_nested_refs((int)param_1,param_2,*(uint32_t *)((int)param_3 + iVar3));
      uVar4 = uVar4 + 1 & 0xff;
      *(int *)(iVar1 + iVar3) = iVar2;
    } while ((int)uVar4 < param_4);
  }
  return iVar1;
}
