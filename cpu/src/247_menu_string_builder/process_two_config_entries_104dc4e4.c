/* @k10d process_two_config_entries_104dc4e4 @ 0x104dc4e4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two configuration entries from a source object and dispatches them to a target
 *   handler.
 * summary:
 *   The function instantiates two objects of class cls_105bb0b8 on the stack. It calls
 *   check_two_conditions_and_return_flag and check_and_process_two_params with specific
 *   string pointers (0x105bacc4 and 0x105bacdc) to populate these objects, likely reading
 *   named configuration values. If the first entry is valid, it checks a boolean flag via
 *   get_upper_half_of_result and performs a sequence of calls involving
 *   return_r4_passthrough_104d7940 and call_helper_and_store_result_104d70ba. Finally, it
 *   calls virtual slot 1 (reset_vtable_and_free_if_flagged_104ddfe6) on both stack objects
 *   to clean them up or finalize them, returning 1 on success and 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104dc4e4(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar3;
  uint32_t uVar2;
  uint32_t uVar4;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105bacc4/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    bVar3 = get_upper_half_of_result(param_2,&uStack_c);
    if (bVar3) {
      compute_struct_offset_104d6852(param_3,1);
      uVar2 = return_r4_passthrough_104d7940();
      iVar1 = call_helper_and_store_result_104d70ba((int *)(uVar2),(int)(uStack_c));
      if (iVar1 != 0) {
        uVar2 = return_r4_passthrough_104d7940();
        (*(code *)0x104d7112/*ROM*/)(uVar2,1);
        cls_105bb0b8_new(&cStack_2c);
        iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105bacdc/*ROM*/);
        if (iVar1 != 0) {
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
          reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
          return 1;
        }
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        goto LAB_104dc5be;
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
LAB_104dc5be:
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
