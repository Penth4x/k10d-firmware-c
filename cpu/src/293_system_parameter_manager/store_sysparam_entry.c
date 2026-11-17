/* @k10d store_sysparam_entry @ 0x10535ffe
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Writes a 16-byte system parameter record to a destination buffer and updates a block's
 *   free-space accounting.
 * summary:
 *   The function copies 16 bytes from a stack buffer into param_1. It then uses param_2 as
 *   a pointer to a block descriptor, reading a base pointer at offset 4 and a free-space
 *   counter at offset 0x10. It calls write_little_endian_bytes to update metadata at
 *   offsets 8 and 0xc of the block, passing status codes (0, 1, or 2) and the remaining
 *   free space. The source module is identified as system_parameter_store, which handles
 *   SYSPARAM.TXT and STOREPREBAYER/STOREGEN/STORECPU/STOREAE sections.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_sysparam_entry(void *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  
  iVar1 = *(int *)(param_2 + 4);
  if ((*(uint *)(param_2 + 0x10) == 0) || (param_4 <= *(uint *)(param_2 + 0x10))) {
    if (param_3 != 0) {
      write_little_endian_bytes(iVar1 + 0xc,0,1);
    }
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar2 = *(int *)(param_2 + 0x10) - param_4;
      *(int *)(param_2 + 0x10) = iVar2;
      write_little_endian_bytes(iVar1 + 8,iVar2,4);
    }
  }
  else {
    write_little_endian_bytes(iVar1 + 0xc,2,1);
  }
  iVar1 = 8;
  do {
    iVar2 = iVar1 + -4;
    *(uint32_t *)(iVar2 + (int)param_1) = *(uint32_t *)(&stack0xffffffe8 + iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0);
  return;
}
