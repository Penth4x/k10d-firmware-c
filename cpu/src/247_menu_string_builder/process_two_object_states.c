/* @k10d process_two_object_states @ 0x104db2ce
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Initializes two cls_105bb0b8 objects from param_2 and conditionally updates a third
 *   state via helper calls.
 * summary:
 *   The function constructs two instances of cls_105bb0b8 on the stack (auStack_4c and
 *   auStack_2c). It calls check_two_conditions_and_return_flag and
 *   check_and_process_two_params to initialize these objects using param_2 and specific
 *   string pointers (0x105baa28, 0x105baa38). If the first initialization succeeds, it
 *   checks a condition via get_upper_half_of_result; if true, it performs a sequence of
 *   operations involving compute_struct_offset_104d6852,
 *   call_helper_and_store_result_104d71d6, and virtual calls, potentially setting a status
 *   code (1, 3, or 4) passed to store_value_at_offset_0x20_104d7eb2. Finally, it calls the
 *   virtual method slot 1 (reset_vtable_and_free_if_flagged_104ddfe6) on both objects to
 *   clean them up or finalize their state, returning 1 on a specific success path and 0
 *   otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_object_states(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar3;
  uint32_t uVar2;
  uint32_t uVar4;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105baa28/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar3 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar3) {
      uVar2 = compute_struct_offset_104d6852(param_3,1);
      uVar4 = (*(code *)0x104d7942/*ROM*/)();
      iVar1 = call_helper_and_store_result_104d71d6((int *)(uVar4),(int)(uStack_c));
      if (iVar1 != 0) {
        uVar2 = (*(code *)0x104d7942/*ROM*/)(uVar2);
        (*(code *)0x104d722e/*ROM*/)(uVar2,1);
        cls_105bb0b8_new(&cStack_2c);
        iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105baa38/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        goto LAB_104db3a8;
      }
      uVar2 = add_offset_by_flag(param_3,0);
      uVar4 = 4;
    }
    else {
      uVar2 = add_offset_by_flag(param_3,0);
      uVar4 = 3;
    }
    (*(code *)0x104d7eb2/*ROM*/)(uVar2,uVar4);
  }
LAB_104db3a8:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
