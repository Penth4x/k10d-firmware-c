/* @k10d ui_request_dispatch @ 0x104923aa
 * name: verified (structural evidence: decomp + emulator: codes from table 0x105b4214; input path reaches the screen's event handler)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   UI task: executes one queued request by code (2 init, 4/8/0x10 screen ops, 0x20/0x40,
 *   0x80/0x100 display on/off); any other message is input and goes to the key translator
 *   and the active screen.
 * summary:
 *   VERIFIED: decomp + emulator: codes from table 0x105b4214; input path reaches the
 *   screen's event handler
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t ui_request_dispatch(int *param_1,uint32_t param_2,uint32_t *param_3)

{
  bool bVar3;
  int iVar1;
  int *piVar2;
  
  bVar3 = test_flag_bits_in_struct((int)param_3,2);
  if (bVar3) {
    dispatch_ui_request_handler(param_1);
  }
  else {
    bVar3 = test_flag_bits_in_struct((int)param_3,4);
    if (bVar3) {
      invoke_virtual_method_on_nested_object_1049273c(param_1);
    }
    else {
      bVar3 = test_flag_bits_in_struct((int)param_3,8);
      if (bVar3) {
        deactivate_ui_request_object(param_1);
      }
      else {
        bVar3 = test_flag_bits_in_struct((int)param_3,0x10);
        if (bVar3) {
          deactivate_ui_screen(param_1);
        }
        else {
          bVar3 = test_flag_bits_in_struct((int)param_3,0x20);
          if (bVar3) {
            set_field_at_offset_0x18(param_1,1);
          }
          else {
            bVar3 = test_flag_bits_in_struct((int)param_3,0x40);
            if (bVar3) {
              set_field_at_offset_0x18(param_1,0);
            }
            else {
              bVar3 = test_flag_bits_in_struct((int)param_3,0x80);
              if (bVar3) {
                ui_set_display(param_1,1);
              }
              else {
                bVar3 = test_flag_bits_in_struct((int)param_3,0x100);
                if (!bVar3) {
                  iVar1 = (**(code **)(*param_1 + 0x14))
                                    ((int)*(short *)(*param_1 + 0x10) + (int)param_1);
                  if (iVar1 != 0) {
                    piVar2 = (int *)return_first_word_10491ed2(param_3);
                    poll_input_and_dispatch_event(param_1,piVar2);
                  }
                  goto LAB_104924b6;
                }
                ui_set_display(param_1,0);
              }
            }
          }
        }
      }
    }
  }
  set_flg_obj((uint32_t *)0x80048f20/*SDRAM*/);
LAB_104924b6:
  bVar3 = test_flag_bits_in_struct((int)param_3,0x10);
  if (!bVar3) {
    invoke_virtual_method_on_nested_object_1049273c(param_1);
  }
  return 1;
}
