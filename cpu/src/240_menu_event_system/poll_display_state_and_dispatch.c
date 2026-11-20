/* @k10d poll_display_state_and_dispatch @ 0x104cf27e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Continuously polls a state flag at param_1+0x18 and dispatches to virtual methods or
 *   display-off based on the flag's bit pattern.
 * summary:
 *   This function runs an infinite loop that calls eventflag_wai_flg to read a state value
 *   into a local variable, then eventflag_clr_flg to update the state. It branches on the
 *   low 8 bits of this state: if bit 0 is set, it either calls display_off_locked or
 *   invokes virtual methods on an object at param_1+0x38; if bit 0 is clear, it performs
 *   various combinations of calls to register_menu_item_with_status_104cf4e6,
 *   build_and_send_two_param_message, and virtual method slot 5 (offset 0x2c) on the object
 *   at param_1+0x38. The loop ends each iteration by calling invoke_listener_slot_two on
 *   param_1+0x20.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_display_state_and_dispatch(cls_105b979c *param_1)

{
  char cVar3;
  int iVar1;
  uint32_t *puVar2;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    eventflag_wai_flg(&param_1->field_0x18,0xffffffff,&uStack_c,_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(&param_1->field_0x18,uStack_c);
    if ((uStack_c & 1) == 0) {
      if ((uStack_c & 2) == 0) {
        if ((uStack_c & 4) == 0) {
          if ((uStack_c & 8) == 0) {
            if ((uStack_c & 0x10) == 0) {
              if ((uStack_c & 0x20) == 0) {
                if ((uStack_c & 0x40) == 0) {
                  if ((uStack_c & 0x80) == 0) goto code_r0x104cf4cc;
                  register_menu_item_with_status_104cf4e6((int)(param_1),(int)(1));
                  build_and_send_two_param_message((int)(param_1),(int)(1));
                  iVar1 = *(int *)param_1->field_0x38;
                  (((vtbl_entry*)(iVar1))[5].fn)
                            ((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
                }
                else {
                  register_menu_item_with_status_104cf4e6((int)(param_1),(int)(0));
                  build_and_send_two_param_message((int)(param_1),(int)(0));
                  iVar1 = *(int *)param_1->field_0x38;
                  (((vtbl_entry*)(iVar1))[5].fn)
                            ((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
                }
              }
              else {
                build_and_send_two_param_message((int)(param_1),(int)(1));
                iVar1 = *(int *)param_1->field_0x38;
                (((vtbl_entry*)(iVar1))[5].fn)
                          ((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
              }
            }
            else {
              build_and_send_two_param_message((int)(param_1),(int)(0));
              iVar1 = *(int *)param_1->field_0x38;
              (((vtbl_entry*)(iVar1))[5].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
            }
          }
          else {
            register_menu_item_with_status_104cf4e6((int)(param_1),(int)(1));
            iVar1 = *(int *)param_1->field_0x38;
            (((vtbl_entry*)(iVar1))[5].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
          }
        }
        else {
          register_menu_item_with_status_104cf4e6((int)(param_1),(int)(0));
          iVar1 = *(int *)param_1->field_0x38;
          (((vtbl_entry*)(iVar1))[5].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
        }
      }
      else {
        iVar1 = menu_item_register((int)param_1->field_0x38);
        (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
        iVar1 = *(int *)param_1->field_0x38;
        (((vtbl_entry*)(iVar1))[5].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[5].adj);
      }
      request_ui_sync_with_flag_10491f5c((void *)(param_1->field_0x38),(int)(1));
    }
    else {
      cVar3 = read_byte_at_offset_0x1d((int)param_1->field_0x38);
      if (cVar3 == '\0') {
        puVar2 = (uint32_t *)get_or_init_sram_block_1052b6fc();
        display_off_locked(puVar2);
      }
      else {
        iVar1 = menu_item_register((int)param_1->field_0x38);
        (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        iVar1 = menu_item_register((int)param_1->field_0x38);
        (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        iVar1 = menu_item_register((int)param_1->field_0x38);
        (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
        request_ui_sync_with_flag_10491f5c((void *)(param_1->field_0x38),(int)(0));
        iVar1 = *(int *)param_1->field_0x38;
        (((vtbl_entry*)(iVar1))[6].fn)((int)param_1->field_0x38 + (int)((vtbl_entry*)(iVar1))[6].adj);
      }
    }
code_r0x104cf4cc:
    invoke_listener_slot_two((int *)&param_1->field_0x20);
  } while( true );
}
