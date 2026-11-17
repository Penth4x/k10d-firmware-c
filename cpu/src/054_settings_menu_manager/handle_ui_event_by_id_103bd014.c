/* @k10d handle_ui_event_by_id_103bd014 @ 0x103bd014
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a UI event ID to update a state flag or call a handler based on object
 *   fields.
 * summary:
 *   Checks if a byte at offset 0x39 in the object is non-zero. If so, it reads two values
 *   via get_setting_by_index. For event ID 0x10036, it sets a flag at offset 0x3a based on
 *   the state at offset 0x29. For event ID 0x1160002, it selects a parameter from a switch
 *   on param_1[7] and calls split_value_and_write_parts. Returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_ui_event_by_id_103bd014(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    uVar1 = get_setting_by_index((int)param_1,6);
    uVar2 = get_setting_by_index((int)param_1,7);
    if (param_2 == 0x10036) {
      if (*(char *)((int)param_1 + 0x29) == '\0') {
        *(uint8_t *)((int)param_1 + 0x3a) = 1;
      }
      else {
        *(uint8_t *)((int)param_1 + 0x3a) = 0;
      }
    }
    else if ((0x10036 < param_2) && (param_2 == 0x1160002)) {
      switch(param_1[7]) {
      case 0x1010038:
        uVar1 = (uint)DAT_10594e44/*ROM*/;
        break;
      default:
        goto switchD_103bd072_caseD_1010039;
      case 0x101003a:
        uVar1 = (uint)DAT_10594e45/*ROM*/;
        break;
      case 0x101003c:
        uVar1 = (uint)DAT_10594e46/*ROM*/;
        break;
      case 0x1010045:
        uVar2 = (uint)DAT_10594e47/*ROM*/;
        break;
      case 0x1010047:
        uVar2 = (uint)DAT_10594e48/*ROM*/;
        break;
      case 0x1010049:
        uVar2 = (uint)DAT_10594e49/*ROM*/;
      }
      split_value_and_write_parts(param_1,uVar1,uVar2);
      return 0;
    }
  }
switchD_103bd072_caseD_1010039:
  return 0;
}
