/* @k10d update_array_flags_via_virtual_call @ 0x104c075c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 226_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over a fixed-size array of entries, checking flags and updating a byte field
 *   via a virtual method call.
 * summary:
 *   The function calculates a base pointer into an array of 0xb34-byte structures using an
 *   index stored at param_1+0x8d0. It calls write_two_words_to_struct_104c1ff4 with the
 *   first two words of the current entry. If invoke_callback_and_check_flag returns non-
 *   zero, it loops three times, checking for the presence of entries at indices 0, 1, and 2
 *   (or 5, 4, 3 if a flag at param_1+0x1e is set) using read_byte_at_offset_1051ed64. For
 *   each existing entry, it retrieves the pointer via find_first_active_entry, invokes
 *   virtual slot 2 on the object at param_1+0x48, and stores the result in byte offset 0x28
 *   of the entry. The return value is the result of invoke_callback_and_check_flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104c07a2) overlaps instruction at (ram,0x104c07a0)
    */

int update_array_flags_via_virtual_call(int param_1)

{
  uint16_t *puVar1;
  int iVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  uint8_t uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_10;
  
  puVar1 = (uint16_t *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34);
  write_two_words_to_struct_104c1ff4(param_1,*puVar1,puVar1[1]);
  iVar3 = invoke_callback_and_check_flag(param_1,param_1 + 0x48);
  if (iVar3 != 0) {
    iVar8 = 0;
    iStack_10 = 1;
    iVar7 = 5;
    do {
      iVar4 = iVar7;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar4 = iVar8;
      }
      iVar2 = param_1 + 0x2118;
      cVar5 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2),iVar4);
      if (cVar5 != '\0') {
        iVar4 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2,iVar4);
        iVar9 = **(int **)(param_1 + 0x48);
        uVar6 = (((vtbl_entry*)(iVar9))[2].fn)
                          ((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar9))[2].adj);
        *(uint8_t *)(iVar4 + 0x28) = uVar6;
      }
      iVar4 = iVar8 + 1;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iVar7 + -1;
      }
      cVar5 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2),iVar4);
      if (cVar5 != '\0') {
        iVar4 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2,iVar4);
        iVar9 = **(int **)(param_1 + 0x48);
        uVar6 = (((vtbl_entry*)(iVar9))[2].fn)
                          ((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar9))[2].adj);
        *(uint8_t *)(iVar4 + 0x28) = uVar6;
      }
      iVar4 = iVar8 + 2;
      if (*(char *)(param_1 + 0x1e) == '\0') {
        iVar4 = iVar7 + -2;
      }
      cVar5 = read_byte_at_offset_1051ed64((void *)(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2),iVar4);
      if (cVar5 != '\0') {
        iVar4 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + iVar2,iVar4);
        iVar2 = **(int **)(param_1 + 0x48);
        uVar6 = (((vtbl_entry*)(iVar2))[2].fn)
                          ((int)*(int **)(param_1 + 0x48) + (int)((vtbl_entry*)(iVar2))[2].adj);
        *(uint8_t *)(iVar4 + 0x28) = uVar6;
      }
      iVar8 = iVar8 + 3;
      iVar7 = iVar7 + -3;
      iStack_10 = iStack_10 + -1;
    } while (-1 < iStack_10);
  }
  return iVar3;
}
