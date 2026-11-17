/* @k10d process_two_config_entries_104dcae0 @ 0x104dcae0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two named entries from a source object and dispatches their values to a target
 *   handler.
 * summary:
 *   The function instantiates two cls_105bb0b8 objects on the stack and uses
 *   check_two_conditions_and_return_flag and check_and_process_two_params to populate them
 *   with data from param_2 using string keys at 0x105bad94 and 0x105bada0. If the first
 *   entry is present, it checks a boolean flag via get_upper_half_of_result; if true, it
 *   processes the value through a chain of calls involving compute_struct_offset_104d6852
 *   and virtual dispatches, otherwise it calls add_offset_by_flag. The second entry is
 *   processed similarly if the first was valid. Both objects are destroyed via their
 *   virtual slot 1 (reset_vtable_and_free_if_flagged_104ddfe6) before returning a status
 *   code (1 if both entries were processed, 0 otherwise).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104dcae0(uint32_t param_1,void *param_2,uint32_t param_3)

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
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105bad94/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar4 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar4) {
      uVar2 = compute_struct_offset_104d6852(param_3,1);
      uVar3 = (*(code *)0x104d796a/*ROM*/)();
      lookup_and_store_index((void *)uVar3,uStack_c);
      uVar2 = (*(code *)0x104d796a/*ROM*/)(uVar2);
      (*(code *)0x104d782a/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105bada0/*ROM*/);
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
