/* @k10d configure_subobject_from_globals @ 0x1036f49e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Computes a flag from global state and a field in the input object, then sets a series
 *   of parameters on a sub-object at offset 0x30.
 * summary:
 *   The function determines a boolean flag based on global variables (DAT_800043a0,
 *   DAT_80015f14, _DAT_80015d1c) and a byte at offset 0xb9 in the input object. It then
 *   calls a sequence of setter functions (apply_mode_state_to_object_group through
 *   log_buffer_allocation_result) on a sub-object at offset 0x30, passing values derived
 *   from global memory locations and helper calls (read_struct_field_at_index_104c2890). It
 *   concludes by calling update_object_state_and_data on the input object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_subobject_from_globals(void *param_1)

{
  bool bVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  
  bVar1 = false;
  if ((DAT_800043a0/*SDRAM*/ == '\0') || (DAT_80015f14/*SDRAM*/ == '\0')) {
LAB_1036f4e2:
    if (!bVar1) {
      uVar3 = 1;
      goto LAB_1036f4ec;
    }
  }
  else {
    if (_DAT_80015d1c/*SDRAM*/ == 2) {
      bVar1 = true;
      goto LAB_1036f4e2;
    }
    if (*(char *)((int)param_1 + 0xb9) != '\0') goto LAB_1036f4e2;
  }
  uVar3 = 0;
LAB_1036f4ec:
  apply_mode_state_to_object_group((int)param_1 + 0x30,uVar3);
  iVar4 = (int)param_1 + 0x30;
  uVar3 = init_sram_block_and_store_param(param_1);
  register_and_select_menu_items_1038deb2(iVar4,uVar3);
  store_two_values_and_copy(iVar4,_DAT_80015d3c/*SDRAM*/,_DAT_80015d3e/*SDRAM*/);
  if (DAT_800043a0/*SDRAM*/ == '\0') {
    uVar3 = 5;
  }
  else {
    uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0);
  }
  register_and_select_menu_item_1038e066(iVar4,uVar3);
  invoke_virtual_slot_two_1038e170(iVar4,uRam80015d60);
  dispatch_virtual_call_on_object_1038e19e(iVar4,sRam80015f0c != 0);
  uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xb);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xc);
  format_and_log_error_code(iVar4,uVar3,(void *)uVar2);
  uVar3 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xd);
  uVar2 = read_struct_field_at_index_104c2890((void *)0x80015d38/*SDRAM*/,0xe);
  log_buffer_allocation_result(iVar4,uVar3,(void *)uVar2);
  update_object_state_and_data((int)param_1);
  return;
}
