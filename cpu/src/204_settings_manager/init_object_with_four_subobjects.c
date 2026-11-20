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

uint32_t init_object_with_four_subobjects(cls_105b57ac *param_1)

{
  void *puVar1;
  uint32_t uVar2;
  int *piVar3;
  
  puVar1 = (void *)cls_105b5814_new((cls_105b5814 *)0x0);
  param_1->field_0x20 = (uint32_t)(puVar1);
  puVar1 = (void *)cls_105b5814_new((cls_105b5814 *)0x0);
  param_1->field_0x24 = (uint32_t)(puVar1);
  puVar1 = (void *)cls_105b5834_new((cls_105b5834 *)0x0);
  param_1->field_0x28 = (uint32_t)(puVar1);
  puVar1 = (void *)cls_1061e22c_new((cls_1061e22c *)0x0);
  param_1->field_0x2c = (uint32_t)(puVar1);
  puVar1 = (void*)(param_1->field_0x20);
  uVar2 = get_or_create_singleton_object_104a93d0();
  *(uint32_t *)((char*)puVar1 + 8) = uVar2;
  puVar1 = (void*)(param_1->field_0x24);
  uVar2 = get_or_create_singleton_object_10533ca8();
  *(uint32_t *)((char*)puVar1 + 8) = uVar2;
  initialize_object_with_shared_child((uint32_t)(param_1));
  initialize_subobject_with_params_1049b06c((uint32_t)(param_1));
  initialize_object_with_nested_alloc((uint32_t)(param_1));
  piVar3 = (int *)cls_105b573c_new(0);
  param_1->field_0x4 = (uint32_t)((void *)piVar3);
  uVar2 = (((vtbl_entry*)(*piVar3))[2].fn)
                    ((void *)((int)piVar3 + (int)((vtbl_entry*)(*piVar3))[2].adj),0);
  (*(code *)0x1049a9ec/*ROM*/)(param_1->field_0x4,0,param_1->field_0x8);
  (*(code *)0x1049a9ec/*ROM*/)(param_1->field_0x4,1,param_1->field_0x8);
  (*(code *)0x1049a9ec/*ROM*/)(param_1->field_0x4,2,param_1->field_0xc);
  (*(code *)0x1049a9ec/*ROM*/)(param_1->field_0x4,3,param_1->field_0x10);
  return uVar2;
}
