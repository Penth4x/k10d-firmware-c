/* @k10d classify_value_and_build_menu @ 0x1039c8a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Maps a ushort value into a 1/2/3 bucket based on thresholds 10 and 100, then forwards
 *   it to a helper.
 * summary:
 *   If param_6 is non-zero, reads *param_3 and sets param_4 to 1 when the value is below
 *   10, 2 when it is 10-99, and 3 when it is 100 or higher; otherwise param_4 is left as
 *   passed in. It then calls menu_list_build with param_2, param_3, the computed param_4,
 *   and param_5. The callee's role is unknown, so the broader subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void classify_value_and_build_menu(void *param_1,int *param_2,ushort *param_3,uint32_t param_4,uint8_t param_5,
                 char param_6)

{
  if (param_6 != '\0') {
    if (*param_3 < 10) {
      param_4 = 1;
    }
    else {
      param_4 = 2;
      if (99 < *param_3) {
        param_4 = 3;
      }
    }
  }
  menu_list_build(param_2,param_3,param_4,param_5);
  return;
}
