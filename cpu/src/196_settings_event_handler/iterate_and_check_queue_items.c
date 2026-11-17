/* @k10d iterate_and_check_queue_items @ 0x10492e4e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 196_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Iterates through a linked list of items, checks each with a helper, and cleans up the
 *   list.
 * summary:
 *   The function initializes a local stack array, calls call_kernel_with_short_id on a sub-
 *   structure, then loops through items retrieved by call_kernel_with_offset_arg. For each
 *   non-zero item, it calls test_flag_bits_in_struct with a size parameter (0x10) and sets
 *   a flag if the check passes. It then iterates through the local array calling
 *   reg_framework_send to remove items, and finally calls
 *   check_kernel_call_success_10459d88. The specific subsystem is not identifiable from the
 *   provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t iterate_and_check_queue_items(int param_1)

{
  uint8_t *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint8_t *puVar6;
  uint32_t uVar7;
  uintptr_t sp;
  int aiStack_19c [100];
  int iStack_c;
  
  puVar1 = &stack0xfffffff8;
  uVar7 = 0;
  iStack_c = 0;
  iVar3 = 0x13;
  iVar2 = 0;
  do {
    *(uint32_t *)((int)aiStack_19c + iVar2) = 0;
    *(uint32_t *)((int)aiStack_19c + iVar2 + 4) = 0;
    *(uint32_t *)((int)aiStack_19c + iVar2 + 8) = 0;
    *(uint32_t *)((int)aiStack_19c + iVar2 + 0xc) = 0;
    *(uint32_t *)((int)aiStack_19c + iVar2 + 0x10) = 0;
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 0x14;
  } while (-1 < iVar3);
  call_kernel_with_short_id((uint32_t *)(param_1 + 0x24));
  iVar5 = param_1 + 4;
  iVar3 = call_kernel_with_offset_arg(iVar5);
  puVar6 = puVar1;
  iVar2 = iStack_c;
  while (iStack_c = iVar2, iVar3 != 0) {
    if (iVar2 != 0) {
      *(int *)(puVar6 + -0x194) = iVar2;
      bVar4 = test_flag_bits_in_struct(iVar2,0x10);
      puVar6 = puVar6 + 4;
      if (bVar4) {
        uVar7 = 1;
      }
    }
    iVar3 = call_kernel_with_offset_arg(iVar5);
    iVar2 = iStack_c;
  }
  while (aiStack_19c[0] != 0) {
    reg_framework_send(iVar5);
    aiStack_19c[0] = *(int *)(puVar1 + -400);
    puVar1 = puVar1 + 4;
  }
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x24));
  return uVar7;
}
