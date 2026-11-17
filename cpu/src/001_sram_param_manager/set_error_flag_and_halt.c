/* @k10d set_error_flag_and_halt @ 0x100f0a1e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x100f0a58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_error_flag_and_halt(int param_1)

{
  if (param_1 != 0) {
    _DAT_00000048 = 0x80d;
    if (0 < param_1) {
      __halt();
    }
    _DAT_0000004e = 0;
  }
  return;
}
