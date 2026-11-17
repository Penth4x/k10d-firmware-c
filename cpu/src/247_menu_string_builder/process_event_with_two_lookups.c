/* @k10d process_event_with_two_lookups @ 0x104db7c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Performs two sequential lookups on param_2 and dispatches a result based on the second
 *   lookup's boolean outcome.
 * summary:
 *   Initializes two cls_105bb0b8 objects on the stack. Calls
 *   check_two_conditions_and_return_flag with param_2 and the first object; if successful,
 *   calls get_upper_half_of_result to get a boolean. If true, it calls
 *   compute_struct_offset_104d6852, lookup_and_store_index, and FUN_104d782a, then performs
 *   a second lookup via check_and_process_two_params. If the second lookup succeeds, it
 *   calls reset_vtable_and_free_if_flagged_104ddfe6 on both objects and returns 1. If the
 *   first boolean was false, it calls add_offset_by_flag and FUN_104d7eb2. Finally, it
 *   cleans up the first object and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_two_lookups(uint32_t param_1,void *param_2,uint32_t param_3)

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
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105baac8/*ROM*/);
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
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105baad4/*ROM*/);
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
