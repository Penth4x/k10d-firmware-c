/* @k10d process_event_with_two_handlers @ 0x104db4da
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Processes an event by invoking two handler objects and updating a state variable based
 *   on success.
 * summary:
 *   The function initializes two instances of cls_105bb0b8 on the stack. It calls
 *   check_two_conditions_and_return_flag with the first instance and a string pointer; if
 *   successful, it calls query_status_and_return_code to retrieve a value. Depending on the
 *   result of add_offset_by_flag or compute_struct_offset_104d6852, it may initialize a
 *   second handler instance (via check_and_process_two_params) and call
 *   call_helper_and_store_result_104d74d6. Finally, it calls a virtual method (likely a
 *   setter) with a status code (3 or 4) and cleans up the stack objects via
 *   reset_vtable_and_free_if_flagged_104ddfe6.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_two_handlers(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint32_t uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105baa60/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    iVar1 = query_status_and_return_code(param_2,&uStack_c);
    if (iVar1 == 0) {
      uVar2 = add_offset_by_flag(param_3,0);
      uVar3 = 3;
    }
    else {
      uVar2 = compute_struct_offset_104d6852(param_3,1);
      uVar3 = (*(code *)0x104d7952/*ROM*/)();
      iVar1 = call_helper_and_store_result_104d74d6((int *)(uVar3),(int)(uStack_c));
      if (iVar1 != 0) {
        uVar2 = (*(code *)0x104d7952/*ROM*/)(uVar2);
        (*(code *)0x104d752e/*ROM*/)(uVar2,1);
        cls_105bb0b8_new(&cStack_2c);
        iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105baa6c/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        goto LAB_104db5b4;
      }
      uVar2 = add_offset_by_flag(param_3,0);
      uVar3 = 4;
    }
    (*(code *)0x104d7eb2/*ROM*/)(uVar2,uVar3);
  }
LAB_104db5b4:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
