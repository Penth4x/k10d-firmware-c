/* @k10d select_and_activate_entry @ 0x104bd4fa
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Selects an entry from a table (by index or by searching up to 6 entries) and activates
 *   it via a helper.
 * summary:
 *   The function operates on an object at param_1, using a table located at param_1+0x2118
 *   with entry size 0xb34 and a count at param_1+0x8d0. If param_2 is -1, it searches the
 *   first 6 entries using read_byte_at_offset_1051ed64 to find a match, then calls
 *   find_first_active_entry with the found index. If param_2 is a valid index, it validates
 *   it with read_table_entry_if_present and calls find_first_active_entry directly. If the
 *   result of find_first_active_entry equals the default value (param_1+0x1408), it calls
 *   initialize_large_struct. The specific subsystem (e.g., lens, mode, setting) is not
 *   identifiable from the provided callees or code structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int select_and_activate_entry(int param_1,int param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_18;
  
  iStack_18 = param_1 + 0x1408;
  if (param_2 == -1) {
    psVar1 = (short *)(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118);
    if ((*psVar1 != 0) || (psVar1[1] != 0)) {
      iVar3 = 0;
      iVar4 = 5;
      do {
        iVar5 = iVar4;
        if (*(char *)(param_1 + 0x1e) != '\0') {
          iVar5 = iVar3;
        }
        cVar2 = read_byte_at_offset_1051ed64((void *)(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34),iVar5);
        if (cVar2 != '\0') {
          iStack_18 = find_first_active_entry(*(int *)(param_1 + 0x8d0) * 0xb34 + param_1 + 0x2118,iVar5);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar3 < 6);
    }
  }
  else {
    iVar3 = read_table_entry_if_present(param_1,param_2);
    if (iVar3 != 0) {
      iStack_18 = find_first_active_entry(param_1 + 0x2118 + *(int *)(param_1 + 0x8d0) * 0xb34,param_2);
    }
  }
  if (iStack_18 == param_1 + 0x1408) {
    initialize_large_struct((uint32_t *)(uint32_t)param_1);
  }
  return iStack_18;
}
