/* @k10d cycling_page_keyhandler @ 0x104889ca
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed handle_menu_key_event)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Handles key input for page navigation by checking a sequence of conditions and updating
 *   the page index at offset 0x44.
 * summary:
 *   The function acts as a key handler for a UI page or menu. It first checks param_2,
 *   returning early if it is not 2. It then attempts a series of checks via callees
 *   advance_state_on_virtual_ok through advance_state_on_virtual_call. If these fail, it
 *   invokes a virtual method (slot 3) on the object pointed to by param_3 with arguments
 *   0x15 and 0x17, likely representing specific key codes. Based on the result and the
 *   current value at param_1+0x44, it either increments, decrements, or resets this value,
 *   or calls helper functions like set_select_flag and check_param_equals_three to manage
 *   state transitions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b34ec * cycling_page_keyhandler(cls_105b34ec *param_1,int param_2,int *param_3)

{
  int iVar1;
  cls_105b34ec *pcVar2;
  int iVar3;
  
  if (param_2 != 2) {
    if (param_2 != 1) {
      return param_1;
    }
    return (cls_105b34ec *)0x0;
  }
  iVar3 = param_1->field_0x44;
  iVar1 = advance_state_on_virtual_ok((int)param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = advance_state_on_virtual_event((int)param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = advance_state_counter_on_event((int)param_1,param_3);
      if ((iVar1 == 0) && (iVar1 = advance_state_on_virtual_call((int)param_1,param_3), iVar1 == 0)) {
        iVar1 = (((vtbl_entry*)(*param_3))[4].fn)((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x15)
        ;
        if (iVar1 == 0) {
          iVar1 = (((vtbl_entry*)(*param_3))[4].fn)
                            ((int)((vtbl_entry*)(*param_3))[4].adj + (int)param_3,0x17);
          if (iVar1 == 0) {
            return param_1;
          }
          return (cls_105b34ec *)0x0;
        }
        if (iVar3 == 2) {
          pcVar2 = (cls_105b34ec *)get_singleton_object_ptr();
          return pcVar2;
        }
        set_select_flag((uint32_t)(param_1));
      }
      else {
        iVar1 = check_param_equals_three((uint32_t)(param_1),iVar3);
        if (iVar1 == 0) {
          return param_1;
        }
        set_flag_at_offset_0x4d_10488f74((uint32_t)(param_1));
      }
    }
    else {
      if (6 < iVar3) {
        pcVar2 = (cls_105b34ec *)backup_eep_opener();
        pcVar2->field_0x44 = 2;
        return pcVar2;
      }
      param_1->field_0x44 = iVar3 + 1;
    }
  }
  else {
    if (iVar3 < 3) {
      pcVar2 = (cls_105b34ec *)get_or_create_singleton_object_104882d0();
      pcVar2->field_0x44 = 7;
      return pcVar2;
    }
    param_1->field_0x44 = iVar3 + -1;
  }
  pcVar2 = (cls_105b34ec *)classic_menu_item_render((void*)(param_1),__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return pcVar2;
}
