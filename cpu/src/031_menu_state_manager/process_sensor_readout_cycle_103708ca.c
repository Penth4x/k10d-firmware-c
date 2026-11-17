/* @k10d process_sensor_readout_cycle_103708ca @ 0x103708ca
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Executes a sensor readout sequence, polls for data completion, and updates state based
 *   on the result.
 * summary:
 *   The function initializes the object state, enters a loop polling
 *   register_and_activate_event until it returns a value other than 0xb, and processes data
 *   via get_sram_field_at_offset_0x3c during the wait. It then performs a delay
 *   (check_kernel_call_success_10459fea) and finalizes the cycle. Based on the final state
 *   value at offset 0x6c, it may call lookup_and_copy_result with specific SDRAM addresses
 *   (0x80015d38, etc.) and updates a global state via forward_param_to_global_offset. The
 *   pattern of polling, data processing, and state-dependent branching is consistent with a
 *   sensor or AFE readout operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t process_sensor_readout_cycle_103708ca(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  
  write_second_field_of_struct(param_1,0);
  iVar1 = *(int *)((int)param_1 + 0x68);
  init_object_with_sram_ref_10370b1e(param_1);
  init_struct_with_0x2000_flag(param_1,(uint)(iVar1 == 0x3140009));
  *(uint32_t *)((int)param_1 + 0x6c) = 0x2e;
  *(uint8_t *)((int)param_1 + 0xd4) = 1;
  while (iVar1 = register_and_activate_event((int)param_1), iVar1 == 0xb) {
    uVar3 = get_sram_field_at_offset_0x3c(param_1);
    register_menu_item_with_limit(0x80018060/*SDRAM*/,uVar3);
  }
  *(uint8_t *)((int)param_1 + 0xd4) = 0;
  if (iVar1 == 1) {
    register_menu_item_with_limit(0x80018060/*SDRAM*/,100);
  }
  else if (iVar1 == 2) {
    iVar1 = 1;
  }
  check_kernel_call_success_10459fea();
  set_field_and_call_helper_10370bbc((int)param_1);
  write_second_field_of_struct(param_1,1);
  if (iVar1 == 1) {
    lookup_and_copy_result(param_1,0x80015d38/*SDRAM*/);
    lookup_and_copy_result(param_1,0x80015b24/*SDRAM*/);
    lookup_and_copy_result(param_1,0x80015910/*SDRAM*/);
    uVar3 = get_or_create_singleton_object_1036c796();
    uVar4 = 2;
  }
  else {
    uVar3 = get_or_create_singleton_object_1036c796();
    uVar4 = 1;
  }
  uVar4 = read_array_element_bounded(uVar3,uVar4);
  uVar2 = *(uint *)((int)param_1 + 0x6c);
  uVar3 = _DAT_105bb5f4/*ROM*/;
  if (uVar2 != 3) {
    if (uVar2 < 4) {
      if ((uVar2 != 0) && (uVar2 != 1)) {
        return uVar4;
      }
    }
    else if ((uVar2 != 7) && (uVar2 != 10)) {
      if (uVar2 != 0x29) {
        return uVar4;
      }
      if (DAT_800043a1/*SDRAM*/ != '\0') {
        uVar3 = _DAT_105bb5f8/*ROM*/;
      }
    }
  }
  forward_param_to_global_offset(param_1,uVar3);
  return uVar4;
}
