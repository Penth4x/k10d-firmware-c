/* @k10d handle_object_state_transition @ 0x1036ef7a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Dispatches object state changes based on a status code, triggering cleanup or
 *   initialization routines.
 * summary:
 *   The function calls a status checker (read_field_at_offset_eight_1036ba06 or
 *   dispatch_event_and_return_field) depending on param_2. If the status is not 0 or 2, it
 *   resets specific object fields, calls retry_operation_five_times_1036f156 twice with
 *   hardcoded pointers, invokes a virtual method at offset 0x44, and calls several cleanup
 *   functions. If the status is 0 or 2, it checks global flags and calls
 *   init_three_stage_object if conditions are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_object_state_transition(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *puVar3;
  uint32_t *puVar4;
  uint8_t auStack_24 [8];
  
  puVar4 = (uint32_t *)auStack_24;
  puVar3 = auStack_24;
  if (param_2 == 0) {
    iVar2 = read_field_at_offset_eight_1036ba06(param_1,0xffffffff);
  }
  else {
    iVar2 = dispatch_event_and_return_field(param_1,0xffffffff);
    puVar4 = (uint32_t *)puVar3;
  }
  if ((iVar2 != 2) && (iVar2 != 0)) {
    *(uint8_t *)(param_1 + 0x2e) = 0;
    *(uint8_t *)((int)param_1 + 0xb9) = 0;
    *puVar4 = 0x80015af0/*SDRAM*/;
    puVar4[1] = 0x800158dc/*SDRAM*/;
    iVar2 = retry_operation_five_times_1036f156((int)param_1,1,param_1 + 0x2a,0x80015d04/*SDRAM*/,*puVar4,puVar4[1]);
    if (iVar2 == 0) {
      *puVar4 = 0x80015af0/*SDRAM*/;
      puVar4[1] = 0x800158dc/*SDRAM*/;
      retry_operation_five_times_1036f156((int)param_1,2,param_1 + 0x2a,0x80015d04/*SDRAM*/,*puVar4,puVar4[1]);
    }
    dispatch_event_with_state_check_1036f384(param_1,0);
    (**(code **)(*param_1 + 0x44))((int)*(short *)(*param_1 + 0x40) + (int)param_1);
    request_ui_sync_code_4((void *)param_1[0xb]);
    clear_two_flags_and_init_subobj(param_1);
    return;
  }
  bVar1 = false;
  if (DAT_80015f14/*SDRAM*/ == '\0') {
    bVar1 = true;
  }
  else if ((_DAT_80015d1c/*SDRAM*/ != 2) && (*(char *)((int)param_1 + 0xb9) == '\0')) goto LAB_1036efdc;
  if (!bVar1) {
    return;
  }
LAB_1036efdc:
  init_three_stage_object(param_1);
  return;
}
