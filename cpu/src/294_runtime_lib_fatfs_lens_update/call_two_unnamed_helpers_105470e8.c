/* @k10d call_two_unnamed_helpers_105470e8 @ 0x105470e8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Sequentially invokes two unnamed helper functions with no arguments.
 * summary:
 *   The function contains no local logic and simply calls iterate_lens_fw_update_entries
 *   followed by empty_noop_function_1045bc0c. Both callees are unnamed, so their specific
 *   roles are unknown. The source module is lens_firmware_update, but the function's own
 *   code does not reveal specific lens-update behavior.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_unnamed_helpers_105470e8(void)

{
  iterate_lens_fw_update_entries();
  empty_noop_function_1045bc0c();
  return;
}
