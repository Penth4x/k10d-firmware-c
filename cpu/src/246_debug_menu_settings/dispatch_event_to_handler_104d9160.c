/* @k10d dispatch_event_to_handler_104d9160 @ 0x104d9160
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Routes an event to one of ten handler objects based on a type check, returning a status
 *   code.
 * summary:
 *   The function initializes a local object and uses validate_and_copy_string to test the
 *   event type against ten specific constants. Depending on which test passes, it retrieves
 *   a corresponding handler object and invokes its virtual method slot 2 with the event
 *   parameters. If no handler matches or an error occurs, it calls
 *   process_two_stage_operation_104de78e or sets a specific error code (0-9) via
 *   write_field_at_offset_0x2370.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104d9194) overlaps instruction at (ram,0x104d9192)
    */

uint32_t dispatch_event_to_handler_104d9160(uint32_t param_1,void *param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t uVar2;
  uintptr_t sp;
  uint8_t auStack_28 [32];
  
  cls_105bb0b8_new((void *)auStack_28);
  iVar1 = call_helper_with_saved_field(param_2,auStack_28);
  if (iVar1 != 0) {
    write_field_at_offset_0x2370(param_3,0xffffffff);
    iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba3fc/*ROM*/);
    if (iVar1 == 0) {
      iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba414/*ROM*/);
      if (iVar1 == 0) {
        iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba424/*ROM*/);
        if (iVar1 == 0) {
          iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba434/*ROM*/);
          if (iVar1 == 0) {
            iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba444/*ROM*/);
            if (iVar1 == 0) {
              iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba450/*ROM*/);
              if (iVar1 == 0) {
                iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba45c/*ROM*/);
                if (iVar1 == 0) {
                  iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba470/*ROM*/);
                  if (iVar1 == 0) {
                    iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba480/*ROM*/);
                    if (iVar1 == 0) {
                      iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba48c/*ROM*/);
                      if ((((iVar1 != 0) ||
                           (iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba498/*ROM*/), iVar1 != 0)) ||
                          (iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba4a4/*ROM*/), iVar1 != 0)) ||
                         (((iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba4ac/*ROM*/), iVar1 != 0 ||
                           (iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba4bc/*ROM*/), iVar1 != 0)) ||
                          (iVar1 = validate_and_copy_string((void *)auStack_28,(void *)0x105ba4c8/*ROM*/), iVar1 != 0)))) {
                        uVar2 = process_two_stage_operation_104de78e(param_1,param_2,auStack_28);
                        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
                        return uVar2;
                      }
                    }
                    else {
                      iVar1 = initialize_sram_object_once_104ddb9c();
                      iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,
                                         param_3);
                      if (iVar1 != 0) {
                        uVar2 = 8;
                        goto code_r0x104d94c2;
                      }
                    }
                  }
                  else {
                    iVar1 = get_or_init_sram_object_104dcc9a();
                    iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,
                                       param_3);
                    if (iVar1 != 0) {
                      uVar2 = 7;
                      goto code_r0x104d94c2;
                    }
                  }
                }
                else {
                  iVar1 = get_or_create_sram_object_104dc2a4();
                  iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,
                                     param_3);
                  if (iVar1 != 0) {
                    uVar2 = 6;
                    goto code_r0x104d94c2;
                  }
                }
              }
              else {
                iVar1 = init_singleton_object_104dc134();
                iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,param_3
                                  );
                if (iVar1 != 0) {
                  uVar2 = 5;
                  goto code_r0x104d94c2;
                }
              }
            }
            else {
              iVar1 = get_or_init_singleton_object_104dd452();
              iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                                (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,param_3);
              if (iVar1 != 0) {
                uVar2 = 4;
                goto code_r0x104d94c2;
              }
            }
          }
          else {
            iVar1 = get_or_create_singleton_object_104db97e();
            iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                              (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,param_3);
            if (iVar1 != 0) {
              uVar2 = 3;
              goto code_r0x104d94c2;
            }
          }
        }
        else {
          iVar1 = get_or_init_sram_object_104daf88();
          iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                            (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,param_3);
          if (iVar1 != 0) {
            uVar2 = 2;
            goto code_r0x104d94c2;
          }
        }
      }
      else {
        iVar1 = get_or_create_singleton_object_104da20c();
        iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                          (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,param_3);
        if (iVar1 != 0) {
          uVar2 = 1;
          goto code_r0x104d94c2;
        }
      }
    }
    else {
      iVar1 = get_or_create_singleton_object_104d987a();
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x1c) + 0x14))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x1c) + 0x10),param_2,param_3);
      if (iVar1 != 0) {
        uVar2 = 0;
code_r0x104d94c2:
        write_field_at_offset_0x2370(param_3,uVar2);
        reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
        return 1;
      }
    }
  }
  reset_vtable_and_free_if_flagged_104ddfe6(auStack_28,2);
  return 0;
}
