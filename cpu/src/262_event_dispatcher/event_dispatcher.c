/* @k10d event_dispatcher @ 0x104fb05c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_event_to_handlers)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Scans a table of 8 event-handler pairs and invokes the matching handler's virtual
 *   method for the given event ID.
 * summary:
 *   Iterates through 8 entries in a structure starting at param_1. For each entry, it
 *   checks if the event ID at offset 0x88+4*i matches param_2. If it matches and the
 *   handler object pointer at offset 8+4*i is non-null, it calls virtual slot 2 (vtable
 *   offset 0x14) on that object, passing the adjusted this pointer, the event ID, and
 *   param_3. The return value of the last matching handler call is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t event_dispatcher(void *param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iStack_10;
  
  uVar2 = 0;
  iStack_10 = 7;
  iVar3 = 0;
  do {
    if ((*(int *)((int)param_1 + iVar3 + 0x88) == param_2) &&
       (piVar1 = *(int **)((int)param_1 + iVar3 + 8), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)((int)param_1 + iVar3 + 0x8c) == param_2) &&
       (piVar1 = *(int **)((int)param_1 + iVar3 + 0xc), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)((int)param_1 + iVar3 + 0x90) == param_2) &&
       (piVar1 = *(int **)((int)param_1 + iVar3 + 0x10), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)((int)param_1 + iVar3 + 0x94) == param_2) &&
       (piVar1 = *(int **)((int)param_1 + iVar3 + 0x14), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    iStack_10 = iStack_10 + -1;
    iVar3 = iVar3 + 0x10;
  } while (-1 < iStack_10);
  return uVar2;
}
