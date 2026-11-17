/* @k10d iterate_and_process_param2_entries @ 0x104da67a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Iterates over entries in param_2, processing each via store_byte_at_index and handling
 *   success/failure paths.
 * summary:
 *   Creates a cls_105bb0b8 object, calls check_two_conditions_and_return_flag with param_2
 *   and a string pointer. If successful, loops calling get_upper_half_of_result to get
 *   indices and processes them with store_byte_at_index. If no entries are processed, calls
 *   add_offset_by_flag and a function at 0x104d7eb2. If entries are processed, calls a
 *   function at 0x104d6444 and creates a second cls_105bb0b8 object. Cleans up both objects
 *   via reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1) before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_process_param2_entries(uint32_t param_1,void *param_2,uint32_t param_3)

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
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105ba814/*ROM*/);
  if (iVar1 != 0) {
    adjust_pointer_by_flag(param_3,1);
    iVar5 = 0;
    iVar1 = add_offset_to_pointer_104d65b6(__frv_reg_unset(4));
    fill_byte_array_at_offset(iVar1,0);
    uStack_c = 0;
    while (bVar4 = get_upper_half_of_result(param_2,&uStack_c), bVar4) {
      iVar2 = store_byte_at_index(iVar1,uStack_c,1);
      if (iVar2 == 0) goto LAB_104da768;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 0) {
      uVar3 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar3,1);
    }
    else {
      (*(code *)0x104d6444/*ROM*/)(iVar1,1);
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105ba820/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
    }
  }
LAB_104da768:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
