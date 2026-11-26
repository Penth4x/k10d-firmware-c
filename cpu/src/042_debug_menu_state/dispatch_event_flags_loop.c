/* @k10d dispatch_event_flags_loop @ 0x1039dfc0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 042_debug_menu_state (unit names are model-proposed)
 * purpose:
 *   Continuously polls a 32-bit event flag word and dispatches to specific handler
 *   functions based on set bits.
 * summary:
 *   The function operates in an infinite loop, retrieving a status word from a global
 *   source via eventflag_wai_flg and eventflag_clr_flg. It then checks individual bits of
 *   this word (e.g., 0x400, 0x80, 0x10, 8, 0x20, 0x8000000) to conditionally invoke various
 *   handler functions (invoke_virtual_if_flag_set_1039f220, clear_flag_and_reset_state,
 *   etc.) or perform virtual method calls on an object stored at param_1 + 0x38. It also
 *   manages state fields within the object structure, such as clearing flags at offsets
 *   0x40 and 0x3c, and handling specific timeout or status conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1039e1d2) overlaps instruction at (ram,0x1039e1d0)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_flags_loop(cls_10564150 *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  bool bVar6;
  uint32_t uVar5;
  char cVar7;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  uint32_t extraout_r5_02;
  uint32_t extraout_r5_03;
  uint32_t extraout_r5_04;
  uint32_t extraout_r5_05;
  uint32_t extraout_r5_06;
  uint32_t extraout_r5_07;
  uint *puVar8;
  void *pvVar9;
  int iVar10;
  uintptr_t sp;
  uint uStack_c;
  
  uStack_c = 0;
  do {
    puVar8 = &uStack_c;
    pvVar9 = (void*)(_DAT_105a2af0/*ROM*/);
    eventflag_wai_flg(&param_1->field_0xcc,0xfffffdff,puVar8,(int)_DAT_105a2af0/*ROM*/);
    eventflag_clr_flg(&param_1->field_0xcc,uStack_c);
    param_1->field_0x40 = 0;
    param_1->field_0x3c = 0;
    if ((uStack_c & 0x400) != 0) {
      iVar3 = check_object_flag_at_offset_0x14(param_1->field_0xbc);
      if (iVar3 != 0) {
        set_flag_at_offset_0x10(param_1->field_0xbc,0);
      }
      uVar4 = check_state_mismatch(param_1->field_0xbc);
      if (uVar4 == 0) {
        iVar10 = 0;
        while ((param_1->field_0xd8 == '\0' && (param_1->field_0xd9 == '\0'))) {
          bVar6 = check_kernel_call_success_10459fea(0x10);
          uVar4 = (uint)bVar6;
          iVar10 = iVar10 + 1;
          if ((100 < iVar10) || (uVar4 = check_state_mismatch(param_1->field_0xbc), uVar4 != 0)) break;
        }
      }
      if (iVar3 != 0) {
        set_flag_at_offset_0x10(param_1->field_0xbc,1);
      }
      empty_stub_function_103b76f0();
      empty_noop_stub_103b76f2();
      piVar1 = (int *)param_1->field_0x38;
      if (piVar1 != (int *)0x0) {
        (((vtbl_entry*)(*piVar1))[18].fn)((int)((vtbl_entry*)(*piVar1))[18].adj + (int)piVar1);
      }
    }
    if ((uStack_c & 0x80) != 0) {
      invoke_virtual_if_flag_set_1039f220((uint32_t)(param_1));
    }
    if ((uStack_c & 0x10) != 0) {
      clear_flag_and_reset_state((uint32_t)(param_1));
      piVar1 = (int *)param_1->field_0x38;
      if (piVar1 != (int *)0x0) {
        (((vtbl_entry*)(*piVar1))[11].fn)((int)((vtbl_entry*)(*piVar1))[11].adj + (int)piVar1,0);
      }
    }
    if ((uStack_c & 8) != 0) {
      invoke_virtual_slot_two_1039f3a8((uint32_t)(param_1));
      if (param_1->field_0x44 != 0) {
        param_1->field_0x40 = 1;
        uVar5 = (*(code *)0x1039efe6/*ROM*/)(param_1,param_1->field_0x44);
        param_1->field_0x3c = uVar5;
        param_1->field_0x44 = 0;
      }
      if (param_1->field_0x5c != 0) {
        param_1->field_0x40 = 1;
        uVar5 = (*(code *)map_mode_bit_to_field_1039f06e)(param_1,param_1->field_0x5c);
        param_1->field_0x3c = uVar5;
        param_1->field_0x5c = 0;
      }
    }
    if ((uStack_c & 0x20) != 0) {
      dispatch_virtual_event_with_state_check((uint32_t)(param_1));
    }
    if (((((uStack_c & 0x4000) != 0) && ((uStack_c & 0xffff0000) == 0)) &&
        (param_1->field_0x40 == '\0')) && (cVar7 = read_byte_at_offset_0x65(param_1->field_0x78), cVar7 == '\0')
       ) {
      dispatch_pending_state_action((uint32_t)(param_1));
    }
    if ((uStack_c & 0x8000000) != 0) {
      if (param_1->field_0x38 == param_1->field_0x60) {
        param_1->field_0x40 = 1;
        param_1->field_0x3c = param_1->field_0x8c;
      }
      else {
        iVar3 = param_1->field_0x48;
        if (((iVar3 == 10) || (iVar3 == 100)) || (iVar3 == 9)) {
          param_1->field_0x40 = 1;
          param_1->field_0x3c = param_1->field_0x8c;
        }
        else if (param_1->field_0x38 == param_1->field_0x64) {
          uStack_c = uStack_c & 0xf7ffffff;
        }
      }
      if (param_1->field_0xc8 == 9) {
        param_1->field_0xc8 = 0;
      }
    }
    if (((uStack_c & 0xffff0000) != 0) || (uVar5 = 0, param_1->field_0x40 != '\0')) {
      if (param_1->field_0x40 == '\0') {
        uVar5 = (*(code *)map_mode_bit_to_field_1039f06e)(param_1);
        dispatch_state_transition_1039ed80((uint32_t)(param_1),(void*)(uVar5));
        uVar5 = extraout_r5_00;
      }
      else {
        dispatch_state_transition_1039ed80((uint32_t)(param_1),(void*)(param_1->field_0x3c));
        uVar5 = extraout_r5;
      }
    }
    if ((uStack_c & 1) != 0) {
      dispatch_virtual_event_0x1170001((uint32_t)(param_1));
      uVar5 = extraout_r5_01;
    }
    if ((uStack_c & 2) != 0) {
      reset_object_and_notify_slot((uint32_t)(param_1));
      param_1->field_0xc0 = 0;
      param_1->field_0xc1 = 0;
      uVar5 = extraout_r5_02;
    }
    if ((uStack_c & 4) != 0) {
      update_object_from_pointer((uint32_t)(param_1));
      uVar5 = extraout_r5_03;
    }
    if ((uStack_c & 0x40) != 0) {
      invoke_virtual_slot_two_with_flag((uint32_t)(param_1));
      uVar5 = extraout_r5_04;
    }
    if (((uStack_c & 0x100) != 0) && (piVar1 = (int *)param_1->field_0x38, piVar1 != (int *)0x0)) {
      (((vtbl_entry*)(*piVar1))[11].fn)
                ((int)((vtbl_entry*)(*piVar1))[11].adj + (int)piVar1,param_1->field_0xd5);
      uVar5 = extraout_r5_05;
    }
    if ((uStack_c & 0x800) != 0) {
      if (param_1->field_0x38 == param_1->field_0x94) {
        dispatch_mode_by_state_id(__frv_reg_unset(4));
        uVar5 = extraout_r5_06;
      }
      else {
        check_kernel_object_id_valid((void*)(param_1->field_0x94 + 0x40));
        uVar5 = extraout_r5_07;
      }
    }
    if ((uStack_c & 0x1000) != 0) {
      pvVar2 = (char*)(param_1) ->field_0x80;
      if ((char*)(param_1) ->field_0x38 == pvVar2) {
        invoke_virtual_slot_and_dispatch(pvVar2,uVar5,puVar8,pvVar9);
      }
      else {
        check_kernel_object_id_valid((void*)((int)pvVar2 + 0x40));
      }
    }
    if ((uStack_c & 0x8000) != 0) {
      if (param_1->field_0x38 == param_1->field_0x84) {
        check_and_dispatch_state_change_103ac0ee((int *)__frv_reg_unset(4));
      }
      else {
        check_kernel_object_id_valid((void*)(param_1->field_0x84 + 0x40));
      }
    }
    if (((uStack_c & 0x2000) != 0) &&
       (piVar1 = (int *)param_1->field_0x64, (int *)param_1->field_0x38 == piVar1)) {
      (((vtbl_entry*)(*piVar1))[13].fn)((int)((vtbl_entry*)(*piVar1))[13].adj + (int)piVar1);
      write_two_config_values(param_1->field_0x64);
    }
    if (param_1->field_0xd8 != '\0') {
      iVar3 = *(int *)param_1->field_0x30;
      (((vtbl_entry*)(iVar3))[2].fn)
                ((int)param_1->field_0x30 + (int)((vtbl_entry*)(iVar3))[2].adj,0x1170004,0);
      param_1->field_0xd8 = 0;
    }
  } while( true );
}
