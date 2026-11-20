/* @k10d sdhc_transfer_blocks @ 0x10447ac4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Performs a single or multi-block SDHC transfer after validating bounds and setting the
 *   block size.
 * summary:
 *   Checks if the requested range (param_2 + param_3) fits within the object's capacity at
 *   offset 0x14. If the device is active (offset 0xdd non-zero), it sets a state flag,
 *   calls set_flag_and_notify_object, configures the SDHC block size to 0x200 (512 bytes)
 *   via sdhc_set_block_size, and dispatches to select_and_call_based_on_param3 for single-
 *   block or dispatch_state_transition_10448ddc for multi-block transfers. It updates the
 *   state at offset 0x120 based on the result.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int sdhc_transfer_blocks(cls_105a1a84 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 + param_3 <= (uint)param_1->field_0x14) {
    if (param_1->field_0xdd == '\0') {
      param_1->field_0x120 = 6;
    }
    else {
      param_1->field_0x120 = 0;
      set_flag_and_notify_object(param_1,1);
      sdhc_set_block_size((char*)(param_1) ->field_0x110,0x200);
      if (param_3 == 1) {
        iVar1 = select_and_call_based_on_param3((int)param_1,param_2,param_4);
      }
      else {
        iVar1 = dispatch_state_transition_10448ddc(param_1,param_2,param_3,param_4);
      }
      set_flag_and_notify_object(param_1,0);
      if (iVar1 == 0) {
        param_1->field_0x120 = 2;
      }
    }
  }
  return iVar1;
}
