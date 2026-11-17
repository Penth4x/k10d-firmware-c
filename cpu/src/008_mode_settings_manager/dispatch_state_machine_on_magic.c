/* @k10d dispatch_state_machine_on_magic @ 0x10366b50
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Checks a magic value at offset 0x50 and dispatches to different handler branches based
 *   on state codes.
 * summary:
 *   The function validates a 4-byte identifier at param_1+0x50 against 0x3060031. If
 *   matched, it calls write_second_field_of_struct, gathers several fields from the object,
 *   and enters a loop calling init_object_and_notify while register_and_activate_event
 *   returns 10. It then sleeps for 1000 units and branches on the final return value of
 *   register_and_activate_event (5, 4, or 1) to call different handlers. If the magic does
 *   not match or specific conditions are met, it calls forward_param_to_global_offset or
 *   read_array_element_bounded with values from get_or_create_singleton_object_1036c796.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dispatch_state_machine_on_magic(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_18 [12];
  
  puVar5 = (uint32_t *)auStack_18;
  if (*(int *)((int)param_1 + 0x50) == 0x3060031) {
    write_second_field_of_struct(param_1,0);
    uVar2 = *(uint32_t *)((int)param_1 + 0x5c);
    uVar3 = *(uint32_t *)((int)param_1 + 0x60);
    uVar4 = *(uint32_t *)((int)param_1 + 0x68);
    *puVar5 = *(uint32_t *)((int)param_1 + 100);
    puVar5[1] = uVar4;
    *(uint8_t *)((int)puVar5 + 0xb) = DAT_800043a0/*SDRAM*/;
    init_struct_and_call_handler_1036c1fe((int)param_1,(int)param_1 + 0x6c,uVar2,uVar3,*puVar5,puVar5[1],
                 *(uint8_t *)((int)puVar5 + 0xb));
    while (iVar1 = register_and_activate_event((int)param_1), iVar1 == 10) {
      init_object_and_notify(param_1);
    }
    check_kernel_call_success_10459fea();
    write_second_field_of_struct(param_1,1);
    if (iVar1 == 5) {
      init_object_with_sram_ref_10367096(param_1,8);
      return (int)param_1;
    }
    if (iVar1 == 4) {
      init_object_with_sram_ref_10367096(param_1,9);
      return (int)param_1;
    }
    if (iVar1 == 1) {
      iVar1 = read_field_at_offset_100(param_1);
      if (iVar1 == 0xb) goto LAB_10366c3c;
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 0xd;
    }
    else {
      uRam800043a4 = 5;
      uVar2 = get_or_create_singleton_object_1036c796();
      uVar3 = 1;
    }
  }
  else {
    iVar1 = read_field_at_offset_100(param_1);
    if (iVar1 == 0xb) {
LAB_10366c3c:
      forward_param_to_global_offset(param_1,_DAT_105bb5ac/*ROM*/);
      return (int)param_1;
    }
    uVar2 = get_or_create_singleton_object_1036c796();
    uVar3 = 0xd;
  }
  iVar1 = read_array_element_bounded(uVar2,uVar3);
  return iVar1;
}
