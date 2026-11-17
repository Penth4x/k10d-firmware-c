/* @k10d validate_id_and_set_flag_1042bc28 @ 0x1042bc28
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_id_and_set_flag_1042bc28(int param_1,int param_2)

{
  if (param_2 != 0x1040006) {
    if (param_2 < 0x1040007) {
      if (param_2 != 0x1040003) {
        if (param_2 < 0x1040004) {
          if ((param_2 != 0x1020002) && (param_2 != 0x1040002)) {
            return 0;
          }
        }
        else if ((param_2 != 0x1040004) && (param_2 != 0x1040005)) {
          return 0;
        }
      }
    }
    else if (param_2 != 0x104000d) {
      if (param_2 < 0x104000e) {
        if ((param_2 != 0x1040008) && (param_2 != 0x104000c)) {
          return 0;
        }
      }
      else if (((param_2 != 0x104000e) && (param_2 != 0x104000f)) && (param_2 != 0x1070001)) {
        return 0;
      }
    }
  }
  set_flg_obj((uint32_t *)(param_1 + 0x2c));
  return 0;
}
