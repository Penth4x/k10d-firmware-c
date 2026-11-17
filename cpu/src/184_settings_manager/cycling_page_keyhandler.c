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

int cycling_page_keyhandler(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 2) {
    if (param_2 != 1) {
      return param_1;
    }
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  iVar1 = advance_state_on_virtual_ok(param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = advance_state_on_virtual_event(param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = advance_state_counter_on_event(param_1,param_3);
      if ((iVar1 == 0) && (iVar1 = advance_state_on_virtual_call(param_1,param_3), iVar1 == 0)) {
        iVar1 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x15)
        ;
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*param_3 + 0x24))
                            ((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x17);
          if (iVar1 == 0) {
            return param_1;
          }
          return 0;
        }
        if (iVar2 == 2) {
          iVar1 = get_singleton_object_ptr();
          return iVar1;
        }
        set_select_flag(param_1);
      }
      else {
        iVar1 = check_param_equals_three(param_1,iVar2);
        if (iVar1 == 0) {
          return param_1;
        }
        set_flag_at_offset_0x4d_10488f74(param_1);
      }
    }
    else {
      if (6 < iVar2) {
        iVar1 = backup_eep_opener();
        *(uint32_t *)(iVar1 + 0x44) = 2;
        return iVar1;
      }
      *(int *)(param_1 + 0x44) = iVar2 + 1;
    }
  }
  else {
    if (iVar2 < 3) {
      iVar1 = get_or_create_singleton_object_104882d0();
      *(uint32_t *)(iVar1 + 0x44) = 7;
      return iVar1;
    }
    *(int *)(param_1 + 0x44) = iVar2 + -1;
  }
  iVar1 = classic_menu_item_register(param_1);
  return iVar1;
}
