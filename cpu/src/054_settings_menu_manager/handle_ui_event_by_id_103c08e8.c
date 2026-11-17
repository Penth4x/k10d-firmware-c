/* @k10d handle_ui_event_by_id_103c08e8 @ 0x103c08e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Dispatches a UI event based on param_2 ID, updating a flag or calling a handler with
 *   retrieved values.
 * summary:
 *   Checks if a byte at offset 0x36 in the object is non-zero. If param_2 is 0x10036, it
 *   sets a flag at offset 0x37 based on the state of offset 0x25. If param_2 is 0x1160002,
 *   it switches on a value at offset 0x1c (param_1[7]) to select specific data or call
 *   get_setting_by_index to retrieve values, then calls split_value_and_write_fields with
 *   these arguments. The function returns 0 in all paths.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_ui_event_by_id_103c08e8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint32_t uVar3;
  
  if (*(char *)((int)param_1 + 0x36) != '\0') {
    uVar1 = get_setting_by_index((int)param_1,5);
    uVar2 = get_setting_by_index((int)param_1,0x47);
    uVar3 = get_setting_by_index((int)param_1,0xb);
    if (param_2 == 0x10036) {
      if (*(char *)((int)param_1 + 0x25) == '\0') {
        *(uint8_t *)((int)param_1 + 0x37) = 1;
      }
      else {
        *(uint8_t *)((int)param_1 + 0x37) = 0;
      }
    }
    else if ((0x10036 < param_2) && (param_2 == 0x1160002)) {
      switch(param_1[7]) {
      case 0x1020014:
      case 0x1020015:
        uVar1 = (uint)DAT_10594f70/*ROM*/;
        break;
      default:
        goto switchD_103c0954_caseD_1020016;
      case 0x1020017:
      case 0x1020018:
        uVar1 = (uint)DAT_10594f71/*ROM*/;
        uVar3 = 0;
        break;
      case 0x102001a:
      case 0x102001b:
        uVar1 = (uint)DAT_10594f72/*ROM*/;
        uVar3 = 0;
        break;
      case 0x1020020:
        uVar1 = get_setting_by_index((int)param_1,5);
        uVar2 = get_setting_by_index((int)param_1,0x47);
        uVar3 = get_setting_by_index((int)param_1,0xb);
        break;
      case 0x1020028:
        uVar2 = (uint)DAT_10594f73/*ROM*/;
        break;
      case 0x102002a:
        uVar2 = (uint)DAT_10594f74/*ROM*/;
      }
      split_value_and_write_fields(param_1,uVar1,uVar2,uVar3);
      return 0;
    }
  }
switchD_103c0954_caseD_1020016:
  return 0;
}
