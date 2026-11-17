/* @k10d process_event_queue_items @ 0x104da9b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Iterates through a queue of items, processing each one and handling empty or error
 *   states.
 * summary:
 *   The function initializes a temporary object (cls_105bb0b8) and attempts to retrieve a
 *   context from param_2. It then enters a loop, repeatedly fetching items from param_2 via
 *   get_upper_half_of_result and processing them with set_byte_at_offset. If no items are
 *   processed, it calls a handler for the empty state. If items are processed, it finalizes
 *   the operation and attempts to retrieve a second context. The function cleans up the
 *   temporary objects before returning a status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_queue_items(uint32_t param_1,void *param_2,uint32_t param_3)

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
  iVar1 = check_two_conditions_and_return_flag(param_2,auStack_4c,(char *)0x105ba850/*ROM*/);
  if (iVar1 != 0) {
    adjust_pointer_by_flag(param_3,1);
    iVar5 = 0;
    iVar1 = (*(code *)0x104d6596/*ROM*/)();
    fill_byte_array_with_value(iVar1,0);
    uStack_c = 0;
    while (bVar4 = get_upper_half_of_result(param_2,&uStack_c), bVar4) {
      iVar2 = set_byte_at_offset(iVar1,uStack_c,1);
      if (iVar2 == 0) goto LAB_104daaa2;
      iVar5 = iVar5 + 1;
    }
    if (iVar5 == 0) {
      uVar3 = add_offset_by_flag(param_3,0);
      (*(code *)0x104d7eb2/*ROM*/)(uVar3,1);
    }
    else {
      (*(code *)0x104d5814/*ROM*/)(iVar1,1);
      cls_105bb0b8_new((void *)auStack_2c);
      iVar1 = check_and_process_two_params(param_2,auStack_2c,(char *)0x105ba85c/*ROM*/);
      if (iVar1 != 0) {
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
        return 1;
      }
      reset_vtable_and_free_if_flagged_104ddfe6(auStack_2c,2);
    }
  }
LAB_104daaa2:
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_4c,2);
  return 0;
}
