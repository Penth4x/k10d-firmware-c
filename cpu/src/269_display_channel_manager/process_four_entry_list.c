/* @k10d process_four_entry_list @ 0x1050825e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a 4-entry array, calling a virtual method on an object for each non-null
 *   entry.
 * summary:
 *   The function loops four times, checking a flag at offset 0x1c and a pointer at offset
 *   0x20 of the param_2 array. For valid entries, it calls format_string_to_buffer_10545140
 *   to prepare a buffer, then invokes virtual slots 3, 5, and 4 on the object at
 *   param_1+0x300. The specific camera subsystem is not identifiable from the provided
 *   pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_four_entry_list(int param_1,void *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int iStack_6c;
  uint8_t auStack_5c [80];
  uint32_t uStack_c;
  
  iVar3 = 0;
  iStack_6c = 4;
  iVar2 = 0;
  do {
    if (*(char *)((int)param_2 + iVar3 + 0x1c) != '\0') {
      uStack_c = 0;
      if ((*(int *)((int)param_2 + iVar2 + 0x20) != 0) &&
         (**(int **)((int)param_2 + iVar2 + 0x20) != 0)) {
        format_string_to_buffer_10545140(auStack_5c,(char *)0x105d52d4/*ROM*/,
                     (void *)(*(int *)((int)param_2 + iVar2 + 0x20) + 8),param_3);
        iVar4 = **(int **)(param_1 + 0x300);
        iVar4 = (**(code **)(iVar4 + 0x2c))
                          ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar4 + 0x28),
                           auStack_5c,0,&uStack_c);
        if (iVar4 != 0) {
          if (*(int *)(*(int *)((int)param_2 + iVar2 + 0x20) + 0x58) != 0) {
            iVar4 = **(int **)(param_1 + 0x300);
            (**(code **)(iVar4 + 0x44))
                      ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar4 + 0x40),uStack_c,
                       *(uint32_t *)(*(int *)((int)param_2 + iVar2 + 0x20) + 0x5c),
                       *(uint32_t *)(*(int *)((int)param_2 + iVar2 + 0x20) + 0x58));
          }
          iVar4 = **(int **)(param_1 + 0x300);
          (**(code **)(iVar4 + 0x44))
                    ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar4 + 0x40),uStack_c,
                     *(uint32_t *)(*(int *)((int)param_2 + iVar2 + 0x20) + 4),
                     **(uint32_t **)((int)param_2 + iVar2 + 0x20));
        }
        iVar4 = **(int **)(param_1 + 0x300);
        (**(code **)(iVar4 + 0x34))
                  ((int)*(int **)(param_1 + 0x300) + (int)*(short *)(iVar4 + 0x30),uStack_c);
      }
    }
    iVar3 = iVar3 + 1;
    iVar4 = iStack_6c + -1;
    bVar1 = 0 < iStack_6c;
    iVar2 = iVar2 + 4;
    iStack_6c = iVar4;
  } while (bVar1 && iVar4 != 0);
  return;
}
