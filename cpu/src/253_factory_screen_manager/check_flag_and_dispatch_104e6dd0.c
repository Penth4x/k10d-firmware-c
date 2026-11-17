/* @k10d check_flag_and_dispatch_104e6dd0 @ 0x104e6dd0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Checks bit 4 of a flag byte in param_2 and returns an error code or calls a helper
 *   based on param_3 and bit 0.
 * summary:
 *   The function inspects the byte at offset 0x1f of the object pointed to by param_2. If
 *   bit 4 is set, it returns 0xffffffeb (-21). If param_3 is zero or bit 0 is clear, it
 *   calls validate_lens_fw_update_params with param_1 and param_2. Otherwise, it returns
 *   0xffffffe2 (-30). The caller is process_sensor_readout_request_104e6a1e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_flag_and_dispatch_104e6dd0(void *param_1,void *param_2,int param_3)

{
  uint32_t uVar1;
  
  if ((*(byte *)((int)param_2 + 0x1f) & 0x10) == 0x10) {
    uVar1 = 0xffffffeb;
  }
  else if ((param_3 == 0) || ((*(byte *)((int)param_2 + 0x1f) & 1) == 0)) {
    uVar1 = validate_lens_fw_update_params((int)param_1,param_2);
  }
  else {
    uVar1 = 0xffffffe2;
  }
  return uVar1;
}
