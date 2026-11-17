/* @k10d process_event_with_callback_10474134 @ 0x10474134
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object, invokes a virtual check, and executes a multi-step processing
 *   sequence if valid.
 * summary:
 *   The function fetches a pointer via call_subroutine_with_offset_c_104766ae and calls
 *   virtual slot 2 on the resulting object. If the check passes, it initializes a local
 *   object (cls_105ab468), calls call_inner_with_lock_pair with parameters derived from the
 *   input struct, and conditionally calls validate_iso_code_string and
 *   copy_12_bytes_if_length_12. It returns a status code (0, 1, or 2) based on the success
 *   of these operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1047415a) overlaps instruction at (ram,0x10474158)
    */

uint32_t process_event_with_callback_10474134(int param_1,int param_2,uint32_t param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  void *pvVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_64 [4];
  int iStack_4c;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t uStack_38;
  uint8_t auStack_28 [32];
  
  puVar7 = (uint32_t *)auStack_64;
  piVar1 = (int *)call_subroutine_with_offset_c_104766ae(*(int *)(param_1 + 8));
  if (piVar1 == (int *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    iVar2 = (**(code **)(*piVar1 + 0x14))((int)*(short *)(*piVar1 + 0x10) + (int)piVar1);
    if (iVar2 == 0) {
      format_integer_as_four_digits_10477702(*(void **)(param_1 + 0x14),param_2);
      copy_string_to_offset_10477b94(*(void **)(param_1 + 0x14));
      uVar5 = *(uint32_t *)(param_1 + 0x14);
      uVar4 = get_or_create_sram_object_1047dd7a();
      uVar4 = find_entry_in_pointer_list(uVar4,param_3);
      (*(code *)0x104778ee/*ROM*/)(uVar5,uVar4,3);
      uStack_40 = 0;
      uStack_3c = 0;
      cls_105ab468_new(auStack_28);
      uStack_38 = 0;
      iStack_4c = 0;
      iVar2 = *(int *)(param_1 + 4);
      pvVar3 = (void *)(*(code *)0x104779aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
      uVar4 = (*(code *)0x10477aaa/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
      *puVar7 = &uStack_40;
      iVar2 = call_inner_with_lock_pair(iVar2,pvVar3,uVar4,0,*puVar7);
      if (iVar2 != 0) {
        iVar2 = validate_iso_code_string(*(uint32_t *)(param_1 + 0xc),auStack_28,(ushort *)0x0);
        if (iVar2 != 0) {
          copy_12_bytes_if_length_12(*(uint32_t *)(param_1 + 0x10),auStack_28);
          pvVar6 = *(void **)(param_1 + 4);
          pvVar3 = (void *)(*(code *)0x10477a62/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
          iStack_4c = call_with_offset_lock_10480e32(pvVar6,pvVar3);
        }
      }
      call_three_helpers_on_param(*(int *)(param_1 + 4),&uStack_40);
      if (iStack_4c == 0) {
        uVar4 = 1;
      }
      else {
        call_subroutine_with_offset_c_104766e4(*(uint32_t *)(param_1 + 8),param_2,param_3);
        uVar4 = (*(code *)0x10477a34/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
        iVar2 = invoke_virtual_method_0x61001(param_1,uVar4,param_2);
        if (iVar2 == 0) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
      }
      cls_105ab468_delete(auStack_28,2);
    }
  }
  return uVar4;
}
