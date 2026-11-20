/* @k10d process_two_config_entries_104dc9ee @ 0x104dc9ee
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two named entries from a config object and dispatches a handler based on the
 *   first entry's boolean value.
 * summary:
 *   The function instantiates two cls_105bb0b8 objects on the stack. It uses
 *   check_two_conditions_and_return_flag and check_and_process_two_params to retrieve data
 *   from param_2 using string keys at 0x105bad6c and 0x105bad80. If the first entry is non-
 *   zero, it checks a boolean via get_upper_half_of_result; if true, it calls a handler
 *   chain involving compute_struct_offset_104d6852 and virtual calls, otherwise it calls
 *   add_offset_by_flag. It returns 1 if the second entry is successfully retrieved and
 *   processed, otherwise 0. The cls_105bb0b8 objects are destroyed via their virtual slot 1
 *   (reset_vtable_and_free_if_flagged_104ddfe6) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104dc9ee(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar4;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105bad6c/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar4 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar4) {
      uVar2 = compute_struct_offset_104d6852(param_3,1);
      uVar3 = (*(code *)0x104d7962/*ROM*/)();
      call_helper_and_store_result_104d76d4((int *)(uVar3),(int)(uStack_c));
      uVar2 = (*(code *)0x104d7962/*ROM*/)(uVar2);
      (*(code *)0x104d772c/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_2c);
      iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105bad80/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
    }
    else {
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
