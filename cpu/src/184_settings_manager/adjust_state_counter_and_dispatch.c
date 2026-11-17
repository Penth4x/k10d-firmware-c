/* @k10d adjust_state_counter_and_dispatch @ 0x10489046
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Modifies a state counter in the object based on the results of helper calls and
 *   dispatches to virtual methods or other functions.
 * summary:
 *   The function checks param_2 and returns early if it is not 2. It reads a value from
 *   offset 0x11 of param_1 and calls advance_state_on_virtual_ok and
 *   advance_state_on_virtual_event. Depending on their return values and the state counter,
 *   it either calls virtual methods on param_3, increments/decrements the state counter, or
 *   calls other helper functions like get_or_init_ram_object_10489d88,
 *   set_flag_at_offset_0x50_104894e8, get_or_create_singleton_1051f11c, or
 *   get_or_create_singleton_10488998. Finally, it calls sibling_item_register with param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int adjust_state_counter_and_dispatch(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 2) {
    if (param_2 != 1) {
      return (int)param_1;
    }
    return 0;
  }
  iVar2 = param_1[0x11];
  iVar1 = advance_state_on_virtual_ok((int)param_1,param_3);
  if (iVar1 == 0) {
    iVar1 = advance_state_on_virtual_event((int)param_1,param_3);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x15);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_3 + 0x24))((int)*(short *)(*param_3 + 0x20) + (int)param_3,0x17)
        ;
        if (iVar1 == 0) {
          return (int)param_1;
        }
        return 0;
      }
      if (iVar2 == 4) {
        iVar1 = get_or_init_ram_object_10489d88();
        return iVar1;
      }
      set_flag_at_offset_0x50_104894e8((int)param_1);
    }
    else {
      if (5 < iVar2) {
        iVar1 = get_or_create_singleton_1051f11c();
        *(uint32_t *)(iVar1 + 0x44) = 2;
        return iVar1;
      }
      param_1[0x11] = iVar2 + 1;
    }
  }
  else {
    if (iVar2 < 3) {
      iVar1 = get_or_create_singleton_10488998();
      *(uint32_t *)(iVar1 + 0x44) = 7;
      return iVar1;
    }
    param_1[0x11] = iVar2 + -1;
  }
  iVar1 = sibling_item_register(param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
  return iVar1;
}
