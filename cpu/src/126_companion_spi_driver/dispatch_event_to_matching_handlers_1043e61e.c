/* @k10d dispatch_event_to_matching_handlers_1043e61e @ 0x1043e61e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Iterates through a table of handler entries and invokes the virtual method at slot 2 of
 *   any handler whose ID matches param_2.
 * summary:
 *   The function loops 7 times over a structure at param_1, checking four ID fields (at
 *   offsets 0x8c, 0x90, 0x94, 0x98) against param_2. For each match, it dereferences the
 *   corresponding handler pointer (at offsets 0xc, 0x10, 0x14, 0x18) and calls the virtual
 *   function at vtable offset 0x14 (slot 2) with the handler object, param_2, and param_3.
 *   It returns the result of the last matching handler call, or 0 if no matches were found.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_to_matching_handlers_1043e61e(int param_1,int param_2,uint32_t param_3)

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
      uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                        ((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)(iVar4 + iVar3 + 4) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3 + 4), piVar1 != (int *)0x0)) {
      uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                        ((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)(iVar4 + iVar3 + 8) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3 + 8), piVar1 != (int *)0x0)) {
      uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                        ((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    if ((*(int *)(iVar4 + iVar3 + 0xc) == param_2) &&
       (piVar1 = *(int **)(iVar5 + iVar3 + 0xc), piVar1 != (int *)0x0)) {
      uVar2 = (((vtbl_entry*)(*piVar1))[2].fn)
                        ((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1,param_2,param_3);
    }
    uStack_10 = uStack_10 + -1;
    iVar3 = iVar3 + 0x10;
  } while (-1 < uStack_10);
  return uVar2;
}
