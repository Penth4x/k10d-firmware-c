/* @k10d init_object_with_lazy_alloc_10390b82 @ 0x10390b82
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by calling setup routines and lazily allocating a sub-
 *   object if the pointer at offset 0x60 is null.
 * summary:
 *   The function first calls four initialization routines (init_and_register_object_pair,
 *   store_result_in_global_1036b8b0, store_result_to_global, and a function pointer at
 *   0x1036b8f2). It then checks if the pointer at param_1 + 0x60 is null. If so, it calls
 *   call_helper_with_fixed_args_10390ece on param_1 + 0x68, sets a flag at param_1 + 0x5c,
 *   calls map_param_to_small_int, and allocates a new object via
 *   get_or_create_singleton_object_1036c796 and read_array_element_bounded. The allocated
 *   pointer is stored at param_1 + 0x60. Finally, it calls invoke_virtual_method_slot_9 on
 *   the new pointer and updates the stored pointer if the call returns a different value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_lazy_alloc_10390b82(int param_1,uint32_t param_2)

{
  int *piVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  init_and_register_object_pair();
  store_result_in_global_1036b8b0();
  store_result_to_global();
  (*(code *)0x1036b8f2/*ROM*/)();
  if (*(int *)(param_1 + 0x60) == 0) {
    call_helper_with_fixed_args_10390ece((uint32_t *)(param_1 + 0x68));
    *(uint8_t *)(param_1 + 0x5c) = 1;
    uVar2 = map_param_to_small_int(param_1,param_2);
    *(uint32_t *)(param_1 + 100) = uVar2;
    uVar2 = get_or_create_singleton_object_1036c796();
    piVar1 = (int *)read_array_element_bounded(uVar2,0xf);
    *(int **)(param_1 + 0x60) = piVar1;
    uVar2 = 1;
    piVar1 = (int *)invoke_virtual_method_slot_9(piVar1);
    if (piVar1 != *(int **)(param_1 + 0x60)) {
      *(int **)(param_1 + 0x60) = piVar1;
      invoke_virtual_method_slot_9(piVar1);
    }
  }
  return uVar2;
}
