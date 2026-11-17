/* @k10d process_pending_event_list @ 0x104e604a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a linked list of event pointers and dispatches each non-null entry via a
 *   callback.
 * summary:
 *   The function reads a list head from param_1+0x40 and walks up to param_4 entries
 *   starting at index param_2-100. For each non-null 4-byte entry, it calls an unknown
 *   function at 0x104e3858 (likely a validity or lock check) and, if that returns non-zero,
 *   calls a dispatch function at 0x104e62b2 with the list head and the entry value. The
 *   loop is unrolled by 3 for performance. No camera-specific subsystem is identifiable
 *   from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_pending_event_list(void *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  
  if (param_4 != 0) {
    uVar5 = *(uint32_t *)(*(int *)((int)param_1 + 0x40) + (param_2 + -100) * 4);
    uVar2 = (param_3 - 1) + param_4;
    if (param_3 <= uVar2) {
      iVar4 = (uVar2 - param_3) + -2;
      iVar3 = uVar2 * 4;
      if (2 < iVar4) {
        do {
          if ((*(int *)(*(int *)((int)param_1 + 0x40) + iVar3) != 0) &&
             (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) {
            (*(code *)0x104e62b2/*ROM*/)(uVar5,*(uint32_t *)(*(int *)((int)param_1 + 0x40) + iVar3));
          }
          if ((*(int *)(*(int *)((int)param_1 + 0x40) + iVar3 + -4) != 0) &&
             (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) {
            (*(code *)0x104e62b2/*ROM*/)(uVar5,*(uint32_t *)(*(int *)((int)param_1 + 0x40) + iVar3 + -4))
            ;
          }
          if ((*(int *)(*(int *)((int)param_1 + 0x40) + iVar3 + -8) != 0) &&
             (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) {
            (*(code *)0x104e62b2/*ROM*/)(uVar5,*(uint32_t *)(*(int *)((int)param_1 + 0x40) + iVar3 + -8))
            ;
          }
          iVar4 = iVar4 + -3;
          iVar3 = iVar3 + -0xc;
        } while (-1 < iVar4);
      }
      for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
        if ((*(int *)(*(int *)((int)param_1 + 0x40) + iVar3) != 0) &&
           (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) {
          (*(code *)0x104e62b2/*ROM*/)(uVar5,*(uint32_t *)(*(int *)((int)param_1 + 0x40) + iVar3));
        }
        iVar3 = iVar3 + -4;
      }
    }
  }
  return;
}
