/* @k10d init_object_with_three_values @ 0x104df05c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 249_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by setting three fields from helper calls and invoking a virtual
 *   method.
 * summary:
 *   The function retrieves a pointer from get_or_init_sram_block_10391bfa, passes param_2
 *   to initialize_class_instance, and stores the result of read_first_word_10391cba into
 *   param_1+4. It then calls virtual slot 2 on the stored object with argument 0.
 *   Subsequently, it writes the return values of call_two_helpers_and_return_104b45ba,
 *   call_two_helpers_and_return_104b45d0, and call_two_helpers_and_return_104b45e6 into
 *   offsets 0x74, 0x78, and 0x7c of the object. Finally, it calls
 *   dispatch_two_param_to_two_objects with the result of
 *   get_or_create_singleton_object_104b43d6 and a calculated offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_three_values(int param_1,uint32_t param_2)

{
  uint32_t uVar1;
  uint32_t *puVar2;
  int *piVar3;
  uint32_t uVar4;
  int iVar5;
  
  uVar1 = get_or_create_singleton_object_104b43d6();
  puVar2 = (uint32_t *)get_or_init_sram_block_10391bfa();
  initialize_class_instance(puVar2,param_2);
  piVar3 = (int *)read_first_word_10391cba(puVar2);
  *(int **)(param_1 + 4) = piVar3;
  (**(code **)(*piVar3 + 0x14))((int)piVar3 + (int)*(short *)(*piVar3 + 0x10),0);
  iVar5 = *(int *)(param_1 + 4);
  uVar4 = call_two_helpers_and_return_104b45ba();
  *(uint32_t *)(iVar5 + 0x74) = uVar4;
  iVar5 = *(int *)(param_1 + 4);
  uVar4 = call_two_helpers_and_return_104b45d0();
  *(uint32_t *)(iVar5 + 0x78) = uVar4;
  iVar5 = *(int *)(param_1 + 4);
  uVar4 = call_two_helpers_and_return_104b45e6();
  *(uint32_t *)(iVar5 + 0x7c) = uVar4;
  if (*(int *)(param_1 + 4) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 4) + 0x40;
  }
  dispatch_two_param_to_two_objects(uVar1,iVar5);
  return 1;
}
