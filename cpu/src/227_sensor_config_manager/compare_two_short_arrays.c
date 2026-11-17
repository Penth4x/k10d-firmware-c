/* @k10d compare_two_short_arrays @ 0x104c1e2e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Compares two short arrays element-by-element and returns a result from a helper if they
 *   match.
 * summary:
 *   The function first checks if the first two elements of param_2 and param_3 are equal.
 *   If they are, it iterates up to 6 times, using read_byte_at_offset_1051ed64 to check
 *   elements and find_first_active_entry to retrieve values. It copies 8-byte chunks to the
 *   stack and calls compare_two_structs_by_fields with the result.
 *   free_heap_if_flag_set_1045c56c is called on the stack buffers, likely for cleanup or
 *   memory management. The role of the specific data being compared is not determinable
 *   from the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compare_two_short_arrays(int param_1,short *param_2,short *param_3)

{
  char cVar3;
  int iVar1;
  int iVar2;
  uint8_t *puVar4;
  uint8_t *puVar5;
  uintptr_t sp;
  int iStack_38;
  int iStack_34;
  int iStack_28;
  uint32_t uStack_24;
  uint8_t auStack_20 [24];
  
  if (*param_2 == *param_3) {
    iStack_28 = 0;
    if (param_2[1] == param_3[1]) {
      iStack_28 = 0;
      iStack_38 = 0;
      iStack_34 = 5;
      puVar4 = auStack_20 + 8;
      uStack_24 = param_1;
      do {
        iVar2 = iStack_38;
        if (*(char *)(uStack_24 + 0x1e) == '\0') {
          iVar2 = iStack_34;
        }
        cVar3 = read_byte_at_offset_1051ed64(param_2,iVar2);
        if ((cVar3 != '\0') && (cVar3 = read_byte_at_offset_1051ed64(param_3,iVar2), cVar3 != '\0')) {
          iVar1 = find_first_active_entry((int)param_2,iVar2);
          (*(code *)0x104c289e/*ROM*/)(puVar4,iVar1);
          iVar1 = 8;
          do {
            iVar1 = iVar1 + -1;
            auStack_20[iVar1] = puVar4[iVar1];
          } while (iVar1 != 0);
          iVar2 = find_first_active_entry((int)param_3,iVar2);
          (*(code *)0x104c289e/*ROM*/)(puVar4,iVar2);
          iVar2 = 8;
          do {
            iVar1 = iVar2 + -1;
            auStack_20[iVar2 + 0xf] = puVar4[iVar1];
            iVar2 = iVar1;
          } while (iVar1 != 0);
          puVar5 = auStack_20 + 0x10;
          iStack_28 = compare_two_structs_by_fields(uStack_24,auStack_20,puVar5);
          if (iStack_28 == 0) {
            free_heap_if_flag_set_1045c56c(puVar5,2);
            free_heap_if_flag_set_1045c56c(auStack_20,2);
            return 0;
          }
          free_heap_if_flag_set_1045c56c(puVar5,2);
          free_heap_if_flag_set_1045c56c(auStack_20,2);
        }
        iStack_38 = iStack_38 + 1;
        iStack_34 = iStack_34 + -1;
      } while (iStack_38 < 6);
    }
  }
  else {
    iStack_28 = 0;
  }
  return iStack_28;
}
