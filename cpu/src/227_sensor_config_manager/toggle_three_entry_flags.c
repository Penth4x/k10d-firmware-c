/* @k10d toggle_three_entry_flags @ 0x104c187a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over three entries in a list, setting or clearing a flag at offset 0x30 based
 *   on a state check.
 * summary:
 *   The function checks a state via init_buffer_with_size_0x10000. If the state is zero, it
 *   iterates three times, looking up entries via read_byte_at_offset_1051ed64 and setting
 *   byte 0x30 to 1. If the state is non-zero, it iterates three times, clearing byte 0x30
 *   to 0, calling process_event_with_callback_104c1bae, and writing the result of
 *   read_struct_field_0x2c to offset 0x2c. It returns 1 on success or 0 if an error occurs
 *   in the non-zero branch.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c1aa6) overlaps instruction at (ram,0x104c1aa4)
    */

uint32_t toggle_three_entry_flags(int param_1,void *param_2)

{
  int iVar1;
  char cVar4;
  int iVar2;
  uint32_t uVar3;
  int iVar5;
  int iVar6;
  uint32_t uStack_14;
  int iStack_10;
  int iStack_c;
  
  uStack_14 = 1;
  iVar1 = init_buffer_with_size_0x10000(param_1);
  iVar6 = 0;
  iVar5 = 5;
  if (iVar1 == 0) {
    iStack_10 = 1;
    do {
      iVar1 = iVar5;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar1 = iVar6;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar1 + 0x30) = 1;
      }
      iVar1 = iVar6 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -1;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar1 + 0x30) = 1;
      }
      iVar1 = iVar6 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -2;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar1 + 0x30) = 1;
      }
      iVar6 = iVar6 + 3;
      iVar5 = iVar5 + -3;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
    uStack_14 = 0;
  }
  else {
    iStack_c = 1;
    do {
      iVar1 = iVar5;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar1 = iVar6;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar2 + 0x30) = 0;
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        iVar2 = process_event_with_callback_104c1bae((int)(param_1),(uint32_t *)(iVar2));
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        uVar3 = read_struct_field_0x2c(param_1);
        *(uint32_t *)(iVar1 + 0x2c) = uVar3;
      }
      iVar1 = iVar6 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -1;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar2 + 0x30) = 0;
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        iVar2 = process_event_with_callback_104c1bae((int)(param_1),(uint32_t *)(iVar2));
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        uVar3 = read_struct_field_0x2c(param_1);
        *(uint32_t *)(iVar1 + 0x2c) = uVar3;
      }
      iVar1 = iVar6 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar1 = iVar5 + -2;
      }
      cVar4 = read_byte_at_offset_1051ed64(param_2,iVar1);
      if (cVar4 != '\0') {
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        *(uint8_t *)(iVar2 + 0x30) = 0;
        iVar2 = find_first_active_entry((int)param_2,iVar1);
        iVar2 = process_event_with_callback_104c1bae((int)(param_1),(uint32_t *)(iVar2));
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        iVar1 = find_first_active_entry((int)param_2,iVar1);
        uVar3 = read_struct_field_0x2c(param_1);
        *(uint32_t *)(iVar1 + 0x2c) = uVar3;
      }
      iVar6 = iVar6 + 3;
      iVar5 = iVar5 + -3;
      iStack_c = iStack_c + -1;
    } while (-1 < iStack_c);
    invoke_virtual_slot_two_104bf5b6(param_1);
  }
  return uStack_14;
}
