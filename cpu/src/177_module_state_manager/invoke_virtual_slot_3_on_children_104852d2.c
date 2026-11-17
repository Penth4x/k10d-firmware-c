/* @k10d invoke_virtual_slot_3_on_children_104852d2 @ 0x104852d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over four child object pointers in the struct and calls their virtual slot 3
 *   with a boolean flag derived from a callee.
 * summary:
 *   The function calls heap_alloc_one_byte_1045926e and return_pentax_corp_string_ptr to
 *   obtain a pointer, then passes it to compare_buffer_bytes with a constant address and
 *   size 6 to generate a boolean flag. It loops through four pointers at offsets 0x04,
 *   0x08, 0x0c, and 0x10 in param_1, calling virtual slot 3 (offset 0x1c) on each non-null
 *   object with the flag. Finally, it calls virtual slot 3 on the object at offset 0x24
 *   with 0 and returns the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_3_on_children_104852d2(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  bool bVar6;
  uint8_t uStack_9;
  
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  pvVar2 = (void *)return_pentax_corp_string_ptr((int)&uStack_9);
  iVar3 = compare_buffer_bytes(pvVar2,(void *)0x105ab95c/*ROM*/,6);
  bVar6 = iVar3 != 0;
  iVar5 = 1;
  iVar3 = 0;
  do {
    piVar1 = *(int **)((int)param_1 + iVar3 + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,bVar6);
    }
    piVar1 = *(int **)((int)param_1 + iVar3 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,bVar6);
    }
    piVar1 = *(int **)((int)param_1 + iVar3 + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,bVar6);
    }
    piVar1 = *(int **)((int)param_1 + iVar3 + 0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))((int)*(short *)(*piVar1 + 0x18) + (int)piVar1,bVar6);
    }
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 0x10;
  } while (-1 < iVar5);
  iVar3 = **(int **)((int)param_1 + 0x24);
  uVar4 = (**(code **)(iVar3 + 0x1c))
                    ((int)*(int **)((int)param_1 + 0x24) + (int)*(short *)(iVar3 + 0x18),0);
  heap_free_if_flagged(&uStack_9,2);
  return uVar4;
}
