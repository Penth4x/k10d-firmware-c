/* @k10d allocate_first_free_slot @ 0x10461bde
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 138_companion_chip_driver (unit names are model-proposed)
 * purpose:
 *   Finds the first zeroed 4-byte slot in a fixed-size array and writes a value to it.
 * summary:
 *   Iterates through up to 9 slots (32 bytes) starting at offset 0x54 of the object pointed
 *   to by param_1. If a slot contains 0, it writes param_3 to that slot and returns 1. If
 *   all slots are occupied or param_2 is less than 9, it returns 0. This is a simple
 *   resource allocation or slot reservation routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t allocate_first_free_slot(void *param_1,int param_2,uint32_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 9) {
    iVar2 = 0;
    iVar3 = param_2 * 0x10;
    iVar1 = iVar3;
    do {
      if (*(int *)((int)param_1 + iVar1 + 0x54) == 0) {
        *(uint32_t *)((int)param_1 + iVar2 * 4 + iVar3 + 0x54) = param_3;
        return 1;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < iVar3 + 0x10);
  }
  return 0;
}
