/* @k10d process_event_with_callback_10476426 @ 0x10476426
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates an event, invokes a virtual handler, and dispatches the result to a listener.
 * summary:
 *   The function first calls invoke_virtual_slot_two_and_store_result to validate the input
 *   object and event ID. If valid, it retrieves a handler object via read_field_at_offset_c
 *   and calls its virtual method at offset 0x1c. Upon success, it constructs a temporary
 *   object (auStack_44), initializes it with alloc_and_init_0x3c_object and
 *   copy_string_to_offset_10477b94, and sets a parameter from param_2. It then calls
 *   call_inner_with_lock_pair to dispatch the event data and finally cleans up the
 *   temporary objects. Returns 1 on success, 0 on failure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_with_callback_10476426(int param_1,uint16_t *param_2,uint32_t param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  void *pvVar4;
  uintptr_t sp;
  uint32_t *puVar5;
  uint8_t auStack_a0 [4];
  uint32_t uStack_8c;
  uint32_t uStack_7c;
  uint32_t uStack_78;
  uint8_t uStack_74;
  cls_105ab468 cStack_64;
  uint8_t auStack_44 [60];
  
  puVar5 = (uint32_t *)auStack_a0;
  uStack_8c = 0;
  iVar1 = invoke_virtual_slot_two_and_store_result(param_1,*param_2,*(uint32_t *)(param_1 + 0x10));
  if (((iVar1 != 0) && (piVar2 = (int *)read_field_at_offset_c(*(int *)(param_1 + 0xc)), piVar2 != (int *)0x0)
      ) && (iVar1 = (((vtbl_entry*)(*piVar2))[3].fn)
                              ((int)((vtbl_entry*)(*piVar2))[3].adj + (int)piVar2,param_3), iVar1 != 0))
  {
    alloc_and_init_0x3c_object(auStack_44);
    copy_string_to_offset_10477b94(auStack_44);
    format_integer_as_four_digits_10477702(auStack_44,(uint)(ushort)param_2[1]);
    uVar3 = get_or_create_sram_object_1047dd7a();
    uVar3 = (uint32_t)(find_entry_in_pointer_list(uVar3,param_3));
    (*(code *)0x104778ee/*ROM*/)(auStack_44,uVar3,3);
    uStack_7c = 0;
    uStack_78 = 0;
    cls_105ab468_new(&cStack_64);
    uStack_74 = 0;
    iVar1 = *(int *)(param_1 + 4);
    pvVar4 = (void *)(*(code *)0x104779aa/*ROM*/)(*(uint32_t *)(param_1 + 0x10));
    uVar3 = (*(code *)0x10477aaa/*ROM*/)(auStack_44);
    *puVar5 = (uint32_t)(&uStack_7c);
    call_inner_with_lock_pair(iVar1,pvVar4,(void*)(uVar3),0,*puVar5);
    call_three_helpers_on_param(*(int *)(param_1 + 4),&uStack_7c);
    copy_struct_with_offset(param_4,&cStack_64);
    uStack_8c = 1;
    cls_105ab468_delete(&cStack_64,2);
    free_heap_if_flag_set_1047740c(auStack_44,2);
  }
  return uStack_8c;
}
