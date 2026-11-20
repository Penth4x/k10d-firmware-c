/* @k10d process_event_with_retry_10474a2e @ 0x10474a2e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event object with a retry loop, updating state and calling a final handler
 *   on success.
 * summary:
 *   The function validates the input object, initializes a local state structure, and
 *   enters a loop that repeatedly calls validate_iso_code_string and
 *   call_helper_with_lock_guard. It updates a flag byte based on param_3 and calls
 *   call_with_critical_section_10480f2c during the loop. If the loop completes
 *   successfully, it calls invoke_virtual_method_0x62001 and sets the return value to 2,
 *   otherwise 1. It cleans up local resources before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10474a58) overlaps instruction at (ram,0x10474a56)
    */

uint32_t process_event_with_retry_10474a2e(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t *puVar7;
  uint8_t auStack_68 [4];
  uint32_t uStack_48;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint8_t uStack_38;
  cls_105ab468 cStack_28;
  
  puVar7 = (uint32_t *)auStack_68;
  uStack_48 = 1;
  iVar1 = call_subroutine_with_offset_c_104766ae(*(int *)(param_1 + 8));
  if (iVar1 != 0) {
    format_integer_as_four_digits_10477702(*(void **)(param_1 + 0x14),param_2);
    uStack_40 = 0;
    uStack_3c = 0;
    cls_105ab468_new(&cStack_28);
    uStack_38 = 0;
    iVar6 = *(int *)(param_1 + 4);
    pvVar2 = (void *)(*(code *)0x104779aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
    uVar3 = (*(code *)0x10477aaa/*ROM*/)(*(uint32_t *)(param_1 + 0x14));
    *puVar7 = (uintptr_t)(&uStack_40);
    iVar6 = call_inner_with_lock_pair((int)(iVar6),(void *)(pvVar2),(char *)(uVar3),(uint32_t)(0),(uint32_t)(*puVar7));
    if (iVar6 != 0) {
      iVar6 = 1;
      do {
        iVar4 = validate_iso_code_string(*(uint32_t *)(param_1 + 0xc),&cStack_28,(ushort *)0x0);
        if (iVar4 != 0) {
          copy_12_bytes_if_length_12(*(uint32_t *)(param_1 + 0x10),&cStack_28);
          if (param_3 == 0) {
            bVar5 = cStack_28.field_0xd & 0xfe;
          }
          else {
            bVar5 = cStack_28.field_0xd | 1;
          }
          iVar6 = *(int *)(param_1 + 4);
          pvVar2 = (void *)(*(code *)0x10477a62/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
          iVar6 = call_with_critical_section_10480f2c(iVar6,pvVar2,(uint)bVar5);
        }
        iVar4 = call_helper_with_lock_guard(*(int *)(param_1 + 4),&uStack_40);
      } while ((iVar4 != 0) && (iVar6 == 1));
      if (iVar6 != 0) {
        *(char *)(iVar1 + 0xc) = (char)param_3;
        uVar3 = (*(code *)0x10477a34/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
        iVar1 = invoke_virtual_method_0x62001(param_1,uVar3,param_2);
        uStack_48 = 0;
        if (iVar1 == 0) {
          uStack_48 = 2;
        }
      }
    }
    call_three_helpers_on_param(*(int *)(param_1 + 4),&uStack_40);
    cls_105ab468_delete(&cStack_28,2);
  }
  return uStack_48;
}
