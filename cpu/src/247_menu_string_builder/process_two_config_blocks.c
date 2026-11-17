/* @k10d process_two_config_blocks @ 0x104db1c8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Initializes two cls_105bb0b8 objects from param_2 and dispatches a status code via a
 *   virtual call.
 * summary:
 *   The function constructs two instances of cls_105bb0b8 on the stack. It calls
 *   check_two_conditions_and_return_flag and check_and_process_two_params to populate them
 *   using param_2 and specific string pointers (0x105ba9f8, 0x105baa10). Based on the
 *   result of get_upper_half_of_result, it selects a status value (3 or 4) and calls a
 *   virtual method at 0x104d7eb2 with that value. It also calls
 *   compute_struct_offset_104d6852 and call_helper_and_store_result_104d70ba in a
 *   conditional branch. Finally, it destroys both objects via the verified virtual slot 1
 *   (reset_vtable_and_free_if_flagged_104ddfe6) and returns 1 on a specific success path,
 *   otherwise 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_blocks(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar3;
  uint32_t uVar2;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint uStack_c;
  
  cls_105bb0b8_new(auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105ba9f8/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar3 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar3) {
      compute_struct_offset_104d6852(param_3,1);
      uVar2 = return_r4_passthrough_104d7940();
      iVar1 = call_helper_and_store_result_104d70ba(uVar2,uStack_c);
      if (iVar1 != 0) {
        uVar2 = return_r4_passthrough_104d7940();
        (*(code *)0x104d7112/*ROM*/)(uVar2,1);
        cls_105bb0b8_new(auStack_2c);
        iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105baa10/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        goto LAB_104db2a2;
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
LAB_104db2a2:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
