/* @k10d destroy_object_with_two_lists @ 0x104b25c2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Destroys an object by invoking virtual slot 1 on entries in two internal pointer
 *   arrays, then frees the arrays and optionally the object itself.
 * summary:
 *   The function nulls out param_1[5], then iterates over two pointer arrays stored at
 *   param_1[4] (2 entries) and *param_1 (16 entries). For each non-null pointer, it calls
 *   virtual slot 1 (offset 0xc) with a this-adjustment and argument 3, then nulls the slot.
 *   It calls heap_free_2 on the array pointers and zero_four_words_and_maybe_free on
 *   param_1[2]. Finally, if param_2 bit 0 is set, it frees the object via heap_free. This
 *   is a standard C++ destructor pattern for an object containing two fixed-size arrays of
 *   polymorphic elements.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destroy_object_with_two_lists(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    param_1[5] = 0;
    iVar2 = 2;
    do {
      iVar2 = iVar2 + -1;
      piVar1 = *(int **)(param_1[4] + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
      *(uint32_t *)(param_1[4] + iVar2 * 4) = 0;
    } while (iVar2 != 0);
    heap_free_2(param_1[4]);
    param_1[3] = 0;
    zero_four_words_and_maybe_free((int *)param_1[2],3);
    heap_free_2(param_1[1]);
    iVar2 = 0x10;
    do {
      iVar2 = iVar2 + -1;
      piVar1 = *(int **)(*param_1 + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
      }
      *(uint32_t *)(*param_1 + iVar2 * 4) = 0;
    } while (iVar2 != 0);
    heap_free_2(*param_1);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
