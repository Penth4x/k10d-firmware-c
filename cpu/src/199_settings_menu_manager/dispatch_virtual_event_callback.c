/* @k10d dispatch_virtual_event_callback @ 0x1049501e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object stored in a struct field, passing a computed
 *   offset and a global pointer.
 * summary:
 *   The function reads a pointer from offset 0x10 of the input struct. If non-null, it
 *   performs a virtual call on the object at that pointer using the vtable entry at offset
 *   0x2c. It passes a value derived from offset 0x28 of the object, a result from another
 *   virtual call on a different object (at offset 0xc of the input), and a pointer from
 *   offset 0x7c (or a global if null). It then clears the field at offset 0x7c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_callback(int param_1)

{
  short sVar1;
  int *piVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    sVar1 = *(short *)(iVar5 + 0x28);
    uVar3 = (**(code **)(*(int *)(param_1 + 0xc) + 0x8c))
                      (*(short *)(*(int *)(param_1 + 0xc) + 0x88) + param_1);
    iVar4 = *(int *)(param_1 + 0x7c);
    if (*(int *)(param_1 + 0x7c) == 0) {
      iVar4 = iRam80010500;
    }
    (**(code **)(iVar5 + 0x2c))((int)sVar1 + (int)piVar2,uVar3,iVar4);
    *(uint32_t *)(param_1 + 0x7c) = 0;
  }
  return;
}
