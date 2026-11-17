/* @k10d evaluate_status_and_dispatch_result @ 0x10432dfe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 118_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Evaluates a status item and several object fields to compute a result code, then
 *   dispatches that code to a handler.
 * summary:
 *   The function constructs a temporary object on the stack (cls_105a8a1c_new) and
 *   initializes it via copy_struct_under_semaphore. It checks if status item 5 is asserted
 *   and calls set_two_flags_on_object_10435344 with the result. It then performs a complex
 *   series of checks on fields at offsets 0x30, 0x38, 0x41, and 0xa0 of param_1, calling
 *   helpers like read_field_at_offset_0x90, get_byte_at_offset_c, read_byte_at_offset_0x16,
 *   and call_helper_with_offset_5c_10435244 to determine a final state value (1, 2, or 3).
 *   This value is passed to store_value_at_offset_0x3c, and the function cleans up the
 *   temporary object before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void evaluate_status_and_dispatch_result(void *param_1)

{
  uint32_t uVar1;
  char cVar6;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar7;
  uintptr_t sp;
  uint8_t auStack_48 [64];
  
  cls_105a8a1c_new((void *)auStack_48);
  copy_struct_under_semaphore((int)param_1,auStack_48);
  uVar7 = *(uint32_t *)((int)param_1 + 0x30);
  uVar1 = status_item_asserted(auStack_48,5);
  set_two_flags_on_object_10435344(uVar7,uVar1,0);
  cVar6 = read_byte_at_offset_0x40(param_1);
  if (cVar6 != '\0') goto LAB_10432f66;
  iVar2 = read_field_at_offset_0x90(*(uint32_t *)((int)param_1 + 0x38));
  iVar3 = (*(code *)0x1042fe12/*ROM*/)(*(uint32_t *)((int)param_1 + 0x38));
  iVar4 = clear_pointer_at_offset_0x44(*(uint32_t *)((int)param_1 + 0x30),1);
  if (iVar4 == 1) goto LAB_10432e80;
  if (iVar3 == 0) {
    iVar3 = get_byte_at_offset_c(*(uint32_t *)((int)param_1 + 0x38),0);
    if (iVar3 != 0) {
      if (iVar2 != 0) goto LAB_10432f66;
      if (*(int *)((int)param_1 + 0xa0) == 0) {
        iVar2 = read_byte_at_offset_0x16(__frv_reg_unset(4));
        if (iVar2 == 0) {
          iVar2 = call_helper_with_offset_5c_10435244(*(int *)((int)param_1 + 0x30));
          goto joined_r0x10432f10;
        }
        iVar2 = call_helper_with_offset_5c_10435244(*(int *)((int)param_1 + 0x30));
      }
      else {
        iVar2 = read_byte_at_offset_0x16(*(uint32_t *)((int)param_1 + 0x30));
        if (iVar2 == 0) goto LAB_10432f66;
        iVar2 = call_helper_with_offset_5c_10435244(*(int *)((int)param_1 + 0x30));
      }
joined_r0x10432f02:
      if (iVar2 != 0) goto LAB_10432f66;
      goto LAB_10432ed6;
    }
    if (iVar2 == 0) {
      if (*(int *)((int)param_1 + 0xa0) != 0) {
        iVar2 = read_byte_at_offset_0x16(*(int *)((int)param_1 + 0x30));
        if (iVar2 == 0) goto LAB_10432f66;
        iVar2 = call_helper_with_offset_5c_10435244(*(int *)((int)param_1 + 0x30));
        goto joined_r0x10432f02;
      }
      iVar2 = call_helper_with_offset_5c_10435244(*(int *)((int)param_1 + 0x30));
joined_r0x10432f10:
      if (iVar2 == 0) goto LAB_10432f66;
    }
LAB_10432e80:
    uVar1 = 2;
  }
  else {
    iVar5 = call_helper_with_offset_5c_10435244(*(int *)((int)param_1 + 0x30));
    if ((iVar5 != 0) && (iVar4 != 2)) {
      if ((*(char *)((int)param_1 + 0x41) == '\0') && (iVar2 == 1)) {
        uVar1 = 3;
        goto LAB_10432f62;
      }
      if ((iVar2 != 0) || (iVar3 == 0)) goto LAB_10432f66;
    }
LAB_10432ed6:
    uVar1 = 1;
  }
LAB_10432f62:
  store_value_at_offset_0x3c(param_1,uVar1);
LAB_10432f66:
  store_byte_at_offset_0x40(param_1,0);
  cls_105a8a1c_delete((void *)auStack_48,2);
  return;
}
