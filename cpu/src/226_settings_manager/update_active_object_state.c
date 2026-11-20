/* @k10d update_active_object_state @ 0x104bffec
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates and updates the active object descriptor within a manager structure,
 *   triggering initialization or state transitions based on parameter changes.
 * summary:
 *   The function checks a flag at param_3+0xc and compares fields in the object pointed to
 *   by param_1+0xfd94 against param_3. If the object is new or changed, it copies fields
 *   from param_3 to the active object, calls copy_struct_fields_to_offset_104c22d4 and
 *   invoke_object_method_and_check_flag_104bf71e, and updates internal state pointers. It
 *   then propagates param_4 and param_5 to the object and manager, and calls
 *   invoke_object_method_and_check_flag_104bf9c0 or
 *   invoke_virtual_method_on_object_104bfa34 depending on param_2. Finally, it calls
 *   release_and_finalize_object and returns a status flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t update_active_object_state(int param_1,int param_2,uint32_t *param_3,int param_4,uint32_t param_5)

{
  char *pcVar1;
  uint32_t uVar2;
  int iVar3;
  char cVar5;
  void *pvVar4;
  bool bVar6;
  uint uVar7;
  
  if (*(char *)(param_3 + 0xc) == '\0') {
    iVar3 = init_buffer_with_size_0x10000(param_1);
    if (iVar3 == 0) {
      *(uint8_t *)(param_1 + 0x30) = 1;
      return 0;
    }
    *(uint8_t *)(param_1 + 0x30) = 0;
    cVar5 = read_byte_at_offset_104c2842(param_3,param_4);
    if (cVar5 == '\0') {
      invoke_virtual_slot_two_104bf5b6(param_1);
      return 0;
    }
    pcVar1 = *(char **)(param_1 + 0xfd94);
    if ((((*pcVar1 == '\0') || (*(short *)(pcVar1 + 8) != *(short *)(param_3 + 1))) ||
        (*(short *)(pcVar1 + 10) != *(short *)((int)param_3 + 6))) ||
       (*(int *)(pcVar1 + 0xc) != param_3[2])) {
      process_three_string_slots_per_entry(param_1);
      *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 4) = *param_3;
      *(uint16_t *)(*(int *)(param_1 + 0xfd94) + 8) = *(uint16_t *)(param_3 + 1);
      *(uint16_t *)(*(int *)(param_1 + 0xfd94) + 10) = *(uint16_t *)((int)param_3 + 6);
      *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0xc) = param_3[2];
      iVar3 = copy_struct_fields_to_offset_104c22d4(*(void **)(param_1 + 0xfd94));
      iVar3 = invoke_object_method_and_check_flag_104bf71e(param_1,iVar3);
      bVar6 = false;
      if (iVar3 != 0) {
        **(uint8_t **)(param_1 + 0xfd94) = 1;
        iVar3 = *(int *)(param_1 + 0xfd94);
        uVar2 = *(uint32_t *)(param_1 + 0x8c8);
        *(uint32_t *)(iVar3 + 0x2f0) = *(uint32_t *)(param_1 + 0x8c4);
        *(uint32_t *)(iVar3 + 0x2f4) = uVar2;
        *(uint32_t *)(param_1 + 0x40) = 0xffffffff;
        *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0x10) = 0xffffffff;
        pvVar4 = (void *)copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94));
        *(uint32_t *)((int)pvVar4 + 0x1b0) = 0;
        bVar6 = invoke_object_method_and_check_flag_104bf9c0(param_1,pvVar4);
        if (bVar6) goto LAB_104c016e;
        iVar3 = copy_struct_fields_to_offset_104c22d4(*(void **)(param_1 + 0xfd94));
        invoke_virtual_method_on_object_104bf7ee(param_1,iVar3);
        **(uint8_t **)(param_1 + 0xfd94) = 0;
        bVar6 = false;
      }
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
LAB_104c016e:
      iVar3 = *(int *)(param_1 + 0xfd94);
      uVar2 = *(uint32_t *)(param_1 + 0x8c8);
      *(uint32_t *)(iVar3 + 0x2f0) = *(uint32_t *)(param_1 + 0x8c4);
      *(uint32_t *)(iVar3 + 0x2f4) = uVar2;
      *(int *)(param_1 + 0x40) = param_4;
      *(int *)(*(int *)(param_1 + 0xfd94) + 0x10) = param_4;
      *(uint32_t *)(param_1 + 0x22c) = param_5;
      *(uint32_t *)(*(int *)(param_1 + 0xfd94) + 0x2f8) = param_5;
      if (param_2 == 0) {
        iVar3 = (uintptr_t)(copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94)));
        *(uint32_t *)(iVar3 + 0x1b0) = 0;
        pvVar4 = (void *)copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94));
        bVar6 = invoke_object_method_and_check_flag_104bf9c0(param_1,pvVar4);
        uVar7 = (uint)bVar6;
      }
      else {
        set_pointer_and_clear_flag((int *)(param_1 + 4),(void *)param_2);
        iVar3 = (uintptr_t)(copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94)));
        *(uint32_t *)(iVar3 + 0x1b0) = 0;
        uVar2 = (uintptr_t)(copy_struct_fields_to_offset_104c2310(*(uint32_t *)(param_1 + 0xfd94)));
        iVar3 = invoke_virtual_method_on_object_104bfa34(param_1,param_1,uVar2);
        uVar7 = 0;
        if (iVar3 != 0) {
          return 1;
        }
      }
      release_and_finalize_object(param_1);
      return uVar7;
    }
    invoke_virtual_slot_two_104bf5b6(param_1);
  }
  else {
    *(uint8_t *)(param_1 + 0x30) = 1;
  }
  return 0;
}
