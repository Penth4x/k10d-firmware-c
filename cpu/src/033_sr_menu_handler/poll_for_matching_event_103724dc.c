/* @k10d poll_for_matching_event_103724dc @ 0x103724dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Loops until a specific event ID is detected, processing intermediate state changes and
 *   confirming the match.
 * summary:
 *   The function enters a do-while loop that checks a status flag (param_1+0x14) and calls
 *   dispatch_event_and_return_field. It retrieves a state value via
 *   init_sram_block_and_store_param, maps it to an index (0-3), and calls
 *   dispatch_event_and_return_offset. It then compares two 16-bit values from a pointer at
 *   param_1+0x7c against initial values. If they differ, it calls
 *   read_struct_field_at_index_104c2890 and read_byte_at_offset_104c2842 to potentially
 *   trigger a state change via dispatch_object_state_change_10372604. The loop continues
 *   until the values match or a break condition is met. Finally, it may call
 *   reset_object_fields_and_call_base and dispatch_three_params_and_return_offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_for_matching_event_103724dc(void *param_1)

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
    if ((*(char *)((int)param_1 + 0x14) != '\0') || (iVar5 = dispatch_event_and_return_field(param_1,0xc), iVar5 != 1))
    break;
    bVar4 = true;
    uVar6 = init_sram_block_and_store_param(param_1);
    uVar12 = 0;
    iVar5 = -1;
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 8) == 0) goto LAB_1037253c;
      iVar5 = 3;
    }
    else {
      iVar5 = 2;
LAB_1037253c:
      if (iVar5 == -1) break;
    }
    dispatch_event_and_return_offset(param_1,(void *)((int)param_1 + 0x7c),iVar5);
    pvVar7 = *(void **)((int)param_1 + 0x7c);
    if (pvVar7 == 0) break;
    uVar1 = *(ushort *)((int)pvVar7 + 4);
    uVar2 = *(ushort *)((int)pvVar7 + 6);
    if (((uVar1 == uVar10) && (uVar2 == uVar11)) && (!bVar3)) goto LAB_103725d6;
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
    reset_object_fields_and_call_base((cls_105b9458 *)((int)param_1 + 0x80));
  }
LAB_103725d6:
  if ((uVar12 == 0) && (bVar4)) {
    dispatch_three_params_and_return_offset(param_1,uVar10,uVar11);
  }
  return uVar12;
}
