/* @k10d init_lens_update_context_10537c34 @ 0x10537c34
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_lens_update_context_10537c34(uint8_t *param_1, uint32_t param_x1)

{
  *param_1 = 0;
  release_lens_update_context_1053d0ac((int)param_1);
  free_lens_fw_update_buffers(param_1);
  release_lens_update_resource(param_1);
  free_lens_update_lists(param_1);
  return 0;
}
