/* @k10d iterate_and_invoke_virtual_methods @ 0x104754ea
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Loops over a range of indices, calling virtual methods on objects retrieved from a
 *   container.
 * summary:
 *   The function iterates from a start value (param_1+0x28 + 100) to an end value
 *   (param_1+0x2a + 100). In each iteration, it calls get_bounded_array_element to get an
 *   object pointer. If the object is valid, it invokes virtual slot 3 (offset 0x1c) and, if
 *   that returns 0, invokes virtual slot 1 (offset 0xc) with argument 3. It then calls
 *   decrement_timer_and_rearm with the current index. The specific subsystem is not
 *   identifiable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void iterate_and_invoke_virtual_methods(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  
  uVar3 = *(short *)(param_1 + 0x28) + 100;
  if (uVar3 <= (ushort)(*(short *)(param_1 + 0x2a) + 100U)) {
    do {
      piVar1 = (int *)get_bounded_array_element((int *)(param_1 + 0xc));
      if ((piVar1 != (int *)0x0) &&
         (iVar2 = (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1),
         iVar2 == 0)) {
        (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
        decrement_timer_and_rearm((int *)(param_1 + 0xc),uVar3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (ushort)(*(short *)(param_1 + 0x2a) + 100U));
  }
  return;
}
