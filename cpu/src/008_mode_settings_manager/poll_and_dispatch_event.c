/* @k10d poll_and_dispatch_event @ 0x10367192
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_and_dispatch_event(void *param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;
  uint32_t uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uStack_14;
  
  iVar11 = *(int *)((int)param_1 + 0x68);
  uVar1 = *(ushort *)(iVar11 + 4);
  uVar2 = *(ushort *)(iVar11 + 6);
  if ((*(int *)(iVar11 + 8) == 0) || (uVar8 = 0, uVar10 = 0, *(int *)(iVar11 + 8) == 1)) {
    uVar8 = (uint)uVar2;
    uVar10 = (uint)uVar1;
  }
  uStack_14 = 0;
  bVar3 = false;
  while ((*(char *)((int)param_1 + 0x14) == '\0' && (iVar11 = read_field_at_offset_eight_1036ba06(param_1,3), iVar11 == 1))
        ) {
    uVar4 = init_sram_block_and_store_param(param_1);
    bVar3 = true;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 2) == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0;
    }
    dispatch_event_and_return_offset(param_1,(void *)((int)param_1 + 0x68),uVar7);
    pvVar5 = *(void **)((int)param_1 + 0x68);
    if (pvVar5 == 0) break;
    uVar4 = (uint)*(ushort *)((int)pvVar5 + 4);
    if ((((uVar10 != 0) || (uVar9 = (uint)*(ushort *)((int)pvVar5 + 6), uVar8 != 0)) &&
        (bVar6 = uVar4 == uVar10, uVar9 = uVar8, uVar4 = uVar10, bVar6)) &&
       (*(ushort *)((int)pvVar5 + 6) == uVar8)) break;
    iVar11 = read_struct_field_at_index_104c2890(pvVar5,0x28);
    uVar8 = uVar9;
    uVar10 = uVar4;
    if ((iVar11 == 1) && (iVar11 = read_struct_field_at_index_104c2890(*(void **)((int)param_1 + 0x68),0x29), iVar11 == 1))
    {
      reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x6c));
      bVar6 = dispatch_mode_state_update_10367558(param_1);
      uStack_14 = (uint)bVar6;
      if (uStack_14 != 0) {
        return uStack_14;
      }
    }
  }
  if (uStack_14 != 0) {
    return uStack_14;
  }
  reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x6c));
  if (!bVar3) {
    return 0;
  }
  dispatch_three_params_and_return_offset(param_1,(uint)uVar1,(uint)uVar2);
  return 0;
}
