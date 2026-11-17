/* @k10d osdc_event_dispatch @ 0x1043cec4
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed dispatch_event_to_subscribers)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates a 32-slot subscriber table and invokes the virtual handler for any slot whose
 *   ID matches the given event.
 * summary:
 *   The function loops 7 times over a 4-slot block (32 total) within the object pointed to
 *   by param_1. For each slot, it compares the ID at offset 0x8c against param_2. If they
 *   match and the handler object pointer at offset 0xc is non-null, it performs a virtual
 *   call to slot 2 (vtable offset 0x14) on that handler object, passing the event ID and
 *   param_3. The return value of the last matching handler call is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t osdc_event_dispatch(int param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uStack_10;
  
  uVar2 = 0;
  uStack_10 = 7;
  iVar3 = 0;
  iVar5 = param_1 + 0xc;
  do {
    iVar4 = param_1 + 0x8c;
    if ((*(int *)(iVar4 + iVar3) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)(iVar4 + iVar3 + 4) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3 + 4), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)(iVar4 + iVar3 + 8) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3 + 8), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)(iVar4 + iVar3 + 0xc) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3 + 0xc), piVar1 != (int *)0x0)) {
      uVar2 = (**(code **)(*piVar1 + 0x14))
                        ((int)*(short *)(*piVar1 + 0x10) + (int)piVar1,param_2,param_3);
    }
    uStack_10 = uStack_10 + -1;
    iVar3 = iVar3 + 0x10;
  } while (-1 < uStack_10);
  return uVar2;
}
