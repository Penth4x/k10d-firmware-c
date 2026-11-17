/* @k10d dispatch_eight_state_handlers @ 0x104db08e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Selects and calls one of eight handler functions based on a state check sequence.
 * summary:
 *   Initializes a local object and performs a series of checks using
 *   validate_and_copy_string against specific constants. Depending on which check fails
 *   first, it dispatches to one of eight distinct handler functions
 *   (process_two_config_blocks through process_event_with_two_lookups) or a default handler
 *   (try_two_step_operation). The local object is cleaned up via a virtual call before
 *   returning the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_eight_state_handlers(uint32_t param_1,int *param_2,uint32_t param_3)

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
    iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba984/*ROM*/);
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba99c/*ROM*/);
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba9ac/*ROM*/);
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba9b8/*ROM*/);
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba9c4/*ROM*/);
            if (iVar1 == 0) {
              iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba9d8/*ROM*/);
              if (iVar1 == 0) {
                iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba9ec/*ROM*/);
                if (iVar1 == 0) {
                  uVar2 = try_two_step_operation(param_1,param_2);
                }
                else {
                  uVar2 = process_event_with_two_lookups(param_1,param_2,param_3);
                }
              }
              else {
                uVar2 = process_two_config_entries_104db6d2(param_1,param_2,param_3);
              }
            }
            else {
              uVar2 = process_two_config_entries_104db5e0(param_1,param_2,param_3);
            }
          }
          else {
            uVar2 = process_event_with_two_handlers(param_1,param_2,param_3);
          }
        }
        else {
          uVar2 = process_two_config_entries_104db3d4(param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = process_two_object_states(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = process_two_config_blocks(param_1,param_2,param_3);
    }
    reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
  }
  return uVar2;
}
