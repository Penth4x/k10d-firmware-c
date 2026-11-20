/* @k10d write_buffer_via_virtual_method @ 0x1053df7c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Writes a buffer in chunks by repeatedly calling a virtual method on an object, tracking
 *   progress and handling specific error codes.
 * summary:
 *   The function iterates through a data buffer (param_4) of length param_3, calling a
 *   virtual function at offset 0x58 of the object (param_1) to send chunks. It tracks the
 *   number of bytes sent in *param_5 and adjusts the source pointer by a stride
 *   (param_1+0xc). If the virtual call returns -1000, it sets a flag in a status structure;
 *   otherwise, it returns -5 on other errors or 0 on success. The module context suggests
 *   this is part of a firmware update process, but the function itself is a generic chunked
 *   write operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_buffer_via_virtual_method(void *param_1,int param_2,uint param_3,void *param_4,int *param_5)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)param_1 + 0xc);
  *param_5 = 0;
  puVar2 = *(uint **)((int)param_1 + 0x70);
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    uVar5 = *puVar2;
    if (param_3 < *puVar2) {
      uVar5 = param_3;
    }
    iVar4 = (((vtbl_entry*)((int)param_1))[11].fn)
                      (*(uint32_t *)((int)param_1 + 0x60),param_2,uVar5,param_4);
    if (iVar4 != 0) break;
    param_2 = param_2 + uVar5;
    param_4 = (void *)((int)param_4 + uVar5 * iVar1);
    *param_5 = *param_5 + uVar5;
    param_3 = param_3 - uVar5;
  }
  if (iVar4 == -1000) {
    *(ushort *)(*(int *)((int)param_1 + 100) + 0xe) =
         *(ushort *)(*(int *)((int)param_1 + 100) + 0xe) | 1;
    cVar3 = -6;
  }
  else {
    cVar3 = -5;
  }
  return (int)cVar3;
}
