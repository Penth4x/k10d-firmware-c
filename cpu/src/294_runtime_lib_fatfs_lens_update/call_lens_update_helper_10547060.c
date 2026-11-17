/* @k10d call_lens_update_helper_10547060 @ 0x10547060
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function in the lens firmware update module and returns.
 * summary:
 *   This function is a one-line wrapper that calls iterate_lens_fw_blocks and returns
 *   immediately. It resides in the lens_firmware_update module, which handles lens CPU
 *   firmware updates. The specific behavior of the called helper is not known from the
 *   provided information, so this function's role is limited to delegating to that helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_lens_update_helper_10547060(void)

{
  iterate_lens_fw_blocks();
  return;
}
