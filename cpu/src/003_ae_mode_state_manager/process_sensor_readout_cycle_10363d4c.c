/* @k10d process_sensor_readout_cycle_10363d4c @ 0x10363d4c
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Executes a sensor readout sequence, polls for completion, and returns a status or data
 *   pointer.
 * summary:
 *   Checks a state field at offset 0x20c for a specific ID (0x3040009). If valid, it
 *   initializes hardware, enters a polling loop calling register_and_activate_event until a
 *   non-0xb status is returned, and processes the result. It then calls
 *   check_kernel_call_success_10459fea (likely a delay) and updates state. The function
 *   returns a pointer derived from read_array_element_bounded or the object itself based on
 *   the final status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10363d6c) overlaps instruction at (ram,0x10363d6a)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * process_sensor_readout_cycle_10363d4c(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  void *pvVar4;
  uintptr_t sp;
  uint32_t uStack_c;
  
  if (*(int *)((int)param_1 + 0x20c) == 0x3040009) {
    write_second_field_of_struct(param_1,0);
    init_object_field_and_call_helpers_1036506c(param_1);
    init_struct_and_notify_1036bf0e(param_1,(uint)*(ushort *)((int)param_1 + 0x21c),(int)param_1 + 0x224);
    *(uint32_t *)((int)param_1 + 0x210) = 0x2e;
    *(uint8_t *)((int)param_1 + 0x16) = 1;
    while (iVar2 = register_and_activate_event((int)param_1), iVar2 == 0xb) {
      uVar3 = get_sram_field_at_offset_0x3c(param_1);
      register_menu_item_with_limit(0x80018060/*SDRAM*/,uVar3);
    }
    *(uint8_t *)((int)param_1 + 0x16) = 0;
    if (iVar2 == 1) {
      register_menu_item_with_limit(0x80018060/*SDRAM*/,100);
    }
    else if (iVar2 == 2) {
      iVar2 = 1;
    }
    check_kernel_call_success_10459fea();
    set_field_and_call_helper_1036510e((int)param_1);
    write_second_field_of_struct(param_1,1);
    if (iVar2 == 1) {
      uStack_c = 0;
      iVar2 = dispatch_event_and_return_offset(param_1,&uStack_c,0xffffffff);
      if (iVar2 == 1) {
        uVar3 = get_or_create_singleton_object_1036c796();
        pvVar4 = (void *)read_array_element_bounded(uVar3,3);
      }
      else {
        uVar3 = get_or_create_singleton_object_1036c796();
        pvVar4 = (void *)read_array_element_bounded(uVar3,1);
      }
    }
    else {
      uVar3 = get_or_create_singleton_object_1036c796();
      uVar3 = read_array_element_bounded(uVar3,1);
      *(uint32_t *)((int)param_1 + 0x18) = uVar3;
      pvVar4 = param_1;
    }
    uVar1 = *(uint *)((int)param_1 + 0x210);
    uVar3 = _DAT_105bb5f4/*ROM*/;
    if (uVar1 != 3) {
      if (uVar1 < 4) {
        if ((uVar1 != 0) && (uVar1 != 1)) {
          return pvVar4;
        }
      }
      else if ((uVar1 != 7) && (uVar1 != 10)) {
        if (uVar1 != 0x29) {
          return pvVar4;
        }
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          uVar3 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(param_1,uVar3);
  }
  else {
    uVar3 = get_or_create_singleton_object_1036c796();
    pvVar4 = (void *)read_array_element_bounded(uVar3,3);
  }
  return pvVar4;
}
