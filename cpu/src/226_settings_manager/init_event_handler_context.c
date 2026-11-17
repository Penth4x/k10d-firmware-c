/* @k10d init_event_handler_context @ 0x104c0904
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes a handler object by scanning a list for a specific ID and setting up state
 *   fields and dispatch logic.
 * summary:
 *   The function calls initialization helpers on the object (param_1), then iterates
 *   through a list (param_4) using call_helper_with_zero_arg_1047e48c/96/2bc to find an
 *   entry where the type is 1, storing its ID in a local variable. It updates several
 *   fields in the object (offsets 0x38, 0xeba2-0xeba6, 0x48c-0x49c) based on param_3 and
 *   the found ID. Finally, it branches on param_2 to either call
 *   invoke_object_method_and_reset_flag/init_object_and_check_flag or
 *   set_pointer_and_clear_flag/invoke_virtual_method_on_object_104bfb44, suggesting a setup
 *   for event handling or state machine initialization.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_event_handler_context(int param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint32_t *puVar4;
  uint uVar5;
  
  process_three_string_slots_per_entry(param_1);
  store_value_at_two_offsets(param_1,*(uint32_t *)(param_1 + 0x8d0));
  uVar1 = call_helper_with_zero_arg_1047e48c(param_4);
  uVar5 = 0;
  for (; 0 < (int)uVar1; uVar1 = increment_and_call_helper(param_4,uVar1)) {
    iVar2 = read_table_entry_if_valid(param_4,uVar1);
    if (iVar2 == 1) {
      uVar5 = uVar1 & 0xffff;
    }
    if (0x270e < (int)uVar1) break;
  }
  write_two_words_to_struct_104c1ff4(param_1,param_3,uVar5);
  *(uint32_t *)(param_1 + 0x38) = 1;
  iVar2 = invoke_object_callback_and_release(param_1);
  *(char *)(param_1 + 0xeba2) = (char)iVar2;
  *(uint16_t *)(param_1 + 0xeba4) = *(uint16_t *)(param_1 + 0x44);
  *(uint16_t *)(param_1 + 0xeba6) = *(uint16_t *)(param_1 + 0x46);
  if (iVar2 != 0) {
    if ((int)(uint)*(ushort *)(param_1 + 0xeba4) < (int)param_3) {
      *(uint8_t *)(param_1 + 0xeba2) = 0;
    }
    if ((*(ushort *)(param_1 + 0xeba4) == param_3) && (*(ushort *)(param_1 + 0xeba6) < uVar5)) {
      *(uint8_t *)(param_1 + 0xeba2) = 0;
    }
  }
  puVar4 = (uint32_t *)(param_1 + 0x48c);
  *puVar4 = 1;
  *(uint32_t *)(param_1 + 0x490) = 2;
  *(short *)(param_1 + 0x494) = (short)param_3;
  *(int **)(param_1 + 0x49c) = param_4;
  if (param_2 == 0) {
    bVar3 = invoke_object_method_and_reset_flag(param_1,puVar4);
    if (bVar3) {
      init_object_and_check_flag(param_1);
    }
  }
  else {
    set_pointer_and_clear_flag((int *)(param_1 + 4),(void *)param_2);
    invoke_virtual_method_on_object_104bfb44(param_1,param_1,puVar4);
  }
  return;
}
