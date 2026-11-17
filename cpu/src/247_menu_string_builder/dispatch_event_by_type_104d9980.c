/* @k10d dispatch_event_by_type_104d9980 @ 0x104d9980
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Creates a temporary object, checks its type against a sequence of constants, and
 *   dispatches to the matching handler.
 * summary:
 *   Allocates a stack object via cls_105bb0b8_new and initializes it with
 *   call_helper_with_saved_field. If initialization succeeds, it performs a chain of type
 *   checks using validate_and_copy_string against six specific constants (0x105ba55c
 *   through 0x105ba5a4). Depending on which check passes, it calls one of six distinct
 *   handler functions (init_three_objects_and_dispatch_104d9a9a through
 *   process_two_stage_event_104d9f90) or a default handler (try_two_step_operation). The
 *   temporary object is destroyed via reset_vtable_and_free_if_flagged_104ddfe6 before
 *   returning the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_type_104d9980(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_28);
  iVar1 = call_helper_with_saved_field(param_2,(void *)auStack_28);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_28,2);
    uVar2 = 0;
  }
  else {
    iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba55c/*ROM*/);
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba568/*ROM*/);
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba574/*ROM*/);
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba58c/*ROM*/);
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba598/*ROM*/);
            if (iVar1 == 0) {
              iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba5a4/*ROM*/);
              if (iVar1 == 0) {
                uVar2 = try_two_step_operation(param_1,param_2);
              }
              else {
                uVar2 = process_two_stage_event_104d9f90(param_1,param_2,param_3);
              }
            }
            else {
              uVar2 = init_three_objects_with_params_104d9e96(param_1,param_2,param_3);
            }
          }
          else {
            uVar2 = build_three_object_sequence_104d9d9c(param_1,param_2,param_3);
          }
        }
        else {
          uVar2 = build_three_object_sequence_104d9ca2(param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = build_three_object_sequence_104d9ba8(param_1,param_2,param_3);
      }
    }
    else {
      uVar2 = init_three_objects_and_dispatch_104d9a9a(param_1,param_2,param_3);
    }
    reset_vtable_and_free_if_flagged_104ddfe6((void *)auStack_28,2);
  }
  return uVar2;
}
