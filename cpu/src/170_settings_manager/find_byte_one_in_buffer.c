/* @k10d find_byte_one_in_buffer @ 0x1047e53e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 170_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int find_byte_one_in_buffer(int *param_1,int param_2)

{
  if ((((-1 < param_2) && (param_2 < param_1[1])) && (*param_1 != 0)) && (param_2 < param_1[1])) {
    do {
      if (*(char *)(*param_1 + param_2) == '\x01') {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_1[1]);
  }
  return -1;
}
