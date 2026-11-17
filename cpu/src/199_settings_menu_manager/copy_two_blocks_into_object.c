/* @k10d copy_two_blocks_into_object @ 0x10494f30
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Copies two 8-byte blocks from helper outputs into offsets 0x80 and 0xa4 of the object
 *   and sets a flag byte.
 * summary:
 *   The function calls two unnamed helpers (0x1045c290, 0x1045bce8) to produce two 8-byte
 *   buffers on the stack, then copies each into the object at param_1+0x80 and param_1+0xa4
 *   via 4-byte word loops. It calls copy_eight_bytes_1045bf68 with (param_1+0x80, param_2),
 *   sets byte param_1+9 to 1, and calls free_heap_block_if_flagged_1045bc54 on the stack
 *   buffers (likely a free/destroy). No camera-specific subsystem is evident from the code
 *   or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_blocks_into_object(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  void *pvStack_34;
  uint8_t auStack_30 [4];
  uint32_t uStack_2c;
  uint8_t auStack_28 [4];
  uint32_t uStack_24;
  uint8_t auStack_20 [24];
  
  pvStack_34 = (void *)(param_1 + 0x80);
  (*(code *)0x1045c290/*ROM*/)(auStack_28);
  (*(code *)0x1045bce8/*ROM*/)(auStack_30,param_2,auStack_28);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)&uStack_24 + iVar2) = *(uint32_t *)(auStack_30 + iVar2 + -4);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_block_if_flagged_1045bc54(auStack_30,2);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  copy_eight_bytes_1045bf68(pvStack_34,param_2);
  (*(code *)0x1045bc90/*ROM*/)(auStack_28,param_1 + 0xa4,auStack_20);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_1 + 0xa4) = *(uint32_t *)((int)&uStack_2c + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  *(uint8_t *)(param_1 + 9) = 1;
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  return;
}
