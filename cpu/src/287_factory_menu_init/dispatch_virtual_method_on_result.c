/* @k10d dispatch_virtual_method_on_result @ 0x1052be1e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 287_factory_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructs a temporary object, calls a helper, and dispatches to a virtual method based
 *   on a status check.
 * summary:
 *   The function initializes a local object (cls_105bb0b8) and populates it via
 *   initialize_pointer_pair_struct_104de052. It then calls validate_and_copy_string with a
 *   pointer to a vtable (0x105f9fdc) and checks the return value. If zero, it invokes
 *   virtual slot 3 (offset 0x1c) of an object returned by FUN_10521ff0; otherwise, it
 *   invokes virtual slot 2 (offset 0x14). Finally, it calls virtual slot 1 of the local
 *   object (reset_vtable_and_free_if_flagged_104ddfe6) with argument 2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_on_result(uint32_t param_1,uint32_t param_2,char *param_3)

{
  uint32_t uVar1;
  int *piVar2;
  int iVar3;
  uintptr_t sp;
  uint8_t auStack_2c [32];
  uint32_t uStack_c;
  
  uStack_c = 0;
  uVar1 = (*(code *)0x104de4e6/*ROM*/)(param_2,&uStack_c);
  cls_105bb0b8_new((void *)auStack_2c);
  initialize_pointer_pair_struct_104de052((void *)auStack_2c,param_3);
  get_or_create_singleton_object_10521e8e();
  piVar2 = (int *)(*(code *)0x10521ff0/*ROM*/)();
  iVar3 = validate_and_copy_string((void *)auStack_2c,(void *)0x105f9fdc/*ROM*/);
  if (iVar3 == 0) {
    (**(code **)(*piVar2 + 0x1c))((int)*(short *)(*piVar2 + 0x18) + (int)piVar2,uVar1,uStack_c);
  }
  else {
    (**(code **)(*piVar2 + 0x14))((int)*(short *)(*piVar2 + 0x10) + (int)piVar2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_2c,2);
  return 1;
}
