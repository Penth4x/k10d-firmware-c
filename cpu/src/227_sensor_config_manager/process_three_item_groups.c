/* @k10d process_three_item_groups @ 0x104c15bc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over three groups of items, checking existence and setting a flag or updating
 *   state based on a condition.
 * summary:
 *   The function first calls init_buffer_with_size_0x10000 to check a condition. If the
 *   condition is false, it loops three times, calling read_byte_at_offset_1051ed64 to check
 *   for an item and find_first_active_entry to get a pointer, then sets byte offset 0x30 to
 *   1. If the condition is true, it loops three times, sets byte offset 0x30 to 0, updates
 *   an integer at offset 0xfd94, calls copy_and_dispatch_param_block, and stores the result
 *   of read_struct_field_0x2c at offset 0x2c. It finally calls
 *   invoke_virtual_slot_two_104bf5b6 in the true branch and returns a status flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c1864) overlaps instruction at (ram,0x104c1862)
    */

uint32_t process_three_item_groups(int param_1,void *param_2)

{
  int iVar1;
  char cVar4;
  int iVar2;
  uint32_t uVar3;
  int iVar5;
  int iStack_1c;
  int iStack_18;
  uint32_t uStack_14;
  int iStack_10;
  int iStack_c;
  
  uStack_14 = 1;
  iVar1 = init_buffer_with_size_0x10000(param_1);
  iVar5 = 5;
  if (iVar1 == 0) {
    iStack_18 = 0;
    iStack_10 = 1;
    do {
      iVar1 = iStack_18;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar1 + 0x30) = 1;
      }
      iVar1 = iStack_18 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -1;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar1 + 0x30) = 1;
      }
      iVar1 = iStack_18 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -2;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar1 + 0x30) = 1;
      }
      iVar5 = iVar5 + -3;
      iStack_18 = iStack_18 + 3;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
    uStack_14 = 0;
  }
  else {
    iStack_1c = 0;
    iStack_c = 1;
    do {
      iVar1 = iStack_1c;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar2 + 0x30) = 0;
        *(int *)(param_1 + 0xfd94) =
             param_1 + 0xebac + *(int *)(param_1 + 0x8d0) * 0x2fc + iVar1 * 0x2fc;
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        iVar2 = copy_and_dispatch_param_block((int)(param_1),(uint32_t *)(iVar2));
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        uVar3 = read_struct_field_0x2c(param_1);
        *(uint32_t *)(iVar1 + 0x2c) = uVar3;
      }
      iVar1 = iStack_1c + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -1;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar2 + 0x30) = 0;
        *(int *)(param_1 + 0xfd94) =
             param_1 + 0xebac + *(int *)(param_1 + 0x8d0) * 0x2fc + iVar1 * 0x2fc;
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        iVar2 = copy_and_dispatch_param_block((int)(param_1),(uint32_t *)(iVar2));
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        uVar3 = read_struct_field_0x2c(param_1);
        *(uint32_t *)(iVar1 + 0x2c) = uVar3;
      }
      iVar1 = iStack_1c + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -2;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar2 + 0x30) = 0;
        *(int *)(param_1 + 0xfd94) =
             param_1 + 0xebac + *(int *)(param_1 + 0x8d0) * 0x2fc + iVar1 * 0x2fc;
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        iVar2 = copy_and_dispatch_param_block((int)(param_1),(uint32_t *)(iVar2));
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        uVar3 = read_struct_field_0x2c(param_1);
        *(uint32_t *)(iVar1 + 0x2c) = uVar3;
      }
      iVar5 = iVar5 + -3;
      iStack_1c = iStack_1c + 3;
      iStack_c = iStack_c + -1;
    } while (-1 < iStack_c);
    invoke_virtual_slot_two_104bf5b6(param_1);
  }
  return uStack_14;
}
