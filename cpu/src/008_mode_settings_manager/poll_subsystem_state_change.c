/* @k10d poll_subsystem_state_change @ 0x103673b0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * purpose:
 *   Polls a subsystem state until it matches a target value, handling intermediate state
 *   transitions and cleanup.
 * summary:
 *   The function enters a loop that checks a status flag via
 *   dispatch_event_and_return_field and reads a state value via
 *   init_sram_block_and_store_param. It compares the current state (stored at param_1+0x68)
 *   against a target state captured at entry. If the state differs, it attempts to
 *   transition the state using read_struct_field_at_index_104c2890 and calls
 *   dispatch_mode_state_update_10367558 to check for completion or error. It calls
 *   dispatch_event_and_return_offset to update the state pointer and
 *   reset_object_fields_and_call_base for cleanup. Finally, if the target state was
 *   reached, it calls dispatch_three_params_and_return_offset with the target values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_subsystem_state_change(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  bool bVar10;
  uint32_t uVar11;
  uint32_t uStack_18;
  
  uVar5 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x68) + 4);
  uVar6 = (uint)*(ushort *)(*(int *)((int)param_1 + 0x68) + 6);
  bVar3 = false;
  uStack_18 = 0;
  bVar4 = false;
  do {
    if ((*(char *)((int)param_1 + 0x14) != '\0') || (iVar7 = dispatch_event_and_return_field(param_1,3), iVar7 != 1))
    break;
    bVar4 = true;
    uVar8 = init_sram_block_and_store_param(param_1);
    if ((uVar8 & 1) == 0) {
      if ((uVar8 & 2) == 0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = 1;
      }
    }
    else {
      uVar11 = 0;
    }
    dispatch_event_and_return_offset(param_1,(void *)((int)param_1 + 0x68),uVar11);
    pvVar9 = *(void **)((int)param_1 + 0x68);
    if (pvVar9 == 0) break;
    uVar1 = *(ushort *)((int)pvVar9 + 4);
    uVar2 = *(ushort *)((int)pvVar9 + 6);
    if (((uVar1 == uVar5) && (uVar2 == uVar6)) && (!bVar3)) goto LAB_1036749a;
    iVar7 = read_struct_field_at_index_104c2890(pvVar9,0x28);
    if ((iVar7 == 1) && (iVar7 = read_struct_field_at_index_104c2890(*(void **)((int)param_1 + 0x68),0x29), iVar7 == 1)) {
      bVar3 = true;
      reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x6c));
      bVar10 = dispatch_mode_state_update_10367558(param_1);
      uStack_18 = (uint)bVar10;
      if (uStack_18 != 0) {
        bVar3 = false;
        break;
      }
    }
  } while ((uVar1 != uVar5) || (uVar2 != uVar6));
  if (bVar3) {
    reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x6c));
  }
LAB_1036749a:
  if ((uStack_18 == 0) && (bVar4)) {
    dispatch_three_params_and_return_offset(param_1,uVar5,uVar6);
  }
  return uStack_18;
}
