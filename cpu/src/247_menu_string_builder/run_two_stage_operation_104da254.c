/* @k10d run_two_stage_operation_104da254 @ 0x104da254
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t run_two_stage_operation_104da254(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_48 [32];
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_48,(char *)0x105ba748/*ROM*/);
  if ((iVar1 != 0) && (iVar1 = check_two_conditions_and_return_flag(param_2,auStack_48,(char *)0x105ba758/*ROM*/), iVar1 != 0)) {
    do {
      iVar1 = dispatch_on_eight_rodata_ids(param_1,param_2,param_3);
    } while (iVar1 != 0);
    iVar1 = (*(code *)0x104daf4c/*ROM*/)(param_1,param_3);
    if (iVar1 != 0) {
      cls_105bb0b8_new((void *)auStack_28);
      iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105ba764/*ROM*/);
      if (iVar1 == 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
      }
      else {
        iVar1 = check_and_process_two_params(param_2,auStack_28,(char *)0x105ba770/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
      }
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_48,2);
  return 0;
}
