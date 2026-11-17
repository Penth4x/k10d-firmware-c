/* @k10d test_mode_state_reset @ 0x1050678c
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed init_capture_state_block)
 * unit: 267_test_mode_state (unit names are model-proposed)
 * purpose:
 *   Initializes a large state structure by binding it to global subsystem objects and
 *   copying default values.
 * summary:
 *   The function takes a pointer to a state block (param_1) and populates it by calling six
 *   initialization helpers (FUN_1045exxx) that likely bind the block to specific subsystem
 *   contexts. It refreshes the working copy of settings, copies a 0x40-byte block from a
 *   global source (return_sram_address_10436eda) into the state block, and initializes
 *   several fields at offsets 0x4d0-0x4da using values from a local stack object. It also
 *   zeroes fields at 0x500 and 0x504.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void test_mode_state_reset(void *param_1)

{
  int iVar1;
  uint32_t uVar2;
  uint16_t uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t uStack_9;
  
                    /* Purpose: Test mode state reset (shared helper for handlers 0-3, 5). Resets
                       capture state machine: calls 6 FUN_1045exxx functions (state clear/notify),
                       sr_driver_singleton + module_array_getter(0, __frv_reg_unset(5)) (SR reset), copies 0x40 bytes
                       from FUN_10436eda() to [obj+0x4d0] (default config block), reads 3 values via
                       FUN_104592xx (sensor params → [obj+0x4d4/0x4d8/0x4da]), sets up callback
                       args on stack.\nParams: param_1 = state object base (caller_r8 +
                       0x148).\nReturns: void. */
  iVar1 = initialize_singleton_object_1045d6a0();
  iVar4 = *(int *)(iVar1 + 0x1c);
  iVar1 = initialize_singleton_object_1045d6a0();
  iVar5 = *(int *)(iVar1 + 0x24);
  copy_four_bytes_from_struct_field_1045e59a(iVar4,(void *)((int)param_1 + 0x114));
  copy_nine_bytes_to_buffer(iVar4,(void *)((int)param_1 + 0xfc));
  copy_status_block_bytes(iVar4,param_1);
  copy_buffer_with_lock_1045e22a(iVar4,(void *)((int)param_1 + 0x1c));
  copy_fourteen_bytes_to_buffer(iVar4,(void *)((int)param_1 + 0xb0));
  copy_eight_bytes_from_struct(iVar4,(void *)((int)param_1 + 0xa4));
  iVar1 = get_or_create_singleton_object_10485138();
  settings_refresh_working_copy(*(void **)(iVar1 + 8));
  iVar1 = get_or_create_singleton_object_10485138();
  copy_836_bytes(*(uint32_t *)(iVar1 + 8),(int)param_1 + 0x164);
  iVar1 = get_or_create_singleton_object_1046d20c();
  collect_and_forward_object_state(*(uint32_t *)(iVar1 + 4),(void *)((int)param_1 + 0x4a8));
  copy_six_bytes_between_structs(iVar5,(void *)((int)param_1 + 0x4b0));
  *(uint32_t *)((int)param_1 + 0x500) = 0;
  *(uint32_t *)((int)param_1 + 0x504) = 0;
  iVar1 = sr_driver_singleton();
  module_array_getter(*(void **)(iVar1 + 4),0);
  iVar4 = *(int *)((int)param_1 + 0x4d0);
  iVar1 = return_sram_address_10436eda();
  iVar5 = 0x40;
  do {
    iVar5 = iVar5 + -4;
    *(uint32_t *)(iVar5 + iVar4) = *(uint32_t *)(iVar5 + iVar1);
  } while (iVar5 != 0);
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  uVar2 = return_kernel_object_id_104592a4(&uStack_9);
  *(uint32_t *)((int)param_1 + 0x4d4) = uVar2;
  uVar3 = return_global_word_104592ce();
  *(uint16_t *)((int)param_1 + 0x4d8) = uVar3;
  uVar3 = return_global_word_104592d8(&uStack_9);
  *(uint16_t *)((int)param_1 + 0x4da) = uVar3;
  heap_free_if_flagged(&uStack_9,2);
  return;
}
