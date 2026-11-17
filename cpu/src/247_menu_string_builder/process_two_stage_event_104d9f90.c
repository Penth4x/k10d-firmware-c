/* @k10d process_two_stage_event_104d9f90 @ 0x104d9f90
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_stage_event_104d9f90(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar3;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint uStack_c;
  
  cls_105bb0b8_new((void *)auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105ba64c/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar3 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar3) {
      uVar2 = adjust_pointer_by_offset(param_3,1);
      iVar1 = (*(code *)0x104d7dca/*ROM*/)(uVar2,uStack_c);
      if (iVar1 == 0) {
        uVar2 = add_offset_by_flag(param_3,0);
        (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
      }
      else {
        uVar2 = adjust_pointer_by_offset(param_3,1);
        (*(code *)0x104d7df4/*ROM*/)(uVar2,1);
        cls_105bb0b8_new((void *)auStack_2c);
        iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105ba664/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
      }
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
