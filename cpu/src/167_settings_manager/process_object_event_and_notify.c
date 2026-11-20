/* @k10d process_object_event_and_notify @ 0x10473ab6
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Processes an event for an object, updates its state, and conditionally notifies a
 *   handler.
 * summary:
 *   The function takes an object pointer (param_1) and event data (param_2, param_3). It
 *   calls dispatch_on_first_char to process the event into a local buffer, then
 *   copy_8_byte_block_if_valid to update the object's state at offset 0x14. It retrieves a
 *   value from offset 4 and calls an unknown function at 0x104779aa on the state, passing
 *   the result to call_handler_with_lock_10480e6a. If call_handler_with_lock_10480e6a
 *   returns non-zero, it calls forward_three_args_to_helper_10476840 with the object's
 *   offset 8 value and the event buffer. Returns the result of
 *   call_handler_with_lock_10480e6a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool process_object_event_and_notify(int param_1,uint32_t param_2,void *param_3)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  uint8_t auStack_11 [9];
  
  dispatch_on_first_char((uint32_t)(*(uint32_t *)(param_1 + 0xc)),(uint32_t)(auStack_11),(uint32_t)(param_2),(uint32_t)(param_3));
  copy_8_byte_block_if_valid(param_1 + 0x14,auStack_11);
  uVar3 = *(uint32_t *)(param_1 + 4);
  uVar1 = (*(code *)0x104779aa/*ROM*/)(param_1 + 0x14);
  iVar2 = call_handler_with_lock_10480e6a(uVar3,uVar1);
  if (iVar2 != 0) {
    forward_three_args_to_helper_10476840(*(uint32_t *)(param_1 + 8),auStack_11,0);
  }
  return iVar2 != 0;
}
