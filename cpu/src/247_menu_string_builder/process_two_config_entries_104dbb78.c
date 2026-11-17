/* @k10d process_two_config_entries_104dbb78 @ 0x104dbb78
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Reads two named entries from a config object and dispatches their values to a target
 *   object.
 * summary:
 *   Instantiates two cls_105bb0b8 objects on the stack. It calls
 *   check_two_conditions_and_return_flag with the first object and a string pointer
 *   (0x105bab4c), then query_status_and_store_result to retrieve a value. If successful, it
 *   calls add_offset_by_flag and a virtual method. If the first check fails but the second
 *   succeeds, it retrieves a value via add_offset_to_pointer_104d6862, calls two virtual
 *   methods, then repeats the process for a second entry (string 0x105bab54) using
 *   check_and_process_two_params. Finally, it cleans up the stack objects via
 *   reset_vtable_and_free_if_flagged_104ddfe6 (virtual slot 1).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_two_config_entries_104dbb78(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint32_t uStack_c;
  
  cls_105bb0b8_new((void *)auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105bab4c/*ROM*/);
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
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105bab54/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
