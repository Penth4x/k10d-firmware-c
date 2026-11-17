/* @k10d insert_lens_fw_block @ 0x1053d4d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Inserts or merges a lens firmware block (address, size) into a sorted list of up to 10
 *   entries.
 * summary:
 *   Takes a pointer to a structure (param_1) whose field at offset 0x1c points to an array
 *   of 8-byte entries (address, size). It searches the array for an existing entry that
 *   matches param_2 (address) or param_2+param_3 (end address), merging the size if found.
 *   If no match is found, it inserts the new block at the position that maintains sorted
 *   order by address, or appends it if the list is full/empty. The context
 *   'lens_firmware_update' suggests this manages the list of firmware chunks to be written
 *   to the lens.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void insert_lens_fw_block(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 0x7fffffff;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  iVar3 = 0;
  while( true ) {
    if (9 < iVar2) {
      if (uVar4 < param_3) {
        *(int *)(iVar5 * 8 + iVar1) = param_2;
        *(uint *)(iVar1 + iVar5 * 8 + 4) = param_3;
      }
      return;
    }
    if (*(int *)(iVar1 + iVar3 + 4) + *(int *)(iVar3 + iVar1) == param_2) {
      iVar1 = iVar1 + iVar2 * 8;
      *(uint *)(iVar1 + 4) = *(int *)(iVar1 + 4) + param_3;
      return;
    }
    if (*(int *)(iVar3 + iVar1) == param_2 + param_3) {
      *(int *)(iVar2 * 8 + iVar1) = param_2;
      iVar1 = iVar1 + iVar2 * 8;
      *(uint *)(iVar1 + 4) = *(int *)(iVar1 + 4) + param_3;
      return;
    }
    if (*(int *)(iVar1 + iVar3 + 4) == 0) break;
    if (*(uint *)(iVar1 + iVar3 + 4) < uVar4) {
      uVar4 = *(uint *)(iVar1 + iVar3 + 4);
      iVar5 = iVar2;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 8;
  }
  *(int *)(iVar2 * 8 + iVar1) = param_2;
  *(uint *)(iVar1 + iVar2 * 8 + 4) = param_3;
  return;
}
