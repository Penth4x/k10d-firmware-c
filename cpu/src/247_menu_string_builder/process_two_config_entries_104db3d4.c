/* @k10d process_two_config_entries_104db3d4 @ 0x104db3d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two named entries from a config object and conditionally updates a state
 *   variable.
 * summary:
 *   The function constructs two temporary objects of class cls_105bb0b8. It calls
 *   check_two_conditions_and_return_flag and check_and_process_two_params with string
 *   pointers (0x105baa48 and 0x105baa54) to retrieve data from param_2. If the first
 *   retrieval succeeds, it checks a boolean flag via get_upper_half_of_result. Based on
 *   this flag and the result of call_subroutine_and_store_result, it calls either
 *   compute_struct_offset_104d6852 or add_offset_by_flag with param_3 and a status code (1,
 *   3, or 4), then passes the result to a function at 0x104d7eb2. Finally, it cleans up the
 *   temporary objects via their virtual destructor (slot 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104db3d4(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar3;
  uint32_t uVar2;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint uStack_c;
  
  cls_105bb0b8_new((void *)auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105baa48/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar3 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar3) {
      uVar2 = compute_struct_offset_104d6852(param_3,1);
      uVar4 = (*(code *)0x104d794a/*ROM*/)();
      iVar1 = call_subroutine_and_store_result((void *)uVar4,uStack_c);
      if (iVar1 != 0) {
        uVar2 = (*(code *)0x104d794a/*ROM*/)(uVar2);
        (*(code *)0x104d7338/*ROM*/)(uVar2,1);
        cls_105bb0b8_new((void *)auStack_2c);
        iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105baa54/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        goto LAB_104db4ae;
      }
      uVar2 = add_offset_by_flag(param_3,0);
      uVar4 = 4;
    }
    else {
      uVar2 = add_offset_by_flag(param_3,0);
      uVar4 = 3;
    }
    (*(code *)0x104d7eb2/*ROM*/)(uVar2,uVar4);
  }
LAB_104db4ae:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
