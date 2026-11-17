/* @k10d process_entry_array_with_virtual_init @ 0x104be864
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Iterates over an array of entries, calling a virtual method to initialize specific
 *   fields in each entry.
 * summary:
 *   The function loops through a count of entries stored at param_1 + 0xeb8e. For each
 *   entry, it calls write_two_words_to_struct_104c1ff4 and invoke_callback_and_check_flag.
 *   It then iterates over 5 sub-fields (indices 0-4) of the current entry, using
 *   read_byte_at_offset_1051ed64 to check validity and find_first_active_entry to get a
 *   pointer. If valid, it invokes a virtual method (slot 2) on an object at param_1 + 0x48
 *   and stores the result in the sub-field's offset 0x28. Finally, it calls
 *   update_array_flags_via_virtual_call if the loop completed successfully.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104be8c8) overlaps instruction at (ram,0x104be8c6)
    */

int process_entry_array_with_virtual_init(int param_1)

{
  char cVar2;
  int iVar1;
  uint8_t uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint16_t *puVar7;
  int iVar8;
  int iStack_18;
  uint uStack_10;
  int iStack_c;
  
  iStack_c = 1;
  uStack_10 = 0;
  if (*(char *)(param_1 + 0xeb8e) != '\0') {
    do {
      puVar7 = (uint16_t *)(param_1 + 0x2c4c + uStack_10 * 0xb34);
      write_two_words_to_struct_104c1ff4(param_1,*puVar7,puVar7[1]);
      iStack_c = invoke_callback_and_check_flag(param_1,param_1 + 0x48);
      if (iStack_c == 0) {
        return 0;
      }
      iVar5 = 0;
      iStack_18 = 1;
      iVar4 = 5;
      do {
        iVar1 = iVar4;
        if (*(char *)(param_1 + 0x1e) != '\0') {
          iVar1 = iVar5;
        }
        pvVar6 = (void *)(param_1 + 0x2c4c + uStack_10 * 0xb34);
        cVar2 = read_byte_at_offset_1051ed64(pvVar6,iVar1);
        if (cVar2 != '\0') {
          iVar1 = find_first_active_entry((int)pvVar6,iVar1);
          iVar8 = **(int **)(param_1 + 0x48);
          uVar3 = (**(code **)(iVar8 + 0x14))
                            ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar8 + 0x10));
          *(uint8_t *)(iVar1 + 0x28) = uVar3;
        }
        iVar1 = iVar5 + 1;
        if (*(char *)(param_1 + 0x1e) == '\0') {
          iVar1 = iVar4 + -1;
        }
        cVar2 = read_byte_at_offset_1051ed64(pvVar6,iVar1);
        if (cVar2 != '\0') {
          iVar1 = find_first_active_entry((int)pvVar6,iVar1);
          iVar8 = **(int **)(param_1 + 0x48);
          uVar3 = (**(code **)(iVar8 + 0x14))
                            ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar8 + 0x10));
          *(uint8_t *)(iVar1 + 0x28) = uVar3;
        }
        iVar1 = iVar5 + 2;
        if (*(char *)(param_1 + 0x1e) == '\0') {
          iVar1 = iVar4 + -2;
        }
        cVar2 = read_byte_at_offset_1051ed64(pvVar6,iVar1);
        if (cVar2 != '\0') {
          iVar1 = find_first_active_entry((int)pvVar6,iVar1);
          iVar8 = **(int **)(param_1 + 0x48);
          uVar3 = (**(code **)(iVar8 + 0x14))
                            ((int)*(int **)(param_1 + 0x48) + (int)*(short *)(iVar8 + 0x10));
          *(uint8_t *)(iVar1 + 0x28) = uVar3;
        }
        iVar5 = iVar5 + 3;
        iVar4 = iVar4 + -3;
        iStack_18 = iStack_18 + -1;
      } while (-1 < iStack_18);
      uStack_10 = uStack_10 + 1 & 0xff;
    } while (uStack_10 < *(byte *)(param_1 + 0xeb8e));
  }
  if (iStack_c != 0) {
    iStack_c = update_array_flags_via_virtual_call(param_1);
  }
  return iStack_c;
}
