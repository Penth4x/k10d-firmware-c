/* @k10d process_two_config_entries_104db6d2 @ 0x104db6d2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two named entries from a config source and dispatches their values to a handler
 *   object.
 * summary:
 *   Creates two cls_105bb0b8 objects on the stack and calls
 *   check_two_conditions_and_return_flag and check_and_process_two_params to populate them
 *   with data from param_2 using fixed string keys at 0x105baaa0 and 0x105baab4. If the
 *   first entry is present, it queries a flag via get_upper_half_of_result; if true it
 *   calls compute_struct_offset_104d6852, call_helper_and_store_result_104d76d4, and a
 *   virtual call at 0x104d772c, otherwise it calls add_offset_by_flag and a virtual call at
 *   0x104d7eb2. Returns 1 if both entries are successfully read and the flag is true,
 *   otherwise 0. Cleans up both objects via virtual slot 1
 *   (reset_vtable_and_free_if_flagged_104ddfe6) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104db6d2(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar4;
  uint32_t uVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint uStack_c;
  
  cls_105bb0b8_new((void *)auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105baaa0/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar4 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar4) {
      uVar2 = compute_struct_offset_104d6852(param_3,1);
      uVar3 = (*(code *)0x104d7962/*ROM*/)();
      call_helper_and_store_result_104d76d4((void *)uVar3,uStack_c);
      uVar2 = (*(code *)0x104d7962/*ROM*/)(uVar2);
      (*(code *)0x104d772c/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105baab4/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
    }
    else {
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
