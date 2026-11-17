/* @k10d submit_request_and_handle_result @ 0x1047b7e4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Submits a request built from object fields and handles success or failure outcomes.
 * summary:
 *   Checks a condition via check_flag_and_null_byte on the field at param_1+0x48. If true,
 *   builds a local struct using values from a pointer at param_1+0x70 and calls
 *   link_object_into_list_10477ee6 to submit the request. On success, sets a flag at
 *   param_1+0x34. On failure, calls cleanup/error handlers
 *   (allocate_and_init_buffer_1047a664, call_helper_with_offset_0x1c), potentially sets a
 *   flag at param_1+0x80, and manipulates a queue or list via
 *   get_or_init_sram_object_10483206/5a/48. Finally, calls free_heap_if_flag_set_1047e0e6
 *   to finalize the local struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void submit_request_and_handle_result(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint16_t *puVar3;
  uintptr_t sp;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint16_t uStack_18;
  uint16_t uStack_16;
  int iStack_c;
  
  iVar1 = check_flag_and_null_byte(param_1 + 0x48);
  if (iVar1 != 0) {
    puVar3 = (uint16_t *)**(uint32_t **)(*(int *)(param_1 + 0x70) + 0xc);
    init_small_struct_fields(&uStack_20);
    iStack_c = param_1 + 0x20;
    uStack_20 = 1;
    uStack_1c = 1;
    uStack_18 = *puVar3;
    uStack_16 = puVar3[1];
    iVar1 = link_object_into_list_10477ee6(*(int *)(param_1 + 0x50),(int)&uStack_20);
    if (iVar1 == 0) {
      *(uint32_t *)(param_1 + 0x34) = 1;
    }
    else {
      allocate_and_init_buffer_1047a664(*(uint32_t *)(param_1 + 0x54));
      iVar1 = call_helper_with_offset_0x1c(*(int *)(param_1 + 0x50));
      if (iVar1 != 0) {
        *(uint8_t *)(param_1 + 0x80) = 1;
      }
      iVar1 = get_or_init_sram_object_10483206();
      iVar1 = call_helper_with_second_field_1048325a(iVar1);
      if (0 < iVar1) {
        uVar2 = get_or_init_sram_object_10483206();
        call_subroutine_with_offset_field_10483248(uVar2,iVar1 - 1U & 0xffff);
      }
      *(uint32_t *)(param_1 + 0x34) = 0;
    }
    free_heap_if_flag_set_1047e0e6(&uStack_20,2);
  }
  return;
}
