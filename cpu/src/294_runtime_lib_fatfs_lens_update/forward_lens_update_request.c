/* @k10d forward_lens_update_request @ 0x10539656
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Forwards three parameters to a lens firmware update helper and returns its result.
 * summary:
 *   This is a thin wrapper that calls match_lens_fw_info_fields with param_3, param_1, and
 *   param_2 (reordering the first two arguments) and returns the callee's return value
 *   directly. It resides in the lens_firmware_update module, which handles communication
 *   with the lens CPU for firmware updates. The function itself performs no logic beyond
 *   argument reordering and delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_lens_update_request(void *param_1,int param_2,void *param_3)

{
  uint32_t uVar1;
  
  uVar1 = match_lens_fw_info_fields(param_3,param_1,param_2);
  return uVar1;
}
