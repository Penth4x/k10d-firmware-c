/* @k10d dispatch_on_string_lookup @ 0x104dcd9a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, performs a series of string lookups, and dispatches to one
 *   of several handlers based on the first successful match.
 * summary:
 *   The function initializes a stack-allocated object (cls_105bb0b8) and calls
 *   call_helper_with_saved_field with param_2. If that returns 0, it calls a cleanup method
 *   (slot 1) and returns 0. Otherwise, it sequentially calls validate_and_copy_string with
 *   five different string pointers (0x105bade4, 0x105badec, 0x105badf8, 0x105bae00,
 *   0x105bae0c). The first call that returns non-zero determines which of five handler
 *   functions (process_two_config_entries_104dce94 through
 *   configure_two_objects_and_dispatch) is invoked with param_1, param_2, and param_3. If
 *   all lookups fail, try_two_step_operation is called. The temporary object is cleaned up
 *   before returning the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_string_lookup(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_28);
  iVar1 = call_helper_with_saved_field(param_2,&cStack_28);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
    uVar2 = 0;
  }
  else {
    iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bade4/*ROM*/));
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105badec/*ROM*/));
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105badf8/*ROM*/));
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bae00/*ROM*/));
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105bae0c/*ROM*/));
            if (iVar1 == 0) {
              uVar2 = try_two_step_operation(param_1,param_2);
            }
            else {
              uVar2 = configure_two_objects_and_dispatch(param_1,param_2,param_3);
            }
          }
          else {
            uVar2 = initialize_five_objects_and_dispatch(param_1,param_2,param_3);
          }
        }
        else {
          uVar2 = query_and_dispatch_param_state(param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = init_three_objects_with_params_104dcf7a(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = process_two_config_entries_104dce94(param_1,param_2,param_3);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
  }
  return uVar2;
}
