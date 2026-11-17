/* @k10d init_object_with_four_subobjects @ 0x1049acd8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and initializes four sub-objects within the target structure and configures a
 *   linked list.
 * summary:
 *   The function allocates four new objects using specific class constructors and stores
 *   their pointers at offsets 0x20, 0x24, 0x28, and 0x2c of the input parameter. It then
 *   initializes internal fields of the first two sub-objects by calling helper functions.
 *   Finally, it allocates a fifth object, stores it at offset 4, and performs a series of
 *   virtual calls and direct function calls to configure the structure's state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_four_subobjects(int param_1)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = (uint32_t)cls_105b5814_new(0);
  *(uint32_t *)(param_1 + 0x20) = uVar1;
  uVar1 = (uint32_t)cls_105b5814_new(0);
  *(uint32_t *)(param_1 + 0x24) = uVar1;
  uVar1 = (uint32_t)cls_105b5834_new(0);
  *(uint32_t *)(param_1 + 0x28) = uVar1;
  uVar1 = (uint32_t)cls_1061e22c_new(0);
  *(uint32_t *)(param_1 + 0x2c) = uVar1;
  iVar3 = *(int *)(param_1 + 0x20);
  uVar1 = get_or_create_singleton_object_104a93d0();
  *(uint32_t *)(iVar3 + 8) = uVar1;
  iVar3 = *(int *)(param_1 + 0x24);
  uVar1 = get_or_create_singleton_object_10533ca8();
  *(uint32_t *)(iVar3 + 8) = uVar1;
  initialize_object_with_shared_child(param_1);
  initialize_subobject_with_params_1049b06c(param_1);
  initialize_object_with_nested_alloc(param_1);
  piVar2 = (int *)cls_105b573c_new(0);
  *(int **)(param_1 + 4) = piVar2;
  uVar1 = (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10),0);
  (*(code *)0x1049a9ec/*ROM*/)(*(uint32_t *)(param_1 + 4),0,*(uint32_t *)(param_1 + 8));
  (*(code *)0x1049a9ec/*ROM*/)(*(uint32_t *)(param_1 + 4),1,*(uint32_t *)(param_1 + 8));
  (*(code *)0x1049a9ec/*ROM*/)(*(uint32_t *)(param_1 + 4),2,*(uint32_t *)(param_1 + 0xc));
  (*(code *)0x1049a9ec/*ROM*/)(*(uint32_t *)(param_1 + 4),3,*(uint32_t *)(param_1 + 0x10));
  return uVar1;
}
