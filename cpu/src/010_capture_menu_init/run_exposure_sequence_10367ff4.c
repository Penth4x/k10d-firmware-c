/* @k10d run_exposure_sequence_10367ff4 @ 0x10367ff4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * purpose:
 *   Executes a timed exposure cycle, polling for completion and handling timeout or error
 *   states.
 * summary:
 *   Initializes the object state and starts a sequence via
 *   init_struct_and_call_handler_1036bfc0. It enters a polling loop using
 *   register_and_activate_event, waiting for a status code (0xb) to trigger progress
 *   updates via register_menu_item_with_limit. Upon exit, it performs cleanup, delays, and
 *   selects a final state string based on the result code stored at offset 0xa8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_exposure_sequence_10367ff4(void *param_1)

{
  uint16_t uVar1;
  uint8_t uVar2;
  uint uVar3;
  uint32_t uVar4;
  int iVar5;
  
  write_second_field_of_struct(param_1,0);
  set_flag_and_dispatch_event(param_1,1);
  uVar1 = *(uint16_t *)((int)param_1 + 0xa0);
  uVar2 = *(uint8_t *)((int)param_1 + 0xa2);
  uVar4 = get_setting_0xa3_with_refresh((int *)0x800158d4/*SDRAM*/);
  init_struct_and_call_handler_1036bfc0((int)param_1,uVar1,uVar2,(char)uVar4);
  *(uint32_t *)((int)param_1 + 0xa8) = 0x2e;
  *(uint8_t *)((int)param_1 + 0xa6) = 1;
  while (iVar5 = register_and_activate_event((int)param_1), iVar5 == 0xb) {
    uVar4 = get_sram_field_at_offset_0x3c((uint32_t)(param_1));
    register_menu_item_with_limit(0x80018060/*SDRAM*/,uVar4);
  }
  *(uint8_t *)((int)param_1 + 0xa6) = 0;
  if (iVar5 == 1) {
    register_menu_item_with_limit(0x80018060/*SDRAM*/,100);
  }
  else if (iVar5 != 2) {
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015910/*SDRAM*/));
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015b24/*SDRAM*/));
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015d38/*SDRAM*/));
    init_object_with_two_ids_10368174(param_1,0x10);
    check_kernel_call_success_10459fea();
    goto LAB_103680f8;
  }
  lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015910/*SDRAM*/));
  lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015b24/*SDRAM*/));
  lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015d38/*SDRAM*/));
LAB_103680f8:
  check_kernel_call_success_10459fea();
  set_flag_and_call_helper_10368282((int)param_1);
  write_second_field_of_struct(param_1,1);
  uVar3 = *(uint *)((int)param_1 + 0xa8);
  uVar4 = _DAT_105bb5f4/*ROM*/;
  if (uVar3 != 3) {
    if (uVar3 < 4) {
      if ((uVar3 != 0) && (uVar3 != 1)) {
        return;
      }
    }
    else if ((uVar3 != 7) && (uVar3 != 10)) {
      if (uVar3 != 0x29) {
        return;
      }
      if (DAT_800043a1/*SDRAM*/ != '\0') {
        uVar4 = _DAT_105bb5f8/*ROM*/;
      }
    }
  }
  forward_param_to_global_offset(param_1,uVar4);
  return;
}
