/* @k10d dispatch_mode_transition_10367f40 @ 0x10367f40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 009_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_transition_10367f40(void *param_1)

{
  uint16_t uVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  int iVar4;
  
  set_flag_and_dispatch_event(param_1,0);
  uVar1 = *(uint16_t *)((int)param_1 + 0xa0);
  uVar2 = *(uint8_t *)((int)param_1 + 0xa2);
  uVar3 = get_setting_0xa3_with_refresh((int *)0x800158d4/*SDRAM*/);
  iVar4 = dispatch_event_with_stack_param(param_1,uVar1,uVar2,(char)uVar3);
  check_kernel_call_success_10459fea();
  if (iVar4 == 1) {
    lookup_and_copy_result((void *)__frv_reg_unset(4),(uint32_t *)__frv_reg_unset(5));
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015b24/*SDRAM*/));
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015d38/*SDRAM*/));
  }
  else {
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015910/*SDRAM*/));
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015b24/*SDRAM*/));
    lookup_and_copy_result((void *)(param_1),(uint32_t *)(0x80015d38/*SDRAM*/));
    init_object_with_two_ids_10368174(param_1,0x10);
    check_kernel_call_success_10459fea();
  }
  return;
}
