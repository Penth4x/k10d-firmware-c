/* @k10d poll_and_confirm_state_change @ 0x103672a2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_and_confirm_state_change(void *param_1)

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
    if ((*(char *)((int)param_1 + 0x14) != '\0') || (iVar7 = read_field_at_offset_eight_1036ba06(param_1,3), iVar7 != 1))
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
    if (((uVar1 == uVar5) && (uVar2 == uVar6)) && (!bVar3)) goto LAB_1036738c;
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
LAB_1036738c:
  if ((uStack_18 == 0) && (bVar4)) {
    dispatch_three_params_and_return_offset(param_1,uVar5,uVar6);
  }
  return uStack_18;
}
