/* @k10d process_event_with_retry_10473fae @ 0x10473fae
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event object, retrying a core operation in a loop until it succeeds or a
 *   failure handler is invoked.
 * summary:
 *   The function retrieves an object via call_subroutine_with_offset_c_104766ae and checks
 *   a virtual method (slot 2). If the check passes, it initializes a local object
 *   (cls_105ab468) and enters a loop calling call_inner_with_lock_pair and
 *   call_helper_with_lock_guard. If the operation fails (iVar2 != 0), it attempts recovery
 *   via validate_iso_code_string and call_with_offset_lock_10480e32. On persistent failure,
 *   it calls invoke_virtual_method_0x61001 and returns a status code (0, 1, or 2). It
 *   cleans up local resources before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10473fd4) overlaps instruction at (ram,0x10473fd2)
    */

uint32_t process_event_with_retry_10473fae(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_64 [4];
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t uStack_38;
  cls_105ab468 cStack_28;
  
  puVar8 = (uint32_t *)auStack_64;
  piVar1 = (int *)call_subroutine_with_offset_c_104766ae(*(int *)(param_1 + 8));
  if (piVar1 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    iVar2 = (((vtbl_entry*)(*piVar1))[2].fn)((int)((vtbl_entry*)(*piVar1))[2].adj + (int)piVar1);
    if (iVar2 == 0) {
      format_integer_as_four_digits_10477702(*(void **)(param_1 + 0x14),param_2);
      copy_string_to_offset_10477b94(*(void **)(param_1 + 0x14));
      write_field_at_offset_0x1a(*(uint32_t *)(param_1 + 0x14));
      uStack_40 = 0;
      uStack_3c = 0;
      cls_105ab468_new(&cStack_28);
      uStack_38 = 0;
      iVar2 = *(int *)(param_1 + 4);
      pvVar3 = (void *)(*(code *)0x104779aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
      uVar4 = (*(code *)0x10477aaa/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
      *puVar8 = (uint32_t)(&uStack_40);
      iVar2 = call_inner_with_lock_pair(iVar2,pvVar3,(void*)(uVar4),0,*puVar8);
      if (iVar2 != 0) {
        iVar2 = 1;
        do {
          iVar5 = validate_iso_code_string(*(uint32_t *)(param_1 + 0xc),&cStack_28,(ushort *)0x0);
          if (iVar5 != 0) {
            copy_12_bytes_if_length_12(*(uint32_t *)(param_1 + 0x10),(void*)(&cStack_28));
            pvVar7 = *(void **)(param_1 + 4);
            pvVar3 = (void *)(*(code *)0x10477a62/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
            iVar2 = call_with_offset_lock_10480e32(pvVar7,pvVar3);
          }
          iVar5 = call_helper_with_lock_guard(*(int *)(param_1 + 4),&uStack_40);
        } while ((iVar5 != 0) && (iVar2 == 1));
        if (iVar2 == 0) {
          uVar6 = 1;
        }
        else {
          call_subroutine_with_offset_c_104766d2(*(uint32_t *)(param_1 + 8),param_2);
          uVar6 = (*(code *)0x10477a34/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
          iVar2 = invoke_virtual_method_0x61001(param_1,uVar6,param_2);
          if (iVar2 == 0) {
            uVar6 = 2;
          }
          else {
            uVar6 = 0;
          }
        }
      }
      call_three_helpers_on_param(*(int *)(param_1 + 4),&uStack_40);
      cls_105ab468_delete(&cStack_28,2);
    }
  }
  return uVar6;
}
