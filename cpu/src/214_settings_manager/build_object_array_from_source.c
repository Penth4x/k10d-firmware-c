/* @k10d build_object_array_from_source @ 0x104b20c0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates an array of new objects and copies two 4-byte fields from a source array into
 *   each.
 * summary:
 *   Reads a count from the first byte of param_2, heap-allocates count*4 bytes for an array
 *   of pointers, and allocates a new object per entry via cls_105b8160_new. For each entry
 *   it copies 4 bytes from the array at *(param_2+0x20) into offset 4 and 4 bytes from the
 *   array at *(param_2+0x24) into offset 8 of the new object, storing the object pointer in
 *   the result array. Returns the pointer to the allocated array.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_object_array_from_source(void *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)*param_2;
  uVar4 = 0;
  iVar2 = heap_alloc_2(uVar5 << 2);
  if (uVar5 != 0) {
    do {
      iVar3 = cls_105b8160_new(0);
      iVar1 = uVar4 * 4;
      *(int *)(iVar2 + iVar1) = iVar3;
      *(uint32_t *)(iVar3 + 4) = *(uint32_t *)(*(int *)(param_2 + 0x20) + iVar1);
      uVar4 = uVar4 + 1 & 0xff;
      *(uint32_t *)(iVar3 + 8) = *(uint32_t *)(*(int *)(param_2 + 0x24) + iVar1);
    } while (uVar4 < uVar5);
  }
  return iVar2;
}
