/* @k10d configure_two_objects_and_dispatch @ 0x104dd316
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Initializes two cls_105bb0b8 objects from param_2, dispatches virtual calls on param_3,
 *   and cleans up on success or failure.
 * summary:
 *   The function allocates two stack-based cls_105bb0b8 objects (auStack_4c and auStack_2c)
 *   and initializes them via check_two_conditions_and_return_flag and
 *   check_and_process_two_params using string constants at 0x105bae6c and 0x105bae7c. It
 *   retrieves a value from param_2 via query_status_and_store_result and performs virtual
 *   dispatches on objects derived from param_3 (via add_offset_to_pointer_104d6862 and
 *   add_offset_by_flag) at addresses 0x104d7b66, 0x104d7b76, and 0x104d7eb2. On success, it
 *   calls the virtual method slot 1 (reset_vtable_and_free_if_flagged_104ddfe6) on both
 *   objects with argument 2 and returns 1; on failure, it cleans up the first object and
 *   returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t configure_two_objects_and_dispatch(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_4c [32];
  uint8_t auStack_2c [32];
  uint32_t uStack_c;
  
  cls_105bb0b8_new((void *)auStack_4c);
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105bae6c/*ROM*/);
  if (iVar1 != 0) {
    uStack_c = 0;
    iVar1 = query_status_and_store_result(param_2,&uStack_c);
    if (iVar1 != 0) {
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7b66/*ROM*/)(uVar2,uStack_c);
      uVar2 = add_offset_to_pointer_104d6862(param_3);
      (*(code *)0x104d7b76/*ROM*/)(uVar2,1);
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105bae7c/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
        return 1;
      }
      uVar2 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar2,4);
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
