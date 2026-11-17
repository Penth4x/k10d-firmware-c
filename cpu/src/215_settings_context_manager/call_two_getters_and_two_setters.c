/* @k10d call_two_getters_and_two_setters @ 0x104b4562
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Reads two values from helper functions and passes each to a corresponding setter
 *   function.
 * summary:
 *   The function calls get_sram_buffer_pointer and get_or_init_sram_block_104b3d52 to
 *   obtain two undefined4 values. It then passes the first value to
 *   invoke_virtual_slot_two_and_call_two_helpers and the second value to
 *   call_two_unnamed_helpers_104b3dc4. No local state is modified or returned.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_getters_and_two_setters(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = get_sram_buffer_pointer();
  uVar2 = get_or_init_sram_block_104b3d52();
  invoke_virtual_slot_two_and_call_two_helpers((void *)uVar1);
  call_two_unnamed_helpers_104b3dc4(uVar2);
  return;
}
