/* @k10d query_child_object_flag @ 0x104b2f48
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Resets a field and calls a virtual method on a child object to check a boolean status.
 * summary:
 *   The function first calls an external function at 0x104ad2ea with the value at offset
 *   0xc of the input object. It then clears the field at offset 0x18. It retrieves a
 *   pointer from offset 8 and, if non-null, invokes virtual slot 3 (offset 0x1c) on that
 *   object. The return value is 1 if the virtual call returns a non-zero value with bit 0
 *   set, or if the pointer is null; otherwise it is 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_child_object_flag(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint32_t uVar3;
  
  (*(code *)0x104ad2ea/*ROM*/)(*(uint32_t *)(param_1 + 0xc),0,0,0);
  *(uint32_t *)(param_1 + 0x18) = 0;
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = 1;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,0);
    uVar3 = 1;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}
