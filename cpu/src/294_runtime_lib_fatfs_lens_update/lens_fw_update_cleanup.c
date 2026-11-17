/* @k10d lens_fw_update_cleanup @ 0x10536908
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Releases resources held by a lens firmware update object before it is destroyed.
 * summary:
 *   Virtual slot 4 of cls_10621d20 in the lens_firmware_update module. It calls two unnamed
 *   helpers (trigger_sr_cal_transfer_104867c0, call_helper_with_second_field_104867ae) on
 *   the object, then conditionally calls heap_free_2 on the pointer stored at offset 0x54
 *   if that field is non-NULL. The pattern is consistent with tearing down sub-objects or
 *   handles owned by the lens update state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void lens_fw_update_cleanup(int param_1)

{
  trigger_sr_cal_transfer_104867c0(param_1);
  call_helper_with_second_field_104867ae(param_1);
  if (*(int *)(param_1 + 0x54) != 0) {
    heap_free_2(*(int *)(param_1 + 0x54));
  }
  return;
}
