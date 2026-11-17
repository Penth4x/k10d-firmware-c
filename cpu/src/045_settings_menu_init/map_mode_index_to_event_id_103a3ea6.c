/* @k10d map_mode_index_to_event_id_103a3ea6 @ 0x103a3ea6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Returns a specific event ID constant based on a two-level index lookup.
 * summary:
 *   The function takes three parameters and uses a switch statement on param_2 to select a
 *   base event ID. For certain values of param_2 (0, 1, 2), it further checks param_3 to
 *   select a specific ID from a small range. For other values of param_2 (3-9), it returns
 *   a fixed ID. The returned values are sequential constants starting at 0x2010044. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t map_mode_index_to_event_id_103a3ea6(uint32_t param_1,uint32_t param_2,int param_3)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    if (param_3 == 0) {
      uVar1 = 0x2010044;
    }
    else if (param_3 == 1) {
      uVar1 = 0x2010045;
    }
    else if (param_3 == 2) {
      uVar1 = 0x2010046;
    }
    break;
  case 1:
    if (param_3 == 2) {
      uVar1 = 0x2010047;
    }
    else if (param_3 == 3) {
      uVar1 = 0x2010048;
    }
    break;
  case 2:
    if (param_3 == 2) {
      uVar1 = 0x2010049;
    }
    else if (param_3 == 3) {
      uVar1 = 0x201004a;
    }
    else {
      uVar1 = 0x2010049;
    }
    break;
  case 3:
    uVar1 = 0x201004b;
    break;
  case 4:
    uVar1 = 0x201004c;
    break;
  case 5:
    uVar1 = 0x201004d;
    break;
  case 6:
    uVar1 = 0x201004e;
    break;
  case 7:
    uVar1 = 0x201004f;
    break;
  case 8:
    uVar1 = 0x2010050;
    break;
  case 9:
    uVar1 = 0x2010051;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}
