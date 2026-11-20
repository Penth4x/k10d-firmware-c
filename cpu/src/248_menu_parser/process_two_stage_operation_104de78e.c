/* @k10d process_two_stage_operation_104de78e @ 0x104de78e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 248_menu_parser (unit names are model-proposed)
 * purpose:
 *   Executes a two-stage operation on param_2, retrying the second stage in a loop until it
 *   succeeds.
 * summary:
 *   Initializes a cls_105bb0b8 object on the stack and calls
 *   check_two_conditions_and_return_flag with param_2 and a value derived from param_3. If
 *   the first stage fails (returns 0), it returns 0. If it succeeds, it initializes a
 *   second cls_105bb0b8 object and enters a loop calling call_helper_with_saved_field and
 *   check_and_process_two_params until check_and_process_two_params returns non-zero.
 *   Cleans up both objects via virtual slot 1 and returns 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_stage_operation_104de78e(uint32_t param_1,int *param_2,void *param_3)

{
  char *pcVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  pcVar1 = (char *)copy_bytes_to_sram_buffer(param_3);
  iVar2 = check_two_conditions_and_return_flag(param_2,&cStack_48,pcVar1);
  if (iVar2 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
    uVar3 = 0;
  }
  else {
    cls_105bb0b8_new(&cStack_28);
    do {
      iVar2 = call_helper_with_saved_field(param_2,&cStack_28);
      if (iVar2 == 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
        return 0;
      }
      pcVar1 = (char *)copy_bytes_to_sram_buffer(param_3);
      iVar2 = check_and_process_two_params(param_2,&cStack_28,pcVar1);
    } while (iVar2 == 0);
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
    uVar3 = 1;
  }
  return uVar3;
}
