/* @k10d wait_cpucom_line_clear_105017be @ 0x105017be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_cpucom_line_clear_105017be(int param_1)

{
  cpucom_wait_line_clear((void *)(*(uint32_t *)(param_1 + 4)),(int)(_DAT_105a7de4/*ROM*/));
  return;
}
