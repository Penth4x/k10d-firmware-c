/* @k10d iterate_object_array_for_nonzero_result @ 0x104e4c3e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Iterates through an array of object pointers, calling a virtual method on each until
 *   one returns non-zero.
 * summary:
 *   The function reads a current index from offset 0x20 and a limit from offset 0x1c of the
 *   input structure. It loops through an array of pointers located at offset 0x40, checking
 *   if each pointer is non-NULL. For valid pointers, it calls a function at 0x104e3858
 *   (likely a lock or state check) and then invokes a virtual method (slot 3) on the
 *   object. The loop breaks if the virtual call returns non-zero. The final index is stored
 *   back to offset 0x20, and the result of the last virtual call is returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104e4c8e) overlaps instruction at (ram,0x104e4c8c)
    */

int iterate_object_array_for_nonzero_result(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x20) + 1;
  iVar4 = 0;
  if (iVar3 < *(int *)(param_1 + 0x1c)) {
    iVar2 = iVar3 * 4;
    do {
      if (((*(int *)(*(int *)(param_1 + 0x40) + iVar2) != 0) &&
          (iVar1 = (*(code *)0x104e3858/*ROM*/)(), iVar1 != 0)) &&
         (iVar4 = *(int *)(*(int *)(param_1 + 0x40) + iVar2), iVar1 = *(int *)(iVar4 + 0x18),
         iVar4 = (((vtbl_entry*)(iVar1))[3].fn)(iVar4 + ((vtbl_entry*)(iVar1))[3].adj), iVar4 != 0)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  *(int *)(param_1 + 0x20) = iVar3;
  return iVar4;
}
