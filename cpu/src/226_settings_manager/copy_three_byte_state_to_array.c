/* @k10d copy_three_byte_state_to_array @ 0x104c0ba8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 3-byte state from param_1+0x4a8 into up to 9 entries of a dynamically sized
 *   array.
 * summary:
 *   The function calculates a base pointer for an array using a stride of 0xb34 and an
 *   index from param_1+0x8d0. It calls invoke_virtual_method_on_subobject_104bfd7e to
 *   determine a count (max 3 iterations). In each iteration, it checks three specific
 *   indices (0, 1, 2 or 5, 4, 3 depending on a flag at param_1+0x1e) using
 *   read_byte_at_offset_1051ed64. If an index is valid, it retrieves a pointer via
 *   find_first_active_entry and writes the 3-byte value from param_1+0x4a8 to offset 0x1d4
 *   of that entry.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c0bf0) overlaps instruction at (ram,0x104c0bee)
    */

int copy_three_byte_state_to_array(int param_1)

{
  uint16_t *puVar1;
  int iVar2;
  char cVar5;
  int iVar3;
  int iVar4;
  int iVar6;
  int iStack_24;
  int iStack_20;
  int iStack_10;
  
  puVar1 = (uint16_t *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34);
  write_two_words_to_struct_104c1ff4(param_1,*puVar1,puVar1[1]);
  iVar2 = invoke_virtual_method_on_subobject_104bfd7e(param_1,param_1 + 0x4a8);
  if (iVar2 != 0) {
    iStack_20 = 0;
    iStack_10 = 1;
    iStack_24 = 5;
    do {
      iVar4 = iStack_20;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iStack_24;
      }
      iVar6 = param_1 + 0x2118;
      cVar5 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6),iVar4);
      if (cVar5 != '\0') {
        iVar3 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint16_t *)(iVar3 + 0x1d4) = *(uint16_t *)(param_1 + 0x4a8);
        iVar3 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint8_t *)(iVar3 + 0x1d6) = *(uint8_t *)(param_1 + 0x4ab);
        iVar4 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint8_t *)(iVar4 + 0x1d7) = *(uint8_t *)(param_1 + 0x4aa);
      }
      iVar4 = iStack_20 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iStack_24 + -1;
      }
      cVar5 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6),iVar4);
      if (cVar5 != '\0') {
        iVar3 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint16_t *)(iVar3 + 0x1d4) = *(uint16_t *)(param_1 + 0x4a8);
        iVar3 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint8_t *)(iVar3 + 0x1d6) = *(uint8_t *)(param_1 + 0x4ab);
        iVar4 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint8_t *)(iVar4 + 0x1d7) = *(uint8_t *)(param_1 + 0x4aa);
      }
      iVar4 = iStack_20 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iStack_24 + -2;
      }
      cVar5 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6),iVar4);
      if (cVar5 != '\0') {
        iVar3 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint16_t *)(iVar3 + 0x1d4) = *(uint16_t *)(param_1 + 0x4a8);
        iVar3 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint8_t *)(iVar3 + 0x1d6) = *(uint8_t *)(param_1 + 0x4ab);
        iVar4 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar6,iVar4);
        *(uint8_t *)(iVar4 + 0x1d7) = *(uint8_t *)(param_1 + 0x4aa);
      }
      iStack_20 = iStack_20 + 3;
      iStack_24 = iStack_24 + -3;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
  }
  return iVar2;
}
