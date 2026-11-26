/* @k10d toggle_state_machine @ 0x10411734
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Toggles a state flag at offset 0x7c, executing distinct initialization or teardown
 *   sequences based on the flag and a secondary condition at 0xc0.
 * summary:
 *   The function acts as a state machine controller. If param_2 is 0, it clears the state
 *   flag and calls cleanup routines (clear_flag_with_notify,
 *   check_kernel_call_success_10459fea) on pointers stored in the object. If param_2 is
 *   non-zero and the flag is clear, it sets the flag and executes a complex sequence
 *   involving virtual calls, timer-like operations (eventflag_clr_flg, twai_flg_obj), and
 *   specific helper calls (apply_range_swap_if_inverted, call_single_helper_1043ed1e) that
 *   differ based on the value at offset 0xc0. The specific subsystem is not identifiable
 *   from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1041174e) overlaps instruction at (ram,0x1041174c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void toggle_state_machine(void *param_1,int param_2)

{
  int iVar1;
  uint32_t *puVar2;
  
  if (param_2 == 0) {
    *(uint8_t *)((int)param_1 + 0x7c) = 0;
    clear_flag_with_notify(*(void **)((int)param_1 + 0x4c));
    check_kernel_call_success_10459fea(0x1);
    clear_flag_with_notify(*(void **)((int)param_1 + 0x48));
    check_kernel_call_success_10459fea(0x3);
    if (*(char *)((int)param_1 + 0xc0) == '\0') {
      clear_flag_with_notify(*(void **)((int)param_1 + 0x44));
    }
    else {
      call_helper_if_flag_set_1043ee88(*(uint32_t *)((int)param_1 + 100),0);
      call_helper_if_flag_set_1043ee5c(*(uint32_t *)((int)param_1 + 100),0);
    }
  }
  else if (*(char *)((int)param_1 + 0x7c) == '\0') {
    *(uint8_t *)((int)param_1 + 0x7c) = 1;
    if (*(char *)((int)param_1 + 0xc0) == '\0') {
      eventflag_clr_flg((uint32_t *)((int)param_1 + 0x74),1);
      *(uint32_t *)((int)param_1 + 0x70) = 0;
      clear_flag_with_notify(*(void **)((int)param_1 + 0x44));
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      (((vtbl_entry*)(iVar1))[8].fn)
                (*(int *)((int)param_1 + 0x6c) + (int)((vtbl_entry*)(iVar1))[8].adj,10,1,0);
      twai_flg_obj((uint32_t *)((int)param_1 + 0x74),1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      (((vtbl_entry*)(iVar1))[5].fn)(*(int *)((int)param_1 + 0x6c) + (int)((vtbl_entry*)(iVar1))[5].adj);
    }
    else {
      *(uint32_t *)((int)param_1 + 0x70) = 0;
      clear_gpio_pin_bits(*(void **)((int)param_1 + 100));
      call_helper_if_flag_set_1043ee88(*(uint32_t *)((int)param_1 + 100),1);
      call_helper_if_flag_set_1043ee5c(*(uint32_t *)((int)param_1 + 100),0);
      call_helper_with_two_twos((void *)(*(uint32_t *)((int)param_1 + 100)));
      apply_range_swap_if_inverted(*(void **)((int)param_1 + 100),0,0x457,0x30a);
      puVar2 = (uint32_t *)((int)param_1 + 0x74);
      eventflag_clr_flg(puVar2,1);
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      (((vtbl_entry*)(iVar1))[8].fn)
                (*(int *)((int)param_1 + 0x6c) + (int)((vtbl_entry*)(iVar1))[8].adj,0x9c4,1,0);
      twai_flg_obj(puVar2,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      (((vtbl_entry*)(iVar1))[5].fn)(*(int *)((int)param_1 + 0x6c) + (int)((vtbl_entry*)(iVar1))[5].adj);
      call_single_helper_1043ed1e(*(uint32_t *)((int)param_1 + 100));
      apply_range_swap_if_inverted(*(void **)((int)param_1 + 100),0,0x457,999);
      eventflag_clr_flg(puVar2,1);
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      (((vtbl_entry*)(iVar1))[8].fn)
                (*(int *)((int)param_1 + 0x6c) + (int)((vtbl_entry*)(iVar1))[8].adj,0x5dc,1,0);
      twai_flg_obj(puVar2,1,(void *)0x0,_DAT_105a2af0/*ROM*/);
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + 4);
      (((vtbl_entry*)(iVar1))[5].fn)(*(int *)((int)param_1 + 0x6c) + (int)((vtbl_entry*)(iVar1))[5].adj);
      call_single_helper_1043ed1e(*(uint32_t *)((int)param_1 + 100));
      call_helper_with_zero_and_two_1043ed7c((void *)(*(uint32_t *)((int)param_1 + 100)));
      call_helper_if_flag_set_1043ee88(*(uint32_t *)((int)param_1 + 100),0);
      call_helper_if_flag_set_1043ee5c(*(uint32_t *)((int)param_1 + 100),1);
    }
    empty_stub_function_103b76f0();
    check_kernel_call_success_10459fea(0x4);
    set_flag_with_notify(*(void **)((int)param_1 + 0x48));
    check_kernel_call_success_10459fea(0x5);
    set_flag_with_notify(*(void **)((int)param_1 + 0x4c));
    check_kernel_call_success_10459fea(0x5);
  }
  return;
}
