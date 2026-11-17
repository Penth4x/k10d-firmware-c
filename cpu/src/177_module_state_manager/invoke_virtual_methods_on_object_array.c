/* @k10d invoke_virtual_methods_on_object_array @ 0x10483a46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Iterates through an array of object pointers, calling three virtual methods on each and
 *   passing the results to a helper function.
 * summary:
 *   The function loops through indices 0 to 23 (6 iterations of 4) of an object array
 *   accessed via module_array_getter. For each non-null object, it invokes virtual slots 8,
 *   7, and 9 (offsets 0x44, 0x4c, 0x54) and passes the return values along with a pointer
 *   from param_1+4 to copy_words_to_buffer. It also calls dispatch_param_based_on_check and
 *   dispatch_param_with_fallback with specific constants and the pointer from param_1+4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10483be6) overlaps instruction at (ram,0x10483be4)
    */

int invoke_virtual_methods_on_object_array(void *param_1)

{
  int *piVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  int iVar5;
  int iVar6;
  uint32_t uVar7;
  int iStack_38;
  
  dispatch_param_based_on_check(*(uint32_t *)((int)param_1 + 4),(void *)&DAT_10006000/*ROM*/);
  iVar6 = 0;
  iStack_38 = 6;
  while( true ) {
    piVar1 = (int *)module_array_getter(param_1,iVar6);
    if (piVar1 != (int *)0x0) {
      uVar7 = *(uint32_t *)((int)param_1 + 4);
      uVar2 = (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
      uVar3 = (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1);
      uVar4 = (**(code **)(*piVar1 + 0x54))((int)*(short *)(*piVar1 + 0x50) + (int)piVar1);
      copy_words_to_buffer(uVar7,(void *)uVar2,uVar3,uVar4);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar6 + 1);
    if (piVar1 != (int *)0x0) {
      uVar7 = *(uint32_t *)((int)param_1 + 4);
      uVar2 = (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
      uVar3 = (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1);
      uVar4 = (**(code **)(*piVar1 + 0x54))((int)*(short *)(*piVar1 + 0x50) + (int)piVar1);
      copy_words_to_buffer(uVar7,(void *)uVar2,uVar3,uVar4);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar6 + 2);
    if (piVar1 != (int *)0x0) {
      uVar7 = *(uint32_t *)((int)param_1 + 4);
      uVar2 = (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
      uVar3 = (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1);
      uVar4 = (**(code **)(*piVar1 + 0x54))((int)*(short *)(*piVar1 + 0x50) + (int)piVar1);
      copy_words_to_buffer(uVar7,(void *)uVar2,uVar3,uVar4);
    }
    piVar1 = (int *)module_array_getter(param_1,iVar6 + 3);
    if (piVar1 != (int *)0x0) {
      uVar7 = *(uint32_t *)((int)param_1 + 4);
      uVar2 = (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
      uVar3 = (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1);
      uVar4 = (**(code **)(*piVar1 + 0x54))((int)*(short *)(*piVar1 + 0x50) + (int)piVar1);
      copy_words_to_buffer(uVar7,(void *)uVar2,uVar3,uVar4);
    }
    iStack_38 = iStack_38 + -1;
    if (iStack_38 < 0) break;
    iVar6 = iVar6 + 4;
  }
  iVar6 = dispatch_param_with_fallback(*(uint32_t *)((int)param_1 + 4),(void *)&DAT_10006000/*ROM*/);
  dispatch_param_based_on_check(*(uint32_t *)((int)param_1 + 4),(char *)0x107e0000);
  piVar1 = (int *)module_array_getter(param_1,0x1c);
  if (piVar1 != (int *)0x0) {
    uVar7 = *(uint32_t *)((int)param_1 + 4);
    uVar2 = (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
    uVar3 = (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1);
    uVar4 = (**(code **)(*piVar1 + 0x54))((int)*(short *)(*piVar1 + 0x50) + (int)piVar1);
    copy_words_to_buffer(uVar7,(void *)uVar2,uVar3,uVar4);
  }
  piVar1 = (int *)module_array_getter(param_1,0x1d);
  if (piVar1 != (int *)0x0) {
    uVar7 = *(uint32_t *)((int)param_1 + 4);
    uVar2 = (**(code **)(*piVar1 + 0x4c))((int)*(short *)(*piVar1 + 0x48) + (int)piVar1);
    uVar3 = (**(code **)(*piVar1 + 0x44))((int)*(short *)(*piVar1 + 0x40) + (int)piVar1);
    uVar4 = (**(code **)(*piVar1 + 0x54))((int)*(short *)(*piVar1 + 0x50) + (int)piVar1);
    copy_words_to_buffer(uVar7,(void *)uVar2,uVar3,uVar4);
  }
  iVar5 = dispatch_param_with_fallback(*(uint32_t *)((int)param_1 + 4),(char *)0x107e0000);
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  return iVar5;
}
