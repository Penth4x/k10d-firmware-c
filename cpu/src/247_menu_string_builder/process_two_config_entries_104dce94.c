/* @k10d process_two_config_entries_104dce94 @ 0x104dce94
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two configuration entries from a source object and dispatches them to a target
 *   object based on their values.
 * summary:
 *   The function instantiates two temporary objects of class cls_105bb0b8. It calls
 *   check_two_conditions_and_return_flag to read the first entry (string at 0x105bae1c) and
 *   check_and_process_two_params to read the second entry (string at 0x105bae24) from
 *   param_2. If the first entry is valid, it retrieves a value via
 *   query_status_and_store_result. Depending on whether this value is zero, it calls either
 *   add_offset_by_flag or add_offset_to_pointer_104d6862 on param_3 and invokes a virtual
 *   method (slot 0 or 1) on the result. The second entry is only processed if the first
 *   value was non-zero. Finally, it cleans up the temporary objects by calling their
 *   virtual destructor (slot 1) and returns 0 on success or 1 if the second entry read
 *   failed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104dce94(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_4c;
  cls_105bb0b8 cStack_2c;
  uint32_t uStack_c;
  
  cls_105bb0b8_new(&cStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,&cStack_4c,(char *)0x105bae1c/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    iVar1 = query_status_and_store_result(param_2,&uStack_c);
    if (iVar1 == 0) {
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
    }
    else {
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7ad8/*ROM*/)(uVar2,uStack_c);
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7ae0/*ROM*/)(uVar2,1);
      cls_105bb0b8_new(&cStack_2c);
      iVar1 = check_and_process_two_params(param_2,&cStack_2c,(char *)0x105bae24/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_2c,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(&cStack_4c,2);
  return 0;
}
