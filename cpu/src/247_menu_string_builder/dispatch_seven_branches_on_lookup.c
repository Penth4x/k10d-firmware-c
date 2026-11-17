/* @k10d dispatch_seven_branches_on_lookup @ 0x104dc3aa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, performs a lookup, and dispatches to one of seven handlers
 *   based on the result.
 * summary:
 *   The function allocates a stack object via cls_105bb0b8_new and calls
 *   call_helper_with_saved_field with param_2. If the lookup fails (returns 0), it calls a
 *   handler with argument 2. Otherwise, it sequentially calls validate_and_copy_string with
 *   seven different constant pointers (0x105bac50 through 0x105bacb8). Depending on which
 *   call returns 0, it invokes one of seven distinct handler functions
 *   (process_two_config_entries_104dc4e4 through try_two_step_operation) passing param_1,
 *   param_2, and param_3. Finally, it calls reset_vtable_and_free_if_flagged_104ddfe6
 *   (virtual slot 1) on the object and returns the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_seven_branches_on_lookup(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_28);
  iVar1 = call_helper_with_saved_field(param_2,auStack_28);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
    uVar2 = 0;
  }
  else {
    iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bac50/*ROM*/);
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bac68/*ROM*/);
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bac78/*ROM*/);
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bac84/*ROM*/);
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bac90/*ROM*/);
            if (iVar1 == 0) {
              iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105baca4/*ROM*/);
              if (iVar1 == 0) {
                iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105bacb8/*ROM*/);
                if (iVar1 == 0) {
                  uVar2 = try_two_step_operation(param_1,param_2);
                }
                else {
                  uVar2 = process_two_config_entries_104dcae0(param_1,param_2,param_3);
                }
              }
              else {
                uVar2 = process_two_config_entries_104dc9ee(param_1,param_2,param_3);
              }
            }
            else {
              uVar2 = process_event_with_two_strings_104dc8fc(param_1,param_2,param_3);
            }
          }
          else {
            uVar2 = query_two_config_strings(param_1,param_2,param_3);
          }
        }
        else {
          uVar2 = process_two_config_entries_104dc6f0(param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = process_two_config_entries_104dc5ea(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = process_two_config_entries_104dc4e4(param_1,param_2,param_3);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
  }
  return uVar2;
}
