/* @k10d dispatch_by_range_id @ 0x104a9434
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 207_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_by_range_id(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (param_2 < 0x10) {
    uVar1 = dispatch_class_constructor_by_index(param_1,param_2);
  }
  else if (param_2 < 0x20) {
    uVar1 = dispatch_class_constructor_by_id_104a95be(param_1,param_2);
  }
  else if (param_2 < 0x30) {
    uVar1 = dispatch_class_constructor_by_id_104a9644(param_1,param_2);
  }
  else if (param_2 < 0x40) {
    uVar1 = dispatch_keycode_to_class_ctor(param_1,param_2);
  }
  else if (param_2 < 0x50) {
    uVar1 = dispatch_class_constructor(param_1,param_2);
  }
  else if ((param_2 < 0x50) || (0x5f < param_2)) {
    if ((param_2 < 0x60) || (0x6f < param_2)) {
      if ((param_2 < 0x200) || (0x20f < param_2)) {
        if ((param_2 < 0x210) || (0x21f < param_2)) {
          if ((param_2 < 0x220) || (0x22f < param_2)) {
            if ((param_2 < 0x3f0) || (0x3ff < param_2)) {
              if ((0x3ff < param_2) && (param_2 < 0x410)) {
                uVar1 = dispatch_class_105b6a30_ctor(param_1,param_2);
              }
            }
            else {
              uVar1 = query_class_105b6a30_status(param_1,param_2);
            }
          }
          else {
            uVar1 = dispatch_class_constructor_by_id_104a9a14(__frv_reg_unset(4), __frv_reg_unset(5));
          }
        }
        else {
          uVar1 = dispatch_event_to_class_constructor_104a992e(param_1,param_2);
        }
      }
      else {
        uVar1 = dispatch_event_to_class_constructor_104a9860(param_1,param_2);
      }
    }
    else {
      uVar1 = query_class_105b6a30_state(param_1,param_2);
    }
  }
  else {
    uVar1 = dispatch_key_code_to_class(param_1,param_2);
  }
  return uVar1;
}
