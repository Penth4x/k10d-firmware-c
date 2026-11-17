/* @k10d process_two_param_blocks @ 0x1046ca2a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 153_display_sync_driver (unit names are model-proposed)
 * purpose:
 *   Reads a state value from param_1, then invokes a shared handler twice with param_2 and
 *   param_3.
 * summary:
 *   The function calls call_two_helpers_with_zeroed_struct to populate a local integer,
 *   then calls refresh_settings_if_dirty_1046cae4. It queries a boolean flag via
 *   check_setting_0xa7_enabled and passes the integer, flag, and param_2 to
 *   compute_sensor_readout_timing. It then calls refresh_settings_if_dirty_1046cb1a,
 *   queries another flag via check_setting_0xa8_enabled, and passes the same integer, new
 *   flag, and param_3 to compute_sensor_readout_timing. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_two_param_blocks(int param_1,uint16_t *param_2,uint16_t *param_3)

{
  int iVar1;
  uint32_t extraout_r4;
  bool bVar2;
  uint32_t extraout_r4_00;
  uintptr_t sp;
  uint8_t *puVar3;
  uint8_t auStack_24 [4];
  int iStack_c;
  
  puVar3 = auStack_24;
  iStack_c = 0;
  call_two_helpers_with_zeroed_struct(param_1,&iStack_c);
  iVar1 = iStack_c;
  refresh_settings_if_dirty_1046cae4(param_1);
  bVar2 = check_setting_0xa7_enabled(param_1);
  puVar3[3] = bVar2;
  compute_sensor_readout_timing(param_1,param_2,iVar1,extraout_r4,puVar3[3]);
  iVar1 = iStack_c;
  refresh_settings_if_dirty_1046cb1a(param_1);
  bVar2 = check_setting_0xa8_enabled(param_1);
  puVar3[3] = bVar2;
  compute_sensor_readout_timing(param_1,param_3,iVar1,extraout_r4_00,puVar3[3]);
  return;
}
