/* @k10d dispatch_event_handler @ 0x1047b2be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_handler(void *param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  
  *(void **)((int)param_1 + 0x70) = param_2;
  iVar4 = 0;
  if (iRam105aa740 != 0) {
    iVar2 = 0;
    do {
      if (*(int *)((int)param_2 + 4) == *(int *)(iVar2 + 0x105aa740/*ROM*/)) {
        piVar5 = (int *)((int)param_1 + 0x34);
        initialize_struct_header(piVar5);
        iVar4 = iVar4 * 0x10;
        iVar2 = (int)*(short *)(iVar4 + 0x105aa748/*ROM*/) + (int)param_1;
        pcVar1 = *(code **)(iVar4 + 0x105aa74c/*ROM*/);
        if (-1 < *(short *)(iVar4 + 0x105aa74a/*ROM*/)) {
          psVar6 = (short *)(*(int *)((short)pcVar1 + iVar2) + *(short *)(iVar4 + 0x105aa74a/*ROM*/) * 8);
          iVar2 = *psVar6 + iVar2;
          pcVar1 = *(code **)(psVar6 + 2);
        }
        (*pcVar1)(iVar2);
        piVar3 = *(int **)(*(int *)((int)param_1 + 0x70) + 8);
        iVar2 = *piVar3;
        (((vtbl_entry*)(iVar2))[2].fn)
                  ((int)piVar3 + (int)((vtbl_entry*)(iVar2))[2].adj,*(uint32_t *)(iVar4 + 0x105aa744/*ROM*/),
                   piVar5);
        if (*piVar5 == 1) {
          set_mode_flag_from_state(param_1);
        }
        break;
      }
      piVar5 = (int *)(iVar2 + 0x105aa750/*ROM*/);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x10;
    } while (*piVar5 != 0);
  }
  free_object_if_flag_set_1052107a(*(void **)((int)param_1 + 0x70),3);
  *(uint32_t *)((int)param_1 + 0x70) = 0;
  return;
}
