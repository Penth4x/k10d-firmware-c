/* @k10d process_param2_with_two_lookups @ 0x104da55c
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs two sequential lookups on param_2 and iterates over results from the first.
 * summary:
 *   Creates two cls_105bb0b8 objects on the stack. Calls
 *   check_two_conditions_and_return_flag with param_2 and a string pointer; if successful,
 *   iterates using get_upper_half_of_result and set_byte_at_index, counting iterations. If
 *   count is zero, calls add_offset_by_flag and a virtual method. If count is non-zero,
 *   calls another virtual method and then performs a second lookup via
 *   check_and_process_two_params with a different string pointer. Cleans up both objects
 *   via reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) before returning 0 or 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_param2_with_two_lookups(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar4;
  int iVar2;
  uint32_t uVar3;
  int iVar5;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint uStack_c;
  
  cls_105bb0b8_new((void *)auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105ba7fc/*ROM*/);
  if (iVar1 != 0) {
    adjust_pointer_by_flag(param_3,1);
    iVar5 = 0;
    iVar1 = (*(code *)0x104d6594/*ROM*/)();
    write_byte_to_four_offsets_104d52f4(iVar1,0);
    uStack_c = 0;
    while (bVar4 = get_upper_half_of_result(param_2,&uStack_c), bVar4) {
      iVar2 = set_byte_at_index(iVar1,uStack_c,1);
      if (iVar2 == 0) goto LAB_104da64a;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 0) {
      uVar3 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar3,1);
    }
    else {
      (*(code *)0x104d546c/*ROM*/)(iVar1,1);
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105ba808/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
    }
  }
LAB_104da64a:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
