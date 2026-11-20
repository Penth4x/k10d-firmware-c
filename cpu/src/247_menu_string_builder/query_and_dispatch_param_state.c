/* @k10d query_and_dispatch_param_state @ 0x104dd086
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Queries state from param_2 and dispatches to virtual methods on param_3 based on the
 *   result.
 * summary:
 *   The function creates two instances of cls_105bb0b8 on the stack. It calls
 *   check_two_conditions_and_return_flag with param_2 and a string pointer; if successful,
 *   it calls query_status_and_store_result to retrieve a value. Depending on the return
 *   value of query_status_and_store_result, it either calls a virtual method with argument
 *   4 or calls two virtual methods with arguments derived from the retrieved value and 1.
 *   It also conditionally creates a second cls_105bb0b8 instance and calls
 *   check_and_process_two_params. Finally, it cleans up the stack objects via
 *   reset_vtable_and_free_if_flagged_104ddfe6 and returns 0 or 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_and_dispatch_param_state(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint32_t uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105bae44/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    iVar1 = query_status_and_store_result(param_2,&uStack_c);
    if (iVar1 == 0) {
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
    }
    else {
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7b1a/*ROM*/)(uVar2,uStack_c);
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7b2a/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_2c);
      iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105bae4c/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
