/* @k10d allocate_struct_buffers @ 0x104b3ef2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_struct_buffers(byte *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if (*param_1 == 0) {
LAB_104b3f10:
    if (param_1[1] != 0) {
      iVar1 = heap_alloc_2((uint)param_1[1] << 2);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 == 0) goto LAB_104b3f44;
    }
    if (param_1[2] != 0) {
      iVar1 = heap_alloc_2((uint)param_1[2] << 2);
      *(int *)(param_1 + 0x18) = iVar1;
      if (iVar1 == 0) goto LAB_104b3f44;
    }
    uVar2 = 1;
  }
  else {
    iVar1 = heap_alloc_2((uint)*param_1 << 2);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 != 0) goto LAB_104b3f10;
LAB_104b3f44:
    uVar2 = 0;
  }
  return uVar2;
}
