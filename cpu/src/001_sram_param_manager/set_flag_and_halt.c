/* @k10d set_flag_and_halt @ 0x100f1c5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x100f1c9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_and_halt(int param_1)

{
  if (param_1 != 0) {
    _DAT_00000058 = 0x80e;
    if (param_1 != 0) {
      __halt();
    }
    _DAT_0000005e = 0;
  }
  return;
}
