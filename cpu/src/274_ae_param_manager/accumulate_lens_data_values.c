/* @k10d accumulate_lens_data_values @ 0x105165cc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Iterates a list of lens objects, summing values from offset 0x67a or counting entries
 *   based on a flag at 0x2c.
 * summary:
 *   The function retrieves a count from param_1+0x58 and allocates a temporary array of
 *   pointers. It iterates through the list, reading a pointer from each entry and checking
 *   a byte at offset 0x2c. If the byte is zero, it increments a counter; otherwise, it adds
 *   the value at offset 0x67a. The running total is stored at param_1+0x324. Finally, it
 *   stores the sum plus a constant 250000 at param_1+0x800. The use of 0x67a and 0x2c
 *   suggests lens data fields, but the specific camera subsystem is not definitively
 *   identified.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void accumulate_lens_data_values(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 != 0) {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x344));
  }
  iVar6 = 0;
  iVar4 = count_active_entries_in_seven_slots_105136e0(*(uint32_t *)(param_1 + 0x58));
  iVar5 = heap_alloc_2((iVar4 + 1) * 4);
  collect_matching_entries_1051377c(*(uint32_t *)(param_1 + 0x58),iVar5,iVar4 + 1);
  *(uint32_t *)(param_1 + 0x324) = 0;
  iVar2 = 0;
  if (0 < iVar4) {
    iVar4 = iVar4 + -3;
    iVar3 = 0;
    if (2 < iVar4) {
      do {
        iVar1 = *(int *)(iVar5 + iVar3);
        iVar7 = *(int *)(iVar1 + 0x698);
        if (*(char *)(iVar1 + 0x2c) == '\0') {
          iVar2 = iVar2 + 1;
        }
        else {
          iVar2 = (uint)*(ushort *)(iVar1 + 0x67a) + iVar2;
        }
        *(int *)(param_1 + 0x324) = iVar2;
        iVar1 = *(int *)(iVar5 + iVar3 + 4);
        iVar8 = *(int *)(iVar1 + 0x698);
        if (*(char *)(iVar1 + 0x2c) == '\0') {
          iVar2 = iVar2 + 1;
          *(int *)(param_1 + 0x324) = iVar2;
        }
        else {
          iVar2 = (uint)*(ushort *)(iVar1 + 0x67a) + iVar2;
          *(int *)(param_1 + 0x324) = iVar2;
        }
        iVar1 = *(int *)(iVar5 + iVar3 + 8);
        iVar6 = *(int *)(iVar1 + 0x698) + iVar8 + iVar7 + iVar6;
        if (*(char *)(iVar1 + 0x2c) == '\0') {
          iVar2 = iVar2 + 1;
          *(int *)(param_1 + 0x324) = iVar2;
        }
        else {
          iVar2 = (uint)*(ushort *)(iVar1 + 0x67a) + iVar2;
          *(int *)(param_1 + 0x324) = iVar2;
        }
        iVar4 = iVar4 + -3;
        iVar3 = iVar3 + 0xc;
      } while (-1 < iVar4);
    }
    for (iVar4 = iVar4 + 2; -1 < iVar4; iVar4 = iVar4 + -1) {
      iVar2 = *(int *)(iVar5 + iVar3);
      iVar6 = *(int *)(iVar2 + 0x698) + iVar6;
      if (*(char *)(iVar2 + 0x2c) == '\0') {
        *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
      }
      else {
        *(uint *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + (uint)*(ushort *)(iVar2 + 0x67a);
      }
      iVar3 = iVar3 + 4;
    }
  }
  heap_free_2(iVar5);
  if (param_2 != 0) {
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x344));
  }
  *(int *)(param_1 + 800) = iVar6 + 250000;
  return;
}
