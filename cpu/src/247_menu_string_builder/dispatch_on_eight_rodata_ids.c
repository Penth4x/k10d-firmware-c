/* @k10d dispatch_on_eight_rodata_ids @ 0x104da356
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 247_menu_string_builder (unit names are model-proposed)
 * purpose:
 *   Constructs two objects, then dispatches to one of twelve handlers based on a chain of
 *   eight rodata lookups.
 * summary:
 *   Creates two cls_105bb0b8 instances on the stack. Calls call_helper_with_saved_field and
 *   scan_buffer_for_matching_bytes to initialize them. Then performs a nested sequence of
 *   eight calls to validate_and_copy_string with distinct rodata addresses (0x105ba780
 *   through 0x105ba7f0). Depending on which lookup fails (returns non-zero), it calls one
 *   of twelve different handler functions (process_param2_with_two_lookups through
 *   try_two_step_operation), passing the original parameters. Finally, it destroys both
 *   objects via reset_vtable_and_free_if_flagged_104ddfe6 and returns the handler's result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_on_eight_rodata_ids(uint32_t param_1,int *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  cls_105bb0b8 cStack_48;
  cls_105bb0b8 cStack_28;
  
  cls_105bb0b8_new(&cStack_48);
  iVar1 = call_helper_with_saved_field(param_2,&cStack_48);
  if (iVar1 == 0) {
    reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
    uVar2 = 0;
  }
  else {
    cls_105bb0b8_new(&cStack_28);
    iVar1 = scan_buffer_for_matching_bytes(&cStack_48,&cStack_28);
    if (iVar1 == 0) {
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
      uVar2 = 0;
    }
    else {
      iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba780/*ROM*/));
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba78c/*ROM*/));
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba798/*ROM*/));
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7a4/*ROM*/));
            if (iVar1 == 0) {
              iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7b0/*ROM*/));
              if (iVar1 == 0) {
                iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7bc/*ROM*/));
                if (iVar1 == 0) {
                  iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7cc/*ROM*/));
                  if (iVar1 == 0) {
                    iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7dc/*ROM*/));
                    if (iVar1 == 0) {
                      iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7e4/*ROM*/));
                      if (iVar1 == 0) {
                        iVar1 = validate_and_copy_string((uint32_t *)(&cStack_28),(char *)(0x105ba7f0/*ROM*/));
                        if (iVar1 == 0) {
                          uVar2 = try_two_step_operation(param_1,param_2);
                        }
                        else {
                          uVar2 = forward_two_args_to_helper_104dae4e(param_1, param_2);
                        }
                      }
                      else {
                        uVar2 = forward_two_args_to_helper_104dae40(param_1, param_2);
                      }
                    }
                    else {
                      uVar2 = process_event_queue_entries(param_1,param_2,param_3);
                    }
                  }
                  else {
                    uVar2 = forward_two_args_to_helper_104dabfe(param_1, param_2);
                  }
                }
                else {
                  uVar2 = forward_two_args_to_helper_104dabf0(param_1, param_2);
                }
              }
              else {
                uVar2 = process_param2_entries(param_1,param_2,param_3);
              }
            }
            else {
              uVar2 = process_event_queue_items(param_1,param_2,param_3);
            }
          }
          else {
            uVar2 = process_stream_into_buffer(param_1,param_2,param_3);
          }
        }
        else {
          uVar2 = iterate_and_process_param2_entries(param_1,param_2,param_3);
        }
      }
      else {
        uVar2 = process_param2_with_two_lookups(param_1,param_2,param_3);
      }
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_28,2);
      reset_vtable_and_free_if_flagged_104ddfe6(&cStack_48,2);
    }
  }
  return uVar2;
}
