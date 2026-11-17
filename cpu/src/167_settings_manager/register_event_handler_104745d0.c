/* @k10d register_event_handler_104745d0 @ 0x104745d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs an event descriptor and registers it with a handler manager, returning
 *   success status.
 * summary:
 *   The function retrieves a handler object via call_helper_with_field_at_offset_8_10476864
 *   and invokes a virtual method (slot 2) to get a context. It initializes a local
 *   structure (auStack_48) using alloc_and_init_0x3c_object and
 *   copy_string_to_offset_10477b94, then sets a parameter (uVar1) via
 *   format_integer_as_four_digits_10477702. It calls process_event_with_lock_104811ba to
 *   perform the registration; if successful, it updates the output structure (param_2) with
 *   the result and a pointer, cleans up temporary objects, and returns 1. If registration
 *   fails or the handler is null, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t register_event_handler_104745d0(int param_1,uint32_t *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint32_t uVar5;
  void *pvVar6;
  uint32_t uVar7;
  uintptr_t sp;
  uint32_t *puVar8;
  uint8_t auStack_90 [4];
  uint8_t auStack_68 [16];
  uint32_t uStack_58;
  uint8_t auStack_48 [60];
  uint32_t uStack_c;
  
  puVar8 = (uint32_t *)auStack_90;
  uVar1 = *(ushort *)((int)param_2 + 10);
  uVar7 = param_2[1];
  piVar4 = (int *)call_helper_with_field_at_offset_8_10476864(*(int *)(param_1 + 8));
  if (piVar4 != (int *)0x0) {
    iVar2 = param_1 + 0xc;
    uVar5 = (**(code **)(*piVar4 + 0x14))((int)*(short *)(*piVar4 + 0x10) + (int)piVar4);
    copy_8_byte_block_if_valid(iVar2,uVar5);
    alloc_and_init_0x3c_object(auStack_48);
    copy_string_to_offset_10477b94(auStack_48);
    format_integer_as_four_digits_10477702(auStack_48,(uint)uVar1);
    uVar5 = get_or_create_sram_object_1047dd7a();
    uVar7 = find_entry_in_pointer_list(uVar5,uVar7);
    (*(code *)0x104778ee/*ROM*/)(auStack_48,uVar7,3);
    uStack_c = 0;
    cls_105ab468_new(auStack_68);
    iVar3 = *(int *)(param_1 + 4);
    uVar7 = (*(code *)0x104779aa/*ROM*/)(iVar2);
    uVar5 = (*(code *)0x10477aaa/*ROM*/)(auStack_48);
    *puVar8 = auStack_68;
    iVar3 = process_event_with_lock_104811ba(iVar3,uVar7,uVar5,&uStack_c,*puVar8);
    if (iVar3 != 0) {
      copy_12_bytes_if_length_12(iVar2,auStack_68);
      *param_2 = uStack_c;
      if (*(int *)(param_1 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 4) + 4;
      }
      param_2[4] = iVar3;
      param_2[5] = uStack_58;
      pvVar6 = (void *)(*(code *)0x10477a62/*ROM*/)(iVar2);
      copy_null_terminated_string((void *)((int)param_2 + 0x19),pvVar6);
      cls_105ab468_delete(auStack_68,2);
      free_heap_if_flag_set_1047740c(auStack_48,2);
      return 1;
    }
    cls_105ab468_delete(auStack_68,2);
    free_heap_if_flag_set_1047740c(auStack_48,2);
  }
  return 0;
}
