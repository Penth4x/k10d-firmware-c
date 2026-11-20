/* @k10d process_param2_entries @ 0x104daad2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_param2_entries(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar4;
  int iVar2;
  uint32_t uVar3;
  int iVar5;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105ba868/*ROM*/);
  if (iVar1 != 0) {
    adjust_pointer_by_flag(param_3,1);
    iVar5 = 0;
    iVar1 = (*(code *)0x104d659e/*ROM*/)();
    write_three_bytes_to_struct_104d5900(iVar1,0);
    uStack_c = 0;
    while (bVar4 = get_upper_half_of_result(param_2,&uStack_c), bVar4) {
      iVar2 = insert_byte_at_index(iVar1,uStack_c,1);
      if (iVar2 == 0) goto LAB_104dabc0;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 0) {
      uVar3 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar3,1);
    }
    else {
      (*(code *)0x104d5a26/*ROM*/)(iVar1,1);
      cls_105bb0b8_new(&cStack_2c);
      iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105ba874/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
    }
  }
LAB_104dabc0:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
