/* @k10d settings_notify_event @ 0x1045eada
 * name: verified (structural evidence: d313: decompile; slot 0x8c of cls_105a6a14; runtime: index 22 ('A') reaches the screen manager's handle_0xa0015_event)
 * unit: 131_settings_manager (unit names are model-proposed)
 * purpose:
 *   Notify the listeners registered for a status index with event 0xa0001+index (table
 *   0x105a5e38).
 * summary:
 *   VERIFIED: d313: decompile; slot 0x8c of cls_105a6a14; runtime: index 22 ('A') reaches
 *   the screen manager's handle_0xa0015_event
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void settings_notify_event(int param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_14;
  
  if (param_2 < 0x19) {
    iStack_14 = 1;
    iVar3 = param_2 << 4;
    do {
      iVar4 = param_1 + 0x1ac;
      piVar1 = *(int **)(iVar4 + iVar3);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
         iVar2 != 0)) {
        iVar2 = **(int **)(iVar4 + iVar3);
        (((vtbl_entry*)(iVar2))[3].fn)
                  ((int)*(int **)(iVar4 + iVar3) + (int)((vtbl_entry*)(iVar2))[3].adj,
                   *(uint32_t *)(param_2 * 4 + 0x105a5e38/*ROM*/),param_3);
      }
      piVar1 = *(int **)(iVar4 + iVar3 + 4);
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1),
         iVar2 != 0)) {
        piVar1 = *(int **)(iVar4 + iVar3 + 4);
        iVar4 = *piVar1;
        (((vtbl_entry*)(iVar4))[3].fn)
                  ((int)piVar1 + (int)((vtbl_entry*)(iVar4))[3].adj,
                   *(uint32_t *)(param_2 * 4 + 0x105a5e38/*ROM*/),param_3);
      }
      iStack_14 = iStack_14 + -1;
      iVar3 = iVar3 + 8;
    } while (-1 < iStack_14);
    if ((0 < *(int *)(param_1 + 0x28)) &&
       (param_2 == *(int *)((*(int *)(param_1 + 0x28) + -1) * 4 + 0x105a5e9c/*ROM*/))) {
      invoke_listener_slot_two((int *)(param_1 + 0x1c));
    }
  }
  return;
}
