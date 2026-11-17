/* @k10d lens_fw_update_teardown @ 0x10547044
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Invokes a single cleanup routine (iterate_lens_fw_blocks) to tear down lens firmware
 *   update state.
 * summary:
 *   A one-line wrapper that calls iterate_lens_fw_blocks and returns. It is referenced by
 *   several verified deleting destructors of classes in the lens_firmware_update module,
 *   suggesting it performs module-level cleanup or resource release during object
 *   destruction. The specific behavior of iterate_lens_fw_blocks is unknown, so the exact
 *   resources freed are not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lens_fw_update_teardown(void)

{
  iterate_lens_fw_blocks();
  return;
}
