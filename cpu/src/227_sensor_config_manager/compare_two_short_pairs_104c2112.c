/* @k10d compare_two_short_pairs_104c2112 @ 0x104c2112
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Checks if two short pairs differ, then resolves and compares their associated values
 *   via helper functions.
 * summary:
 *   The function first verifies that param_2 and param_3 contain non-zero short pairs that
 *   are not identical. It then iterates up to 6 times for each pair, calling
 *   read_byte_at_offset_1051ed64 to find a valid index (defaulting to 0 or 5 based on a
 *   flag at param_1+0x1e). If valid indices are found for both, it retrieves values using
 *   find_first_active_entry, processes them via a function pointer at 0x104c289e, and calls
 *   compare_two_structs_by_fields with the results. Finally, it cleans up using
 *   free_heap_if_flag_set_1045c56c and returns the result of compare_two_structs_by_fields,
 *   or 0 if the initial checks fail.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t compare_two_short_pairs_104c2112(int param_1,short *param_2,short *param_3)

{
  char cVar2;
  uint32_t uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int iStack_28;
  int iStack_24;
  uint8_t auStack_20 [8];
  uint8_t auStack_18 [16];
  
  if ((((*param_2 != 0) && (param_2[1] != 0)) && (*param_2 != *param_3)) &&
     (param_2[1] != param_3[1])) {
    iStack_24 = -1;
    iVar3 = 0;
    iVar5 = 5;
    do {
      iVar4 = iVar5;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar4 = iVar3;
      }
      cVar2 = read_byte_at_offset_1051ed64(param_2,iVar4);
      if (cVar2 != '\0') break;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
      iVar4 = iStack_24;
    } while (iVar3 < 6);
    iStack_24 = iVar4;
    iStack_28 = -1;
    iVar3 = 0;
    iVar5 = 5;
    do {
      iVar4 = iVar5;
      if (*(char *)(param_1 + 0x1e) != '\0') {
        iVar4 = iVar3;
      }
      cVar2 = read_byte_at_offset_1051ed64(param_3,iVar4);
      if (cVar2 != '\0') break;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
      iVar4 = iStack_28;
    } while (iVar3 < 6);
    iStack_28 = iVar4;
    if ((iStack_24 != -1) && (iStack_28 != -1)) {
      iVar3 = find_first_active_entry((int)param_2,iStack_24);
      (*(code *)0x104c289e/*ROM*/)(auStack_20,iVar3);
      iVar3 = find_first_active_entry((int)param_3,iStack_28);
      (*(code *)0x104c289e/*ROM*/)(auStack_18,iVar3);
      uVar1 = compare_two_structs_by_fields(param_1,auStack_20,auStack_18);
      free_heap_if_flag_set_1045c56c(auStack_18,2);
      free_heap_if_flag_set_1045c56c(auStack_20,2);
      return uVar1;
    }
  }
  return 0;
}
