/* @k10d initialize_subobject_and_invoke_slot2 @ 0x1047c942
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a sub-object, stores it at offset 4, and invokes virtual slot 2 of that sub-
 *   object with a prepared argument.
 * summary:
 *   The function calls cls_105aa8bc_new(0) and stores the result in param_1+4. It then
 *   calls init_pair_zero_minus_one, retrieves a pointer via
 *   get_or_create_sram_object_104816ee, and uses forward_second_field_call to populate a
 *   local array. Finally, it performs a virtual call to slot 2 of the newly allocated sub-
 *   object (using the this-adjustment idiom) and calls free_if_flag_set_1047c8f8 before
 *   returning the virtual call's result. The specific camera subsystem role is not
 *   determinable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_subobject_and_invoke_slot2(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  int aiStack_10 [2];
  
  uVar1 = (uint32_t)(cls_105aa8bc_new(0));
  *(uint32_t *)((int)param_1 + 4) = uVar1;
  init_pair_zero_minus_one(aiStack_10);
  iVar2 = get_or_create_sram_object_104816ee();
  aiStack_10[0] = forward_second_field_call(*(void **)(iVar2 + 0xc));
  aiStack_10[1] = 0;
  iVar2 = **(int **)((int)param_1 + 4);
  uVar1 = (((vtbl_entry*)(iVar2))[2].fn)
                    ((int)*(int **)((int)param_1 + 4) + (int)((vtbl_entry*)(iVar2))[2].adj,aiStack_10);
  free_if_flag_set_1047c8f8(aiStack_10,2);
  return uVar1;
}
