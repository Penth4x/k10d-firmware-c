/* @k10d alloc_two_object_array @ 0x104b1f28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int alloc_two_object_array(void *param_1,ushort param_2,uint16_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  uintptr_t sp;
  ushort auStack_c [2];
  
  iVar1 = heap_alloc_2(8);
  auStack_c[0] = param_2;
  auStack_c[1] = param_3;
  uVar3 = 0;
  do {
    iVar4 = uVar3 * 4;
    uVar2 = (uint32_t)cls_105d7118_new((cls_105d7118 *)0x0,(uint)auStack_c[uVar3]);
    uVar3 = uVar3 + 1 & 0xff;
    *(uint32_t *)(iVar1 + iVar4) = uVar2;
  } while (uVar3 < 2);
  return iVar1;
}
