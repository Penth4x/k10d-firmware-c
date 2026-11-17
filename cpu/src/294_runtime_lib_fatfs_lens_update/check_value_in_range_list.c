/* @k10d check_value_in_range_list @ 0x105467ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_value_in_range_list(uint param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  
  do {
    pbVar1 = param_2 + 1;
    if ((*pbVar1 == 0x2d) && (param_2 + 2 < param_3)) {
      if ((*param_2 <= param_1) && (param_1 <= param_2[2])) {
        return 1;
      }
      pbVar1 = param_2 + 3;
    }
    else if (*param_2 == param_1) {
      return 1;
    }
    param_2 = pbVar1;
    if (param_3 <= pbVar1) {
      return 0;
    }
  } while( true );
}
