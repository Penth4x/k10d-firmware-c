/* @k10d dispatch_event_with_params @ 0x1047e8d4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a local event structure from param_1 fields and dispatches it through a
 *   series of handler calls.
 * summary:
 *   The function initializes two local stack structures (auStack_18 and uStack_1c) using
 *   helper functions. It copies specific fields from the input pointer param_1 (offsets
 *   0x12, 0x1d, and indices 4-6) into the local structure and passes them to
 *   init_struct_with_two_subblocks. It then invokes a function pointer at 0x1047f3fa four
 *   times with incrementing indices (0-3), followed by a call to 0x1047f46a. Finally, it
 *   calls call_virtual_slot_6_and_helper and returns its result, while cleaning up the
 *   local structures.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_with_params(int *param_1,uint32_t param_2)

{
  ushort uVar1;
  uint8_t uVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t auStack_34 [12];
  uint32_t uStack_1c;
  uint8_t auStack_18 [16];
  
  puVar6 = auStack_34;
  alloc_and_store_pointer(&uStack_1c,(void *)0x0);
  uStack_1c = param_2;
  copy_or_zero_buffer(&uStack_1c,0);
  alloc_and_zero_16_bytes_1047f12a(auStack_18);
  uVar2 = *(uint8_t *)((int)param_1 + 0x1d);
  uVar1 = *(ushort *)((int)param_1 + 0x12);
  iVar4 = param_1[5];
  iVar3 = param_1[6];
  *(uint16_t *)(puVar6 + 2) = *(uint16_t *)(param_1 + 4);
  *(int *)(puVar6 + 4) = iVar4;
  *(int *)(puVar6 + 8) = iVar3;
  init_struct_with_two_subblocks(auStack_18,1,uVar2,(uint)uVar1,*(uint16_t *)(puVar6 + 2),*(int *)(puVar6 + 4),
               *(int *)(puVar6 + 8));
  (*(code *)0x1047f3fa/*ROM*/)(&uStack_1c,0,auStack_18);
  (*(code *)0x1047f3fa/*ROM*/)(&uStack_1c,1,0);
  (*(code *)0x1047f3fa/*ROM*/)(&uStack_1c,2,0);
  (*(code *)0x1047f3fa/*ROM*/)(&uStack_1c,3,0);
  (*(code *)0x1047f46a/*ROM*/)(&uStack_1c);
  uVar5 = call_virtual_slot_6_and_helper(param_1,0,1);
  free_heap_block_if_flagged_1047f182(auStack_18,2);
  free_heap_if_flag_set_1047f3b6(&uStack_1c,2);
  return uVar5;
}
