/* @k10d build_and_register_event_record @ 0x104b4408
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Allocates a record, populates it with four pointers and three 16-bit values from a
 *   local object, and registers it with two subsystems.
 * summary:
 *   The function initializes a local object (uStack_9) and allocates a heap record via
 *   alloc_and_zero_struct_1051c15c. It extracts four byte pointers and three 16-bit values
 *   from the local object using helper functions and stores them into the allocated record.
 *   Finally, it passes the record to two other subsystems
 *   (call_helper_with_param_two_104b3d84, init_object_with_two_ids_104b02ba), triggers a
 *   callback (destroy_object_and_free_heap_1051c1ba), and calls three additional functions
 *   with the original parameter before cleaning up the local object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t build_and_register_event_record(uint32_t param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  byte *pbVar4;
  uint16_t uVar5;
  uintptr_t sp;
  uint8_t uStack_9;
  
  uVar1 = get_or_init_sram_block_104b3d52();
  uVar2 = get_sram_buffer_pointer();
  iVar3 = alloc_and_zero_struct_1051c15c(0);
  heap_alloc_one_byte_1045926e((int)&uStack_9);
  pbVar4 = (byte *)return_pentax_corp_string_ptr(&uStack_9);
  store_computed_value_in_array(iVar3,0,pbVar4);
  pbVar4 = (byte *)return_pentax_string_ptr(&uStack_9);
  store_computed_value_in_array(iVar3,1,pbVar4);
  pbVar4 = (byte *)(*(code *)0x10459346/*ROM*/)(&uStack_9);
  store_computed_value_in_array(iVar3,2,pbVar4);
  pbVar4 = (byte *)(*(code *)0x1045934e/*ROM*/)(&uStack_9);
  store_computed_value_in_array(iVar3,3,pbVar4);
  uVar5 = return_global_word_104592ce();
  encode_two_byte_value(iVar3,uVar5);
  uVar5 = (*(code *)0x10459318/*ROM*/)(&uStack_9);
  *(uint16_t *)(iVar3 + 8) = uVar5;
  uVar5 = (*(code *)0x10459322/*ROM*/)(&uStack_9);
  *(uint16_t *)(iVar3 + 10) = uVar5;
  uVar5 = (*(code *)0x1045932c/*ROM*/)(&uStack_9);
  *(uint16_t *)(iVar3 + 0xc) = uVar5;
  call_helper_with_param_two_104b3d84(uVar1,iVar3);
  init_object_with_two_ids_104b02ba(uVar2,iVar3);
  destroy_object_and_free_heap_1051c1ba(iVar3,3);
  call_handler_with_fetched_arg_104b462c(param_1,uVar1,uVar2);
  call_two_helpers_with_params_104b464e(param_1,uVar2,uVar1);
  allocate_and_dispatch_two_values(param_1,uVar2,uVar1);
  heap_free_if_flagged(&uStack_9,2);
  return 1;
}
