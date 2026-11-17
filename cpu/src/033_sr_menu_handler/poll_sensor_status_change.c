/* @k10d poll_sensor_status_change @ 0x103723c0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Polls a sensor status object for changes and triggers a callback when a specific state
 *   transition is detected.
 * summary:
 *   The function enters a loop that checks a status flag (param_1+0x14) and calls
 *   read_field_at_offset_eight_1036ba06 to query the current state. It retrieves status
 *   bits via init_sram_block_and_store_param and maps them to an index (0-3). It compares
 *   the current status words (at param_1+0x7c) against the initial values. If a change is
 *   detected and specific conditions are met (via read_struct_field_at_index_104c2890 and
 *   read_byte_at_offset_104c2842), it calls dispatch_object_state_change_10372604. If that
 *   call succeeds, it invokes a virtual method (reset_object_fields_and_call_base) and
 *   returns 1. Otherwise, it calls dispatch_three_params_and_return_offset and returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_sensor_status_change(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar10 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x7c) + 4);
  uVar11 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x7c) + 6);
  uVar12 = 0;
  bVar3 = false;
  bVar4 = false;
  do {
    if ((*(char *)((int)param_1 + 0x14) != '\0') || (iVar5 = read_field_at_offset_eight_1036ba06(param_1,0xc), iVar5 != 1))
    break;
    bVar4 = true;
    uVar6 = init_sram_block_and_store_param(param_1);
    uVar12 = 0;
    iVar5 = -1;
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 8) == 0) goto LAB_10372420;
      iVar5 = 3;
    }
    else {
      iVar5 = 2;
LAB_10372420:
      if (iVar5 == -1) break;
    }
    dispatch_event_and_return_offset(param_1,(void *)((int)param_1 + 0x7c),iVar5);
    pvVar7 = *(void **)((int)param_1 + 0x7c);
    if (pvVar7 == (void *)0x0) break;
    uVar1 = *(ushort *)((int)pvVar7 + 4);
    uVar2 = *(ushort *)((int)pvVar7 + 6);
    if (((uVar1 == uVar10) && (uVar2 == uVar11)) && (!bVar3)) goto LAB_103724ba;
    iVar5 = read_struct_field_at_index_104c2890(pvVar7,0x28);
    if (((iVar5 == 1) && (iVar5 = read_struct_field_at_index_104c2890(*(void **)((int)param_1 + 0x7c),0x29), iVar5 == 1))
       && (cVar8 = read_byte_at_offset_104c2842(*(void **)((int)param_1 + 0x7c),3), cVar8 != '\0')) {
      bVar3 = true;
      bVar9 = dispatch_object_state_change_10372604(param_1,1);
      uVar12 = (uint)bVar9;
      if (uVar12 != 0) {
        bVar3 = false;
        break;
      }
    }
  } while ((uVar1 != uVar10) || (uVar2 != uVar11));
  if (bVar3) {
    reset_object_fields_and_call_base((void *)((int)param_1 + 0x80));
  }
LAB_103724ba:
  if ((uVar12 == 0) && (bVar4)) {
    dispatch_three_params_and_return_offset(param_1,uVar10,uVar11);
  }
  return uVar12;
}
