/* @k10d process_mode_transition_event_1042f7f0 @ 0x1042f7f0
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Handles a state change event by updating internal counters and dispatching virtual
 *   commands to a companion object.
 * summary:
 *   The function acquires a semaphore, reads several state values from param_1 and param_2,
 *   and compares them to determine if a transition occurred. It dispatches virtual calls
 *   (slot 2) to an object pointed to by param_2[10] with specific command codes
 *   (0x2000000-0x2000002) and parameters. It calls multiple helper functions (FUN_10430xxx)
 *   to update state, likely related to camera mode or exposure settings, before releasing
 *   the semaphore.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_mode_transition_event_1042f7f0(int param_1,int *param_2)

{
  uint8_t uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int iVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  int iVar14;
  int *piVar15;
  bool bVar16;
  
  iVar8 = read_field_at_offset_0x44(__frv_reg_unset(4));
  uVar9 = get_field_at_offset_four_1042ff1c(param_1, __frv_reg_unset(5));
  uVar10 = get_field_at_offset_eight(param_1,iVar8);
  iVar11 = read_field_at_offset_0x90(param_1);
  uVar12 = get_field_at_offset_four_1042ff30(param_1,iVar11);
  uVar13 = get_byte_at_offset_c(param_1,iVar11);
  iVar3 = *param_2;
  iVar4 = param_2[1];
  iVar5 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[2];
  uVar1 = *(uint8_t *)(param_2 + 8);
  piVar15 = (int *)param_2[10];
  iVar14 = call_two_helpers_and_return_10430102(param_1);
  twai_sem_obj((void*)(param_1 + 0x28),_DAT_105a2bf0/*ROM*/);
  if (iVar14 == 0) {
    (((vtbl_entry*)(*piVar15))[2].fn)((int)((vtbl_entry*)(*piVar15))[2].adj + (int)piVar15,0x2000000,2);
  }
  else {
    cVar2 = *(char *)(param_2 + 0xb);
    bVar16 = false;
    if (cVar2 == '\0') {
      if (iVar11 != iVar5) {
        call_helper_with_param_and_result(param_1,iVar11);
      }
    }
    else {
      call_helper_with_param_and_result(param_1,iVar11);
      (((vtbl_entry*)(*piVar15))[2].fn)((int)((vtbl_entry*)(*piVar15))[2].adj + (int)piVar15,0x2000002,0);
      iVar14 = (((vtbl_entry*)(*piVar15))[2].fn)
                         ((int)((vtbl_entry*)(*piVar15))[2].adj + (int)piVar15,0x2000001,param_2[0xc]);
      bVar16 = iVar14 != 0;
    }
    store_two_values_in_object(param_1,iVar3,iVar4,iVar7);
    store_params_at_offsets_10430084(param_1,iVar5,iVar6,uVar1);
    (((vtbl_entry*)(*piVar15))[2].fn)((int)((vtbl_entry*)(*piVar15))[2].adj + (int)piVar15,0x2000000,1);
    forward_params_with_helper_result(param_1,iVar5,iVar6);
    if ((iVar11 < 4) && (iVar5 != iVar11)) {
      store_params_at_offsets_10430014(param_1,iVar11,uVar12,uVar13);
    }
    store_three_fields_in_object(param_1,iVar5,iVar6,uVar1);
    call_and_forward_result(param_1,iVar3,iVar4);
    if ((iVar8 < 5) && (iVar3 != iVar8)) {
      store_two_values_in_struct(param_1,iVar8,uVar9,uVar10);
    }
    store_pair_into_struct_and_buffer(param_1,iVar3,iVar4,iVar7);
    if (cVar2 == '\0') {
      iVar3 = *piVar15;
    }
    else {
      iVar3 = *piVar15;
      if (!bVar16) {
        (((vtbl_entry*)(iVar3))[2].fn)((int)((vtbl_entry*)(iVar3))[2].adj + (int)piVar15,0x2000000,2);
        goto LAB_1042f9d4;
      }
    }
    (((vtbl_entry*)(iVar3))[2].fn)((int)((vtbl_entry*)(iVar3))[2].adj + (int)piVar15,0x2000000,3);
  }
LAB_1042f9d4:
  sig_sem_obj((void*)(param_1 + 0x28));
  return;
}
