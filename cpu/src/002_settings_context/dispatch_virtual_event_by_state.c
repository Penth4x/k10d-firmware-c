/* @k10d dispatch_virtual_event_by_state @ 0x103636b0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Dispatches a virtual method call on an object pointer based on a state field at offset
 *   0x204.
 * summary:
 *   The function reads a 4-byte state value from param_1 + 0x204 and branches on it. For
 *   state 0, it dereferences a pointer at param_1 + 0x70, reads a short offset from the
 *   target object, and calls a virtual method (slot derived from offset 0xd4) passing a
 *   computed this-pointer and a value from read_byte_at_offset_five_1051e50e. For state 1,
 *   it performs a more complex sequence of virtual calls (slots derived from offsets 0xfc,
 *   0x104, 0x10c) comparing results to param_2. For state 3, it returns a constant
 *   0x304000a. The function acts as a state-dependent event dispatcher or handler.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_event_by_state(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  uint8_t uVar4;
  int iVar3;
  uint32_t uVar5;
  
  uVar5 = 0;
  switch(*(uint32_t *)(param_1 + 0x204)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x70);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      sVar1 = *(short *)(iVar3 + 0xd0);
      uVar4 = read_byte_at_offset_five_1051e50e(param_1 + 0x1c);
      uVar5 = (**(code **)(iVar3 + 0xd4))((int)sVar1 + (int)piVar2,uVar4);
    }
    break;
  case 1:
    piVar2 = *(int **)(param_1 + 0x70);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0xfc))((int)*(short *)(*piVar2 + 0xf8) + (int)piVar2);
      piVar2 = *(int **)(param_1 + 0x70);
      if (param_2 == iVar3) {
        uVar5 = (**(code **)(*piVar2 + 0x104))((int)piVar2 + (int)*(short *)(*piVar2 + 0x100));
      }
      else {
        iVar3 = (**(code **)(*piVar2 + 0x104))((int)piVar2 + (int)*(short *)(*piVar2 + 0x100));
        if (param_2 == iVar3) {
          iVar3 = **(int **)(param_1 + 0x70);
          uVar5 = (**(code **)(iVar3 + 0x10c))
                            ((int)*(int **)(param_1 + 0x70) + (int)*(short *)(iVar3 + 0x108));
        }
      }
    }
    break;
  case 3:
    uVar5 = 0x304000a;
  }
  return uVar5;
}
