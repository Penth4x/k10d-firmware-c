/* @k10d try_two_initializers @ 0x104dd49a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t try_two_initializers(uint32_t param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_48,(char *)0x105baea0/*ROM*/);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
    uVar2 = 0;
  }
  else {
    cls_105bb0b8_new(&cStack_28);
    iVar1 = check_and_process_two_params(param_2,&cStack_28,(char *)0x105baeac/*ROM*/);
    if (iVar1 == 0) {
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
      uVar2 = 0;
    }
    else {
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
      uVar2 = 1;
    }
  }
  return uVar2;
}
