/* @k10d dispatch_virtual_event_flags @ 0x1048aa96
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Queries a virtual object for specific event flags and sets corresponding state bits in
 *   a context structure.
 * summary:
 *   The function calls poll_key_states_and_update_counters, then uses virtual calls on
 *   param_2 to check for the presence of several integer identifiers (0xd, 0xe, 0x10, 0x17,
 *   1, 0xc, 0). Depending on which identifiers are found, it calls specific helper
 *   functions (set_flag_from_bool_1046fd0c, set_object_flag_from_bool, etc.) and sets
 *   corresponding byte flags in the structure pointed to by param_1 (at offsets 0x11f,
 *   0x121, 0x122, 0x123, and 0x48). It then performs a second pass to clear these flags if
 *   the corresponding virtual queries return non-zero again.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_event_flags(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  poll_key_states_and_update_counters(__frv_reg_unset(4),(int *)__frv_reg_unset(5));
  iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,0xd);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,0xe);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,0x10);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,0x17)
        ;
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,1);
          iVar2 = *param_2;
          if (iVar1 != 0) {
            iVar1 = (**(code **)(iVar2 + 0x1c))((int)*(short *)(iVar2 + 0x18) + (int)param_2,0xc);
            if ((iVar1 != 0) || (iVar1 = query_object_flag_at_offset_0x1c_1046d73a(*param_1), iVar1 != 0)) {
              run_sensor_readout_sequence(*param_1,(uint8_t *)1,0,(uint8_t *)__frv_reg_unset(7));
            }
            iVar2 = *param_2;
          }
          iVar1 = (**(code **)(iVar2 + 0x24))((int)*(short *)(iVar2 + 0x20) + (int)param_2,0);
          if (iVar1 != 0) {
            set_object_flag_from_bool(*param_1,1);
            *(uint8_t *)(param_1 + 0x48) = 1;
          }
        }
        else {
          set_object_field_via_helper_1046fd9e(*param_1, __frv_reg_unset(5));
          *(uint8_t *)((int)param_1 + 0x123) = 1;
        }
      }
      else {
        set_param_via_object(*param_1,1);
        *(uint8_t *)((int)param_1 + 0x122) = 1;
      }
    }
    else {
      set_flag_from_bool_1046fd0c(*param_1,1);
      *(uint8_t *)((int)param_1 + 0x121) = 1;
    }
  }
  else {
    set_param_and_dispatch_event(*param_1,1);
    *(uint8_t *)((int)param_1 + 0x11f) = 1;
  }
  if ((*(char *)((int)param_1 + 0x122) != '\0') &&
     (iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,0x10),
     iVar1 != 0)) {
    set_param_via_object(*param_1,0);
    *(uint8_t *)((int)param_1 + 0x122) = 0;
  }
  if ((*(char *)((int)param_1 + 0x121) != '\0') &&
     (iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,0xe),
     iVar1 != 0)) {
    set_flag_from_bool_1046fd0c(*param_1,0);
    *(uint8_t *)((int)param_1 + 0x121) = 0;
  }
  if ((*(char *)(param_1 + 0x48) != '\0') &&
     (iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,0),
     iVar1 != 0)) {
    set_object_flag_from_bool(*param_1,0);
    *(uint8_t *)(param_1 + 0x48) = 0;
  }
  if ((*(char *)((int)param_1 + 0x11f) != '\0') &&
     (iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,0xd),
     iVar1 != 0)) {
    set_param_and_dispatch_event(*param_1,0);
    *(uint8_t *)((int)param_1 + 0x11f) = 0;
  }
  if ((*(char *)((int)param_1 + 0x123) != '\0') &&
     (iVar1 = (**(code **)(*param_2 + 0x1c))((int)*(short *)(*param_2 + 0x18) + (int)param_2,0x17),
     iVar1 != 0)) {
    set_object_field_via_helper_1046fd9e(*param_1,0);
    *(uint8_t *)((int)param_1 + 0x123) = 0;
  }
  return;
}
