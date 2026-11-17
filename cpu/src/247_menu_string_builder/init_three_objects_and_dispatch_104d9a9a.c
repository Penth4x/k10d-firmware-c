/* @k10d init_three_objects_and_dispatch_104d9a9a @ 0x104d9a9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Instantiates three cls_105bb0b8 objects, initializes them via helper functions, and
 *   dispatches a sequence of operations on the second object.
 * summary:
 *   The function allocates three stack-based instances of cls_105bb0b8. It initializes the
 *   first with check_two_conditions_and_return_flag, the second with
 *   check_flag_and_call_helper_104de66e, and the third with check_and_process_two_params.
 *   Between initializations, it calls adjust_pointer_by_offset and
 *   advance_index_and_call_handler, passing the second object and results from
 *   adjust_pointer_by_offset. Finally, it destroys all three objects via their virtual
 *   destructor (slot 1) and returns 1 on success or 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_three_objects_and_dispatch_104d9a9a(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_68 [32];
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_68);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_68,(char *)0x105ba5bc/*ROM*/);
  if (iVar1 != 0) {
    cls_105bb0b8_new((void *)auStack_48);
    iVar1 = check_flag_and_call_helper_104de66e(param_2);
    if (iVar1 != 0) {
      adjust_pointer_by_offset(param_3,1);
      (*(code *)0x104d7ce8/*ROM*/)();
      iVar1 = adjust_pointer_by_offset(param_3,1);
      advance_index_and_call_handler(iVar1,auStack_48);
      uVar2 = adjust_pointer_by_offset(param_3,1);
      (*(code *)0x104d7cf2/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105ba5c8/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_68,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_68,2);
  return 0;
}
