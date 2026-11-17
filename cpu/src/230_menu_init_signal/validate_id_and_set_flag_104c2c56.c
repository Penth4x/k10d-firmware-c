/* @k10d validate_id_and_set_flag_104c2c56 @ 0x104c2c56
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_id_and_set_flag_104c2c56(int param_1,int param_2)

{
  if (param_2 != 0xa00007) {
    if (param_2 < 0xa00008) {
      if (param_2 != 0xa00002) {
        if (param_2 < 0xa00003) {
          if ((param_2 != 0x900001) && (param_2 != 0xa00001)) {
            return 0;
          }
        }
        else if ((param_2 != 0xa00004) && (param_2 != 0xa00006)) {
          return 0;
        }
      }
    }
    else if (param_2 != 0xc00002) {
      if (param_2 < 0xc00003) {
        if ((param_2 != 0xb00001) && (param_2 != 0xc00001)) {
          return 0;
        }
      }
      else if (((param_2 != 0xc00006) && (param_2 != 0x1100001)) && (param_2 != 0x1130001)) {
        return 0;
      }
    }
  }
  set_flg_obj((uint32_t *)(param_1 + 0x78));
  return 0;
}
