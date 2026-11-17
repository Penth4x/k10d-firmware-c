/* @k10d send_lens_fw_update_command @ 0x1053704e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void send_lens_fw_update_command(uint32_t *param_1)

{
  run_sr_dma_sequence(*param_1,param_1[0x15] + 0x40,0x1bfe);
  return;
}
