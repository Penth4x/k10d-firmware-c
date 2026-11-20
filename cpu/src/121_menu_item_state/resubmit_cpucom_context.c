/* @k10d resubmit_cpucom_context @ 0x10434642
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 121_menu_item_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void resubmit_cpucom_context(int param_1)

{
  cpucom_ctx_resubmit((int *)(*(uint32_t *)(param_1 + 0x1c)),(void *)(param_1 + 4));
  return;
}
